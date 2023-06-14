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

#define  sz                         100000001
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

vector < ll > prime ;
bool vis[sz+2];

void seive( )
{
    prime.pb(2);
    mem(vis, false );
    const  ll SX=sqrt(sz)+1;
    for ( ll i=4 ; i<=sz; i=i+2) vis[i]=true;
    for( ll i=3 ; i<=SX ; i++ )
    {   if (!vis[i])
            {   for ( ll j=(i*i)  ; j<=sz  ; j=j+(2*i) )  {vis[ j ]=true;}  }
    }
    for(ll i=3 ; i<=sz ; i=i+2)
            if(!vis[i])  {prime.pb(i);}
}

int trisa103(  ll n)
{
    if( n&1  && !vis[n]  ) { printf("%lld is not the sum of two primes!\n",n) ; return 0;  }
    if( n&1  && vis[n]  ) { printf("%lld is the sum of %lld and %lld.\n",n,2,n-2) ; return 0;  }
    ll p= (  lower_bound(  all(prime) , n/2 ) )-prime.begin();
    ll xo=n;
    for (       ;      p>=0 ; p-- )
    {
        if (   !vis[ n-prime[p]   ]     )
        {
             printf("%lld is the sum of %lld and %lld.\n",n,min(prime[p],n-prime[p]),     max(prime[p],n-prime[p])      ) ; return 0;
        }
    }
    printf("%lld is not the sum of two primes!\n",n) ; return 0;

}

int main()
{         ll n;
        seive();
        while (scanf("%lld",&n)!=EOF)
        { ll x=trisa103(n);}
}

