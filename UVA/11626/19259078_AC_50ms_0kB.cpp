#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long
#define MXX 90000000009
ll n,xind,t,ind,lmt1,xxxind;
struct Point {ll x,y ; };
Point p[100009],xxx;

ll orient(Point a, Point b,Point c){
  ll k= (b.y-a.y)*(c.x-a.x) - (c.y-a.y)*(b.x-a.x) ;
    return k;
}
bool cmp(const Point b, const Point c)
{
   ll x=orient( xxx,b,c );
   ll disb= (xxx.x-b.x)*(xxx.x-b.x)  - (xxx.y-b.y)* (xxx.y-b.y);
   ll disc= (xxx.x-c.x)*(xxx.x-c.x)  - (xxx.y-c.y)* (xxx.y-c.y);
   if(!x)return (disb>disc);
   if(x<0) return true;
   return false;
}
bool cmp2(const Point b, const Point c)
{
   ll x=orient( xxx,b,c );
   ll disb= (xxx.x-b.x)*(xxx.x-b.x)  - (xxx.y-b.y)* (xxx.y-b.y);
   ll disc= (xxx.x-c.x)*(xxx.x-c.x)  - (xxx.y-c.y)* (xxx.y-c.y);
   if(!x)return (disb<disc);
   if(x<0) return true;
   return false;
   }
int main()
{
   scanf("%lld",&t);
   while(t--){

    scanf("%lld",&n); ind=0;
    xxx.x=xxx.y=MXX;
    for(int i=0 ; i<n ; i++)
    {
        ll x,y; char cc;
        scanf("%lld %lld %c",&x ,&y, &cc);
        if(cc=='N')continue;
        p[ind].x=x ;
        p[ind].y=y;
        if(  x<xxx.x || (x==xxx.x and y<xxx.y) ) { xxx=p[ind] ; xxxind=ind; }
        ind++;
    }
    lmt1=ind;
    swap(p[0], p[xxxind] );
    xxx=p[0];
    sort(p+1,p+lmt1, cmp);
    sort( p+(lmt1/2+1) ,  p+lmt1 ,cmp2);
    printf("%d\n",lmt1);
    for(int i=0 ; i<lmt1; i++)
    {
        printf( "%lld %lld\n",p[i].x,p[i].y );
    }

   }

}
/*
5
0 2
6 67
43 71
39 107
189 140
0
/*
2
0 0
7071.0678118654752440084436210485 7071.0678118654752440084436210485
*/
///author-joydip007x         ///
///Time&Date-Whenever i submit///
