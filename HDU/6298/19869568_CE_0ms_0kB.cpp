#include<iostream>
using namespace std;
typedef long long ll;

ll n,x  ;
ll rec(ll a){

   ll ret=-1;
   /// 1= 1/3 + 1/3 +1/3 == 1/2 +1/4 + 1/4 == 1/6 +1/2 + 1/3 ;
   if( a%3==0 ){
    ret=max(  ret, a/3 * a/3 * a/3 );
   }
   if(a%3==0 and a%2==0 and a%6==0){
        ret=max(ret, a/3 *  a/2 * a/6 );
   }
   if(a%2==0 and a%4==0){
        ret=max(ret, a/2 *  a/4 * a/4 );
   }
   return ret;
}
int main()
{

   ll t;scanf("%lld",&t);
   while(t--)
   {
     ll x;scanf("%lld",&x);
     if(x==1 || x==2  ) {printf("-1\n");continue;}
     printf("%lld\n",rec(x));
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
