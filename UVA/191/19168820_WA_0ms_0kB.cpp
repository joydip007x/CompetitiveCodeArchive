#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define  sz                         1000000
#define ll                        int

struct Point{ int x,y; } ;
Point l1,l2,p1,p2,p3,p4;
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
bool intersec(Point a, Point b, Point c , Point d){

    int o1,o2,o3,o4;
    o1=orient(a,b,c);o2=orient(a,b,d);
    o3=orient(c,d,a);o4=orient(c,d,b);
    if(o1!=o2 and o3!=o4) return true;
    if( (!o1 and onseg(a,c,b) ) || (!o2 and onseg(a,d,b) )  )  return true;
    if( (!o3 and onseg(c,a,d) ) || (!o4 and onseg(c,b,d) )  )  return true;
    return false;
}
int main()
{
    int ccc=0,n;
    scanf("%d",&n);
    while(n--){
      scanf("%d %d %d %d",&l1.x,&l1.y,&l2.x,&l2.y);
      scanf(" %d %d %d %d",&p1.x,&p1.y,&p3.x,&p3.y);
      p2.x=p1.x,p2.y=p3.y;
      p4.x=p3.x,p4.y=p1.y;
      if( intersec(p1,p2,l1,l2) || intersec(p2,p3,l1,l2) || intersec(p3,p4,l1,l2) || intersec(p4,p1,l1,l2)   )
                printf("T\n");
      else printf("F\n");
    }
}
///joydip007x ///
/*
1
4  9  11  2  1  5  7  1
5 6 5 6 4 7 7 5
*/
///Date&Time: whenever i submit*///
