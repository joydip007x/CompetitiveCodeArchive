#include<bits/stdc++.h>
using namespace std;
typedef int  ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 505;
const int mod = 1e9 + 7;
ll n,x,t,cnt=0,y,m;
vector<ll>v,adj[N];
ll a[N][N],vis[N] ,vis2[N],start,ans[N],par[N];

#define sc(c) scanf("%d",&c);

ll prim(ll s){

   priority_queue<pair<int , int> , vector< pair <int , int > >,
    greater<pair <int , int  > > > pq;

   pq.push({0,s});

   while(!pq.empty() ) {

     ll u=pq.top().second ;
     ll v=pq.top().first ; 
     pq.pop();
     if(vis[u] ) continue ; 
     vis[u]=1 ;  
     for(int j=0 ; j<n; j++){

          if(!vis[j] && a[u][j]!=INT_MAX ) {
          	pq.push({a[u][j],j});
            par[j]=u;
          }
     }
   }
   for(int i=0; i<n; i++)if(par[i]!=-1) adj[par[i]].pb(i);
}
ll bfs(ll s){

    queue<ll>pq;
	pq.push(s);
    
    vis2[s]=1;
    ans[s]=0;
	while(pq.size() ){

		 ll u=pq.front(); pq.pop();

		 for(int i=0; i<adj[u].size() ; i++){
               
               int k=adj[u][i];
		 	   if(vis2[k] || a[u][k]==INT_MAX || !vis[k]) continue;
		 	   vis2[k]=1;
		 	   pq.push(k);
		 	   ans[k]=max({ans[u],ans[k],a[u][k]});
		 }
	}

}
int main()
{
    //freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    /*ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */
    
    sc(t);
    while(t--){

         sc(n); sc(m);
         memset(a,0,sizeof a);
         for(int i=0; i<=n; i++){
         	 adj[i].clear();
         	 ans[i]=INT_MIN;
         	 par[N]=-1;
         	 vis[i]=vis2[i]=0;
         	 for(int j=0; j<=n; j++) a[i][j]=a[j][i]=INT_MAX;
         }
         for(int i=0; i<m; i++){

                int x,y,z;
         	    scanf("%d %d %d",&x,&y,&z);
         	    a[x][y]=a[y][x]=min({a[x][y],z,a[y][x]});
         }
         sc(start);
         prim(start);
         bfs(start);
         printf("Case %d:\n",++cnt );
         for(int i=0; i<n; i++){

         	 if(ans[i]!=INT_MIN)printf("%d\n", ans[i]);
         	 else printf("%s\n","Impossible");
         }
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///