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

#define  sz                         1000010
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
#define ll                         long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

ll increase ( ll z) {return ++z;}

vector < ll > prime ;
bool vis[sz+2];
void seive ( void )
{
    memset(vis , false , sizeof(vis) );
    const ll SQ=sqrt(sz)+1;
    for(ll i=3 ; i<=sz ; i++)
    {
        if(!vis[i])
        {
            for(ll j=i*i ; j<=sz ; j=j+(2*i))
            {
                vis[j]=true;
            }
        }
    }
    prime.pb(2);
    for(ll i=3 ; i<=sz ; i=i+2)
    {
        if(!vis[i] ) prime.pb(i);
    }
}

ll  trisa103(ll n)
{
    vector < ll >ans ;
    ll X=n;
    for ( ll i=0 ;   prime[i]<=sqrt(n) ; i++)
    { ll cnt=0;
        while (n% prime[i]==0)
        {
            n=n/prime[i];
            cnt++;
        }
        ans.pb(cnt);
    }
    if(n!=1 ) ans.pb( 1 );
    if(ans.size()==1) return ans[0];
    transform (all(ans) , ans.begin()  , increase   );
    ll prodc=accumulate ( all(ans)   , 1 , multiplies<ll > ()     );
    return prodc-1;

}
int main()
{
    seive();
  ll tca; cin>>tca;
  LOOP(k,0,tca)
  {
      ll n; cin>>n;

       ///printf("Case %lld: %lld\n",k+1,trisa103(n));
     cout<<"Case "<<k+1<<": "<<trisa103(n)<<endl;
  }
}

