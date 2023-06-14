#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);
ll n,cas=1;
ll mx=1000000000, mod=1000000007;
ll x, inv6;
ll bigmod( ll a ,ll b, ll m){

   if(b==0) return 1%m;
   ll x=bigmod(a,b/2, m);
   x=(x*x)%m;
   if(b%2) x=(x*a)%m;
   return x%mod;
}
ll precal(ll a){

    ll st=x-2+1 , en=a+1, res=1;;
    for(int i=st; i<=en ; i++){
         res=((res*i)%mod +mod)%mod;
    }
    res=((res*2)+mod)%mod;
    res=( (res*inv6)%mod  +mod)%mod;
    return res;
}
int main(){

       sc(n);
       inv6=bigmod(6,mod-2,mod);
       while(n--){

           scanf("%lld",&x);
           if(x==1) {printf("Case %lld: 2\n",cas++);  continue; }
           x++;
           printf("Case %d: %lld\n",cas++,precal(x) );
       }

}
/*
//           if(x%2==0) {x=((x/2)*(x+1));}
//           else{
//                x=((x+1)/2 )*x ;
//           }
//           cout<<" TR "<<x<<endl;
*/
