#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll a,b;
char c;

int main(){

       ll cas=1;
      while( scanf("%d %c %d",&a,&c,&b)!=EOF ){


          double mm=sqrt( (a*a)+(b*b) );
          double r= (.500)*mm;
          double theta= acos(  ((r*r)+(r*r)-(b*b))/(2*r*r)  );
          double s= r*theta;
          double t=200.000/ (a+s);
          printf("Case %d: %.8f %.8f\n",cas++,(a*1.00*t),(b*1.00*t));
        /// cout<<a<<c<<b<<endl;
      }
}
