///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

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

#define  sz                         100002
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
#define ll                        int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return
#define endl   '\n'
ll nd,lmt,x,y,ans=0,col[sz];
vector<ll>g[sz];
bool vis[sz];
void dfs(  ll x, ll cnt)
{
    vis[x]=true;
    if(col[x]) cnt++ ;else cnt=0;
    if(cnt>lmt) ret;
    if(g[x].size()==1 && x!=1) {ans++;ret;}
    for( ll j=0 ; j<g[x].size() ; j++)
    {
        if(!vis[ g[x][j] ])   dfs(g[x][j] ,cnt );
    }
}
int main()
{
    fast;
    scanf("%d %d",&nd,&lmt);
   LOOPeq(i,1,nd)
   {
      scanf("%d",&x);
       col[i]=x;
   }
   LOOP(i,1,nd)
   {
       scanf("%d %d",&x,&y);
      g[x].pb(y);
      g[y].pb(x);
   }
   dfs(1,0);
     cout<<ans;
}
//chk its_*****_*_win's id for tle difference :)