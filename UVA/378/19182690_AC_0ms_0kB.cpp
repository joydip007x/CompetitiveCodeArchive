#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define  sz                         1000000
#define ll                        int

struct Point{ int x,y; } ;
struct Point2{ double x,y; } ;
Point l1,l2,p1,p2,p3,p4;
double ans1 , ans2,m1,m2,b1,b2,t1,t2,t3,t4,t5,t6,det;
bool onseg(Point a, Point b, Point c){

  int val1=( min(a.x,c.x)<=b.x  ) && (  max(a.x,c.x)>=b.x  ) ;
  int val2=( min(a.y,c.y)<=b.y  ) && (  max(a.y,c.y)>=b.y  ) ;
  if(val1 and val2) return true;
   return false;
}
int orient(Point a, Point b ,Point c){
     int val=(b.y-a.y)*(c.x-b.x) - (c.y-b.y)*(b.x-a.x);
     if(val==0) return 0;
     return (val>0 ) ? 1:2 ;
}
void getans(){

 Point2 a,b,c,d;
 a.x=l1.x*1.00,a.y=l1.y*1.00;b.x=l2.x*1.00,b.y=l2.y*1.00;
 c.x=p1.x*1.00,c.y=p1.y*1.00;d.x=p2.x*1.00,d.y=p2.y*1.00;

 t1=b.y-a.y , t2=a.x-b.x ;
 t3=d.y-c.y , t4=c.x-d.x ;
 t5=t1*b.x + t2*b.y;
 t6=t3*c.x + t4*c.y;
 det=t1*t4 - t2*t3;
/// cout<<" dettt "<<det<<endl;
 ans1=(t5*t4) - (t6*t2) *1.00;
 ans1=ans1/det*1.00;
 ans2=((t1*t6) - ( t3*t5 )) / det*1.00;
}
bool intersec(Point a, Point b, Point c , Point d){

    int o1,o2,o3,o4;
    o1=orient(a,b,c);o2=orient(a,b,d);
    o3=orient(c,d,a);o4=orient(c,d,b);
    if(!o1 and !o2 and !o3 and !o4) return printf("LINE\n") , true;
    if(o1==o2 && o3==o4) return false;
    ///cout<<" go for getans() "<<endl;
    getans();
    printf("POINT %.2lf %.2lf\n",ans1,ans2);
    return true;
}
int main()
{
    int ccc=0,n;
    scanf("%d",&n);
    printf("INTERSECTING LINES OUTPUT\n");
    while(n--){
      scanf("%d %d %d %d",&l1.x,&l1.y,&l2.x,&l2.y);
      scanf(" %d %d %d %d",&p1.x,&p1.y,&p2.x,&p2.y);
      if( intersec(p1,p2,l1,l2)   ) {    }
      else printf("NONE\n");
    }
    printf("END OF OUTPUT\n");

}
///joydip007x ///
/*
5
0 0 4 4 0 4 4 0
5 0 7 6 1 0 2 3
5 0 7 6 3 -6 4 -3
0 3 4 0 1 2 2 5
2 0 2 27 1 5 18 5
*//*
1
2 0 2 27 1 5 18 5

*/
///Date&Time: whenever i submit*///
