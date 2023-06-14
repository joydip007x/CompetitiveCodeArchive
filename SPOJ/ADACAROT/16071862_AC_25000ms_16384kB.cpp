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

#define  sz                         300009
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
#define MOD  1000000007

vector < ll >fact;
void factorial( )
{
    fact.resize(sz+3,0);
    fact[0]=1;
    LOOP(i,1,sz+1)
    {
    fact[i]=(fact[i-1]*i)%MOD;
    }
}
ll bigmod( ll bas , ll pow , ll mod)
{
    ll res=1,x=bas;
    while(pow)
    {
        if(pow&1) res=(res*(x%mod))%mod;
        x=(x*x)%mod;
        pow>>=1;
    }
    return res;
}
int main()
{
    factorial();
    ll n,res=0;
    while(cin>>n)
    {
        for (ll j=1 ; j<=n-1; j++)
        {
            ll x=j ,  y=n-j;
            res=(res +  (  bigmod( x,y-1,MOD  )*bigmod (y,x-1,MOD)    ) %MOD )%MOD;
        }
        cout<<(res*( fact[n]%MOD))%MOD<<endl; res=0;
    }
 }
/*https://github.com/tr0j4n034/SPOJ/blob/master/ADACAROT.cpp*/
//resource-http://mathworld.wolfram.com/CompleteGraph.html
///http://mathworld.wolfram.com/CompleteBipartiteGraph.html
//draw some , understand :)