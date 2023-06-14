#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        int
#define sz 50000+10
ll n,ansa,ansb,unvis=0;
double ans1=2147483648.00,ans;
struct Point
{
    double x,y ;
};
Point p[sz], px,qx, tmp[sz];
map< pair<double ,double >, ll >m;
 double dist(Point p1,Point p2)
{
    return sqrt((p1.x-p2.x)*(p1.x-p2.x) + (p1.y-p2.y)*(p1.y-p2.y));
}
double extendedclos(ll a, ll b,  double mn){

    Point mid=p[(int)((a+b)/2)], strp[sz];
    ll i=a,index=0,j=b;
    while(i<=j){
        if( abs(p[i].x-mid.x)<=mn ) strp[index++]=p[i];
        i++;
    }
    for(i=0 ; i<index ; i++)
    {
        for(ll j=i+1; j<index && abs( strp[i].y-strp[j].y )<mn ; j++){
             double lowclas= dist( strp[i],strp[j]  );
            if(ans1>lowclas){
                px=strp[i] , qx=strp[j];
                ans1=lowclas;
            }
            else ans1=min(ans1,lowclas);
      }
    }
    ////cout<<tmpmn<<endl;
    return ans1*1.000;
}
void ysort(ll a ,ll b){
  ll i=a,e1=(a+b)/2 ;
  ll e2=b,j=e1+1,k=a;
  while(i<=e1 and j<=b)
  {
      if(p[i].y<=p[j].y) tmp[k++]=p[i++];
      else               tmp[k++]=p[j++];
  }
  while(i<=e1) tmp[k++]=p[i++];
  while(j<=b) tmp[k++]=p[j++];
  for(i=a; i<=b;i++)p[i]=tmp[i];
}
 double clospair(ll a, ll b){

  if(a==b) return INT_MAX*1.00;
  ll mid=(a+b)/2;
   double mina=clospair(a, mid);
   double minb=clospair(mid+1, b);
   double mind=min(mina,minb);
   ysort(a,b);
  return extendedclos(a,b,mind) ;
}
bool cmp(const struct Point a,const struct  Point b){
 return a.x<b.x;

}
int main(){

  scanf("%d",&n);
  for(ll i=0;i<n;i++){
     scanf("%lf %lf",&p[i].x,&p[i].y);
     m[{p[i].x,p[i].y}]=i;
  }
  sort(p,p+n,cmp);
  px.x=INT_MAX*1.00;
  ans=clospair(0,n-1);
  ansa=m[ {px.x,px.y}  ];
  ansb=m[ {qx.x,qx.y}  ];
  printf("%d %d %.6f\n",min(ansa,ansb),max(ansa,ansb),ans*1.00);
//   for(ll i=0;i<n;i++){
//     printf("%d %d \n",p[i].x,p[i].y);
//  }
}
