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

#define  sz                         3000
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
#define  ret                     return

vector<ll >g[sz];
bool vis[sz];
map< ll , ll >m;

ll y, dis[sz];
vector<ll>ans;
void bfs( ll s)
{
    dis[s]=0;
    vis[s]=true;
    queue<ll>q;
    q.push(s);
    while(!q.empty())
    {
        ll now=q.front();q.pop(); ll trisa=0;
        for ( ll p=0 ; p<g[now].size() ; p++)
        {
            if( !vis[g[now] [ p] ])
            {
                vis[g[now ][p] ]=true;
                dis[ g[now] [ p] ]=dis[now]+1;
                m[  dis[ g[now][p] ] ]++;
                q.push( g[now][p] );
            }
        }
    }
}
bool cmp ( const pii&a , const pii &b)
{
    if(a.first==b.first) ret a.second<b.second;
    return a.first>b.first;
}
/*
the logic is normal bfs. 
they asked koto tomo din e .so i took LVL of bfs as DAY , 1 st lvl 1st day new spread and 
how many was visited in 1st day?? ?? is the persons recved new that day :) then take in pair , sort them ,,output 
*/
int main()
{
   ll lin;cin>>lin;
   for(ll a=0; a<lin ; a++)
   {
       ll c; cin>>c;
       for(ll o=0; o<c;o++)
       {
          ll x; cin>>x;
          g[a].pb(x); /// a freind b is not b friend a read statment;
      ///    g[x].pb(a);
       }
    }
    ll que; cin>>que;
    while(que--)
    {
        mem(vis,false);
        mem(dis,0);
        ans.erase(all(ans));
        m.clear();
        cin>>y;
        bfs( y);
       ll u=0;
       pair<ll, ll>p[sz];
       for(auto it: m )
        {
            ///cout<<it.first<<" = "<<it.second<<endl;
        p[u].first=it.second ; p[u].second=it.first;
        u++;
       }
       sort( p,p+u, cmp);
        if(p[0].first!=0 ) {cout<<p[0].first<<" "<<p[0].second<<endl;}
        else cout<<"0"<<endl;
   }
}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
