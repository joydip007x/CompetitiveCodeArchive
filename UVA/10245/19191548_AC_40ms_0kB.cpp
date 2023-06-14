#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        int

int n;
double ans1;
struct Point {double x,y ; };
Point p[20005];
double dist( Point a, Point b){
    return sqrt( ((a.x-b.x)*(a.x-b.x)) + ((a.y-b.y)*(a.y-b.y) ) )*1.00;
}
Point tmp[20005],mid ;
double extendedclos(int a, int b, double mn){

      mid=p[ (a+b)/2];
     int k=a,index=0; ///k=0;
     while(k<=b)
     {
         if( abs(p[k].x-mid.x)<mn ) tmp[index++]=p[k];
         k++;
     }
     double tmpans=INT_MAX*1.00;
     for(int i=0; i<index ; i++)
     {
         for(int j=i+1; j<index and abs( tmp[i].y-tmp[j].y )<mn;j++  )
            tmpans=min(tmpans, dist( tmp[i] , tmp[j]) );
     }
     return tmpans*1.00;
}
void ysort(int a,int b){
   int i=a, e1=(a+b)>>1 ;
   int j=e1+1 , e2=b,k=a;
   while( i<=e1 and j<=e2 ){
    if( p[i].y<=p[j].y  )  tmp[k++]=p[i++];
    else                   tmp[k++]=p[j++];
   }
   while(i<=e1) tmp[k++]=p[i++];
   while(j<=e2) tmp[k++]=p[j++];
   for(int i=a; i<=b ; i++)  p[i]=tmp[i];
}
double clospair(int a, int b){

   if(a==b) return INT_MAX*1.00;
   double mina=clospair( a, (a+b)>>1 );
   double minb=clospair( ((a+b)>>1)+1 , b);
   ysort(a,b);
   return min({ mina,minb, extendedclos(a,b,min(mina,minb))  });
}
bool cmp(const Point a, const Point b)
{
    return a.x<b.x;
}
int main()
{
    int kk=0;
   while( ~scanf("%d",&n) and n){
    ans1=INT_MAX*1.00;
    for(int i=0 ; i<n ; i++)
    {
        scanf("%lf %lf",&p[i].x,&p[i].y);
    }
    sort(p,p+n,cmp);
    if(n==1){printf("INFINITY\n"); continue ;}
    else if(n==2)  ans1=dist(p[0],p[1]);
    else ans1=clospair(0,n-1) ;
    if( ans1<=10000.00000 ) printf("%.4lf\n",ans1*1.0000000);
    else printf("INFINITY\n");
    kk=1;
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
