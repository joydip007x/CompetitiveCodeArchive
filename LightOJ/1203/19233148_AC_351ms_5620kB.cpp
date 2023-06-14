#include<bits/stdc++.h>
using namespace std;
#define sz 100000+10
#define ll                        long long
#define INT_MX 1000000099
#define ee         cout<<" ReaL MADRID \n";
#define pi  3.14159265358979323846
#define eps 1e-6
struct Point{
   ll x,y;
};
Point p[sz+33], v[sz+23],Pivot;
ll n,lmt1,indx,aind;
double rans;
ll orient(Point p,Point q,Point r){
    return ((q.y-p.y)*(r.x-q.x))-((r.y-q.y)*(q.x-p.x));
}
ll dist(Point p1,Point p2){
    return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}
void removeDuplicates(){

   aind=0;
   for(int i=1; i<n ; i++)
   {
    while(i+1<n and orient(Pivot,p[i],p[i+1])==0) i++;
       p[++aind]=p[i];
   }
   lmt1=aind;
   return;
}
void Findans(){

   v[0]=p[0];
   v[1]=p[1];
   int st=1;
   for(int i=2 ; i<=lmt1; i++){

     v[++st]=p[i];
     while(    orient(v[st-2],v[st-1],v[st])>=0 ) v[ --st]=p[i];
   }
   lmt1=st;
   return;
   ////ee;for(int i=0 ; i<=lmt1; i++) cout<<v[i].x<<" , "<<v[i].y<<endl;
}
bool cmp(Point a,Point b){
    if(orient(Pivot,a,b)==0) 
        return dist(Pivot,a)<dist(Pivot,b);  

    ll slop1x=a.x-Pivot.x; ll slop1y=a.y-Pivot.y;
    ll slop2x=b.x-Pivot.x; ll slop2y=b.y-Pivot.y;
    return (atan2((double)slop1y,(double)slop1x)-atan2((double)slop2y,(double)slop2x))<0; 
}
double calc(Point D,Point B,Point C)
{
    double a = sqrt((double)dist(D,B));
    double b = sqrt((double)dist(B,C));
    double c = sqrt((double)dist(C,D));
    return acos((a*a+c*c-b*b)/(2*a*c));
}
int main()
{
     int t;scanf("%d",&t);
     for(int cas=1; cas<=t; cas++){
        rans=1000.0000;
        scanf("%lld",&n);
        for(int i=0 ; i<n ; i++){
            scanf("%lld %lld",&p[i].x, &p[i].y);

        }
        ll ymin=p[0].y,mn=0;
        for(int i=1; i<n; i++) //Finding the bottom-most point
        {
            if(p[i].y<ymin || (ymin==p[i].y && p[i].x<p[mn].x))
            {
                ymin=p[i].y;
                mn=i;
            }
        }
        indx=mn;
        if(n<3) {  printf("Case %d: 0.000000\n",cas) ; continue;}
        swap(p[0],p[indx]);
        Pivot=p[0];
        sort(&p[1],p+n,cmp);
        removeDuplicates();
        if(aind<2){ printf("Case %d: 0.000000\n",cas) ; continue; }
        Findans();
        int sz1=lmt1+1;
        for(int i=0;i<=lmt1;i++){
        int j=(i+1)%sz1;
        int k=(i-1+sz1)%sz1;
        rans = min(rans,(calc(v[i],v[j],v[k])*180)/pi);
        }
        printf("Case %d: %0.6lf\n",cas,rans);
     }
     return 0;

}
/*
1
4
0 0
10 0
10 10
2 1
*/




///author-joydip007x         ///
///Time&Date-Whenever i submit///
