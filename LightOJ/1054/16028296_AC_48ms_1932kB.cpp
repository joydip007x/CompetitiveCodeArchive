///////////////////// /// 
///    author-joydip007x  ///  
#include<bits/stdc++.h>
using namespace std;
#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  sz                         100000
#define  o(c)                     scanf("%lld",&c);
#define ll long long 
#define ret return
#define MOD 1000000007

ll SumofDivisor(    ll a , ll b   );
ll bigmod(ll bas , ll po , ll mod);
ll  modInverse( ll bas , ll po);

vector < ll  >prime;
bool vis[sz+2];
void seive ( )
{
    prime.pb(2);mem(vis,false); ll SQRT=sqrt(sz)+1;
    for(ll i=3 ; i<=SQRT  ; i=i+2){if(!vis[i]){for(  ll j=i*i ; j<=sz; j=j+(i*2)){vis[j]=true;}}}
    for(ll i=3 ; i<=sz  ; i=i+2){if(!vis[i]) prime.pb(i);}
}
ll bigmod(ll bas , ll po , ll mod)
{
    ll res=1;
    while(po)
    {
        if(po&1)  res=(( res%mod )*(bas%mod))%mod;
        bas=  ( (bas%mod)*(bas%mod)  )%mod;
        po>>=1;
    }
    ret res;
}
ll  modInverse( ll bas , ll po)
{ret bigmod(bas , po-2 , po );}

ll SumofDivisor(    ll a , ll b   )
{
    ll origin=1;
   ll Z=sqrt(a)+1;
     for (ll i=0;  prime[i]<=Z && a!=1 ; i++)
     {
         ll cnt=0; bool flag =false;
         while (!(a%prime[i])  && a!=1)
         {
             a=a/prime[i];
             cnt++;
             flag=true;
         }
          Z=sqrt(a)+1;
         if(flag)
         {
             cnt=(cnt * b)+1;
             ll res1=( (  bigmod( prime[i], cnt,MOD) -1 )+MOD)%MOD;
             ll res2=(modInverse( prime[i]-1,MOD ) +MOD) %MOD;
             ll res=(res1*res2)%MOD;
             origin=((origin%MOD)*(res) ) %MOD;
         }
     }
     if(a!=1)
     {       ll res1=( (  bigmod( a,   b+1,MOD) -1 )+MOD)%MOD;
             ll res2=(modInverse( a-1,MOD ) +MOD) %MOD;
             ll res=(res1*res2)%MOD;
             origin=((origin%MOD)*(res) ) %MOD;
     }
     ret origin%MOD;
}
int main()
{
        seive();
        ll t;
        o(t);
      /// cin>>t;
        LOOP(j,0,t)
        {
            ll a,b;
            o(a);o(b);
       ///  cin>>a>>b;
            printf("Case %lld: %lld\n",j+1,SumofDivisor(a,b));
        }
}

