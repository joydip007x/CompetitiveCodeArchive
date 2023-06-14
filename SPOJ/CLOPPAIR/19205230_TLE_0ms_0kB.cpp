#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        int
#define sz 50000+10
int n,ansa,ansb;
double ans1,ans;
struct Point
{
    int x,y ;
};
Point p[sz], mid,px,qx;

map< pair<int ,int >, int   >m;
double dist( Point a, Point b)
{
    return abs(sqrt( ((a.x-b.x)*(a.x-b.x)*1.00)  + ((a.y-b.y)*(a.y-b.y)*1.00))) ;
}
double extendedclos(int a, int b, double mn){

    Point tmp[sz];
    mid=p[(a+b)/2]; int i=0,index=0;
    while(i<=n-1){
        if(   abs(p[i].x-mid.x)<mn ) tmp[index++]=p[i];
        i++;
    }
    double tmpmn=INT_MAX*1.00;
    for(i=0 ; i<index ; i++)
    {
        for(int j=i+1; j<index  and abs( tmp[i].y-tmp[j].y )<mn ; j++){
            if(   dist( tmp[i],tmp[j]  )<tmpmn ){
                px=tmp[i] ; qx=tmp[j] ;
                tmpmn= dist( tmp[i],tmp[j]  );
            }
            tmpmn=min(tmpmn, dist(tmp[i],tmp[j]));
    }
    }
    return tmpmn*1.000;
}
void ysort(int a ,int b){
   Point tmp[sz];
  int i=a,e1=(a+b)/2 ;
  int e2=b,j=e1+1,k=a;
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
double clospair(int a, int b){

  if(a==b) return INT_MAX*1.00;
  int mid=(a+b)/2;
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
  for(int i=0;i<n;i++){
     scanf("%d %d",&p[i].x,&p[i].y);
     m[{p[i].x,p[i].y}]=i;
  }
  sort(p,p+n,cmp);
  ans1=clospair(0,n-1);
  ansa=m[ {px.x,px.y}  ];
  ansb=m[ {qx.x,qx.y}  ];
  printf("%d %d %.6lf\n",min(ansa,ansb),max(ansa,ansb),ans1);
}
