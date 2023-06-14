///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

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

#define  sz                         9999
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


ll n,r,x,y,col[sz];
vector<pair<ll,ll>>adj[sz];
ll findx(ll r,ll ix, ll ji )
{
    if(!adj[r].size())
    {  if(ix!=-1 and ji!=-1)ret adj[ix][ji].sc=col[r];
       ret col[r];
    }
    ll cost=0LL,re=0LL;
    for(ll i=0 ; i<adj[r].size() ; i++)
    {
        cost=col[r]+findx(adj[r][i].fs,r,i);
        //cout<<" for root"<<r<<" sending "<<adj[r][i].fs<<" result- ";
        //cout<<col[r]<<" + "<<cost-col[r]<<endl;
        re=max(re,cost);
    }
    if(ix!=-1)adj[ix][ji].sc=re;
   //// cout<<r<<" set adj["<<ix<<"]["<<ji<<"] ="<<re<<endl;
    ret re;
}
bool  dinosor( const pair<ll,ll> A , const pair<ll,ll> B)
{
    ret A.sc>B.sc;
}
ll tem=0LL,vis[sz],dis[sz];
void dfs(ll x)
{
    vis[x]=1;
    dis[x]=++tem;
    for(ll i=0 ; i<adj[x].size() ; i++)
    {
        if(!vis[adj[x][i].fs ])
                dfs(adj[x][i].fs);
    }

}
int main()
{

while( cin>>n>>r and n and r )
 {

   ll sum=0LL;
   memset(col , 0,sizeof col);
   memset(dis , 0,sizeof col);
   memset(vis , 0,sizeof vis);
   loop(i,0,1010) adj[i].clear();
   loopeq(i,1,n) {cin>>x; col[i]=x;}
   loop(i,1,n)
   {
       cin>>x>>y;
       adj[x].pb({y,col[x]});
   }
   findx( r,-1,-1 );
   loopeq(i,1,n)
   {
       sort(adj[i].begin() , adj[i].end() , dinosor );
   }
   dfs(r);
   loopeq(i,1,n)
   {
       if(i==r) continue;
       sum=sum+ ( dis[i]*col[i]);
   }
   cout<<sum+col[r]<<endl;
 }

}

//      for(ll i=1 ; i<=5 ; i++)
//   {
//       cout<<"trav node "<<i<<endl;
//       for(auto it:adj[i]) cout<<"adjacent "<<it.fs<<" val "<<it.sc<<endl;
//   }
