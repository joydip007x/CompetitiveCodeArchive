#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        int
#define sz 105

int n, a[sz] , b[sz] ,dis1,dis2,dis3 ;
struct Point{
  int x, y;
} p,q,r;

bool orientation( Point a, Point b, Point c)
{
     ll o=( (b.y-a.y) *(c.x-b.x) )- ( (c.y-b.y)*(b.x-a.x) );
     if(o==0) return false;
     return true;
}
ll dist( Point a, Point b )
{
    return (  a.x-b.x )*(a.x-b.x) + (a.y-b.y)*(a.y-b.y) ;
}
int main()
{

   while(scanf("%d",&n) !=EOF )
   {
       int cnt=0;
       for(int i=0 ; i<n;i++)scanf("%d %d",&a[i],&b[i]);
      //// cout<<" INPUT END \n";
       for(int i=0 ; i<n ; i++)
        {
            for(int j=i+1 ; j<n ; j++)
            {
                for(int k=j+1 ; k<n ; k++)
                {
                     p.x=a[i] , p.y=b[i];
                     q.x=a[j] , q.y=b[j];
                     r.x=a[k] , r.y=b[k];
                     ///cout<<" motherfuk\n";
                   if(  !orientation(p,q,r)  ) continue;
                   // cout<<" triend2 \n";
                    dis1=dist(p,q);
                    dis2=dist(p,r);
                    dis3=dist(r,q);
                    vector<int>v; v.pb(dis1); v.pb(dis2); v.pb(dis3);
                    sort(v.begin() ,v.end()  );
                    if( v[2] !=v[1] and v[0]==v[1] ) cnt++;
                    else if (  v[0]!=v[1] and v[1]==v[2] ) cnt++;
                   // cout<<" tried \n";
                }
            }
        }
        printf("%d\n",cnt);
   }
}


/*
6
-4 1
-3 3
-2 1
-2 0
-1 1
-1 -1
*/


///author-joydip007x         ///
///Time&Date-Whenever i submit///
