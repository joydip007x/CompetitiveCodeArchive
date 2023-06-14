#include<bits/stdc++.h>
using namespace std;
#define  sz   200009
#define ll  long long
#define INT_MX 1000000099
#define ee         cout<<" ReaL MADRID \n";
#define pi acos(-1.00)*1.000000
#define eps 1e-6
struct Point{
   double x,y;
};
struct Point2{
   double x,y;
};
Point p[sz+33], v[sz+23],swapx,A;
int n,lmt1,indx,aind;
double mP,mQ,nom,rans;
double dist(Point p1,Point p2){
    return (p1.x-p2.x)*(p1.x-p2.x)+(p1.y-p2.y)*(p1.y-p2.y);
}
double orient(  Point A , Point B, Point C ){
  double o=(  B.y-A.y ) *(  C.x-A.x ) - ( C.y-A.y ) * ( B.x-A.x );
  return o;
}
void removeDuplicates(){

   aind=0;
   for(int i=1; i<n ; i++)
   {
       while(i+1<n and orient(A,p[i],p[i+1])==0) i++;
       p[++aind]=p[i];
   }
   lmt1=aind;
}
void Findans(){
    
   v[0]=p[0];
   v[1]=p[1];
   int st=1;
   for(int i=2 ; i<=lmt1; i++){

     v[++st]=p[i];
     while(  orient(v[st-2],v[st-1],v[st])>=0 ) v[ st-1 ]=v[st] , --st;
   }
   lmt1=st;
  // ee;for(int i=0 ; i<=lmt1; i++) cout<<v[i].x<<" , "<<v[i].y<<endl;
}
bool cmp(Point b, Point c){
   double  xx=orient(A, b, c);
   if(xx<0.00) return true;
   if(xx>0.00) return false;
   double disB=( b.x-A.x )* ( b.x-A.x) + (  b.y-A.y ) *( b.y-A.y );
   double disC=( c.x-A.x )* ( c.x-A.x) + (  c.y-A.y ) *( c.y-A.y );
   return (disB<disC ) ;
}
double D(  double c){
  return c*(180 /pi) ;
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
        swapx.x=swapx.y=INT_MX;
        scanf("%d",&n);
        for(int i=0 ; i<n ; i++){
            scanf("%lf %lf",&p[i].x, &p[i].y);
            if(p[i].y<swapx.y) swapx.y=p[i].y, swapx.x=p[i].x,indx=i;
            else if (p[i].y==swapx.y && p[i].x<swapx.x ) swapx.x=p[i].x, indx=i;
        }
        if(n<3) {  printf("Case %d: 0.000000\n",cas) ; continue;}
        swap(p[indx],p[0]);
        A=p[0];
        sort(p+1,p+n,cmp);
        removeDuplicates();
        if(aind<2){ printf("Case %d: 0.0000\n",cas) ; continue; }
        Findans();
        int sz1=lmt1+1;
        for(int i=0;i<=lmt1;i++){
        int j=(i+1)%sz1;
        int k=(i-1+sz1)%sz1;
        rans = min(rans,(calc(v[i],v[j],v[k])*180)/pi*1.00);
        }
        printf("Case %d: %0.6lf\n",cas,rans );
     }
//////joydip007X
}
