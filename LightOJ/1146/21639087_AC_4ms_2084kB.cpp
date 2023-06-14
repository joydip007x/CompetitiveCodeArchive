#include<bits/stdc++.h>
using namespace std ;

#define ll            int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lf",&c)

#define x first
#define y second
#define point pair<double , double>

ll x,y;
point p[5];

double dist ( point a, point b) {  return sqrt( ((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y) ));}
double ternary_search(){

    ll cnt=60;
    point f301,f323,s301,s323;
    double df3,ds3;
    while(cnt-- ){


        f301.x=(p[0].x)+ (p[1].x-p[0].x)/3.00;
        f301.y=(p[0].y)+ (p[1].y-p[0].y)/3.00;
        
        f323.x=(p[2].x)+ (p[3].x-p[2].x)/3.00;
        f323.y=(p[2].y)+ (p[3].y-p[2].y)/3.00;

        s301.x=(p[1].x)- (p[1].x-p[0].x)/3.00;
        s301.y=(p[1].y)- (p[1].y-p[0].y)/3.00;
        
        s323.x=(p[3].x)- (p[3].x-p[2].x)/3.00;
        s323.y=(p[3].y)- (p[3].y-p[2].y)/3.00;

        df3=dist(f301,f323);
        ds3=dist(s301,s323);

        if( df3<=ds3 ) {  p[1]=s301; p[3]=s323;    }
        else  {  p[0]=f301; p[2]=f323;    }
    }
    return (double)min(df3,ds3) ;
}
int main(){

       ll t,cas=1;
       scanf("%d",&t);
       while(t--){

              for(int i=0; i<=3; i++) { sc(p[i].x) ; sc(p[i].y); }
              printf("Case %d: %f\n",cas++,ternary_search() );
       }
   return 0 ; 

}

///author-joydip007x         ///
///Time&Date-Whenever i submit///
