#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 200009
ll n,x ,m,ans=0 ;
vector<ll> adj [sz] ;
vector<bool> visited;
vector<ll> tin, low;
ll timer;
void dfs(ll v, ll p = -1) {
    visited[v] = true;
    tin[v] = low[v] = timer++;
    for (ll to : adj[v]) {
        if (to == p) continue;
        if (visited[to]) {
            low[v] = min(low[v], tin[to]);
        } else {
            dfs(to, v);
            low[v] = min(low[v], low[to]);
            if (low[to] > tin[v])
               ans++;
        }
    }
}

int main()
{
    int t;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d %d",&n,&m);
       for(int i=0 ; i<=sz ; i++) adj[i].clear();
       for(int i=1 ; i<=n  and m; i++ )
       {
           for(int j=i+1; j+1<=n and m ; j++)
           {
               if(i==j) continue;
               adj[j].push_back(j+1);
               --m;
              /// cout<<"RUNNING "<<j<<" : "<<j+1<<"\n";
           }
       }
      /// cout<<"CAME HERE\n";
    timer = ans=0;
    visited.assign(sz, false);
    tin.assign(sz, -1);
    low.assign(sz, -1);
    for (ll i = 1; i <=n; ++i) {
        if (!visited[i])
            dfs(i);
    }       printf("%d\n",ans);
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
