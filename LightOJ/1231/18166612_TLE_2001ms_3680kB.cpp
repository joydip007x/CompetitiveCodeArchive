#include<bits/stdc++.h>
using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
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

#define  sz                         1000000
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
#define  inf                     0x7fffffff

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///

#define MOD 100000007
ll n,k,t,a[102],b[102],dp[102][2000];
ll way(ll i, ll use , ll tk)
{
    if( use >b[i] || tk>k || i>n ) ret 0;
    if(tk==k) ret 1;
   ///if(dp[ i ][tk] !=-1) ret dp[i][tk];
    ret dp[i][tk]= (way( i,use+1,tk+a[i] ) + way(i+1,0,tk))%MOD  ;
}
int main()
{
     o(t);
     for(ll i=1; i<=t ; i++)
     {
         memset(dp,-1,sizeof dp);
         o(n);o(k);
         for(ll j=1 ; j<=n ; j++)
         {
             o(a[j]);
         }
        //// cout<<"coin input ended\n";
         for(ll j=1 ; j<=n ; j++)
         {
             o(b[j]);
         }
         printf("Case %lld: %lld\n",i,way( 1,0,0));
     }
}
