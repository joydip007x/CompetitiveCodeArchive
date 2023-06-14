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
ll n , dp[5002][5002];
string s,s2,out,s1;
ll LCS(ll a, ll b)
{
    if(a==s1.size() || b==s2.size() ) ret 0;
    if(dp[a][b]!=-1) ret dp[a][b];
    if( s1[a]==s2[b]  ) ret 1+LCS(a+1,b+1);
    ret dp[a][b]=max(   LCS(a+1,b) , LCS(a,b+1)    );
}
int main()
{
    fast;
    //o(n);
    cin>>n;
    cin>>s;
    ///scanf("%s",&s);
    memset(dp,-1,sizeof dp);
    s1=s2=s;
    reverse(all(s2));
//   if(n&1)
//   {
//       loopeq(i,0,n/2) s1.pb(s[i]);
//       for(ll j=n-1; j>=n/2 ; j--) s2.pb(s[j]);
//   }
//   else
//   {
//        loop(i,0,n/2) s1.pb(s[i]);
//       for(ll j=n-1; j>=n/2 ; j--) s2.pb(s[j]);
//   }
//   cout<<s1<<" \\\\ "<<s2<<endl;
   cout<<(s1.size() - LCS(0,0));
}
