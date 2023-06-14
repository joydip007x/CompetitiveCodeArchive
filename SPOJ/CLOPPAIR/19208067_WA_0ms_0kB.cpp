#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        int
#define sz 50000+10
ll n,ansa,ansb,unvis=0;
double ans1=LONG_MAX*1.00,ans;
struct Point
{
    double x,y ;
};
Point p[sz], mid,px,qx;

map< pair<double ,double >, ll >m;
 double dist(Point p1,Point p2)
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}
double extendedclos(ll a, ll b,  double mn){

    Point tmp[sz];
    mid=p[(int)((a+b)/2)]; ll i=max(0,(int)a),index=0,j=min(b,n-1);
    while(i<=j){
        if(   abs(p[i].x-mid.x)<mn ) tmp[index++]=p[i];
        i++;
    }

    long double tmpmn=LONG_MAX*1.00;
    for(i=0 ; i<index ; i++)
    {
        for(ll j=i+1; j<index  and abs( tmp[i].y-tmp[j].y )<mn ; j++){
            long double lowclas= dist( tmp[i],tmp[j]  );
            if(  lowclas <tmpmn and( !unvis || lowclas<dist(px,qx)  ) ){
                px=tmp[i] ;
                qx=tmp[j] ;
                unvis=1;
                tmpmn= lowclas;;
            }
    }
    }
    ////cout<<tmpmn<<endl;
    return tmpmn*1.000;
}
void ysort(ll a ,ll b){
   Point tmp[sz];
  ll i=a,e1=(a+b)/2 ;
  ll e2=b,j=e1+1,k=a;
  while(i<=e1 and j<=e2)
  {
      if(p[i].y<=p[j].y) tmp[k++]=p[i++];
      else               tmp[k++]=p[j++];
  }
  while(i<=e1) tmp[k++]=p[i++];
  while(j<=e2) tmp[k++]=p[j++];
  for(i=a; i<=b;i++)p[i]=tmp[i];
  return;
}
 double clospair(ll a, ll b){

  if(a==b) return INT_MAX*1.00;
  ll mid=(a+b)/2;
   double mina=abs(clospair(a, mid));
   double minb=abs(clospair(mid+1, b));
   double mind=min(mina,minb);
  ysort(a,b);
  return min(mind,extendedclos(a,b,mind));
}
bool cmp(const Point a,const Point b){
 return a.x<b.x;

}
int main(){

  scanf("%d",&n);
  for(ll i=0;i<n;i++){
     scanf("%lf %lf",&p[i].x,&p[i].y);
     m[{p[i].x,p[i].y}]=i;
     ///cout<<p[i].x<<" & :" <<p[i].y<<" = "<<m[ {p[i].x, p[i].y } ]<<endl;
  }
  sort(p,p+n,cmp);
  px.x=INT_MAX*1.00;
  ans1=clospair(0,n-1);
  ansa=m[ {px.x,px.y}  ];
  ansb=m[ {qx.x,qx.y}  ];
  printf("%d %d %.6lf\n",min(ansa,ansb),max(ansa,ansb),ans1*1.00);
//   for(ll i=0;i<n;i++){
//     printf("%d %d \n",p[i].x,p[i].y);
//  }
}
