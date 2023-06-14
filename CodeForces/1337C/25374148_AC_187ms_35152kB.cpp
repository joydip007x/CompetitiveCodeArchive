#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
 #define D ll
const int N = (2*100009) +50 ;
const int mod = 1e9 + 7;

ll n,t,k,x,y,vis[N],ok[N],c,lvl[N],mx,ans=0;
vector<ll>adj[N];
string s;
vector<ll> vx;

ll dfs(ll u, ll v, ll pre){
      
   lvl[u]=v;
   vis[u]=1;
   mx=max(mx,v);
   for(int i=0; i<adj[u].size(); i++){
        
        if(pre==adj[u][i]) continue;
        vis[u]+=dfs(adj[u][i], v+1,u);
   }
   vx.pb( (vis[u]-(v+1)) );
   return vis[u];
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>n>>k;
    ans=0;
    mx=INT_MIN;
    vx.clear();
    for(int i=0; i<=n+10; i++){

     adj[i].clear();
     vis[i]=lvl[i]=ok[i]=0;
    }
    for(int i=0; i<n-1; i++){

    	  cin>>x>>y;
    	  adj[x].pb(y);
    	  adj[y].pb(x);
    }
    dfs(1,0,0);
    sort(begin(vx), end(vx),greater<ll>() );
    for(int i=0; i<n-k;i++)ans+=vx[i];
    cout<<ans<<endl;
   
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///