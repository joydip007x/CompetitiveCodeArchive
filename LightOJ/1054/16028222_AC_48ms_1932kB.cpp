///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
/*
     If opportunity doesn't knock, build a door.
    Success is how high you bounce when you hit bottom.
*/
#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         100000
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)
#define TEST_CASE(t)      for(ll int z=1;z<=t;z++)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

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
     {
            ll res1=( (  bigmod( a,   b+1,MOD) -1 )+MOD)%MOD;
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

