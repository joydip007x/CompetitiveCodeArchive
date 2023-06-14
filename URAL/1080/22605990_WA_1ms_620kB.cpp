#include<bits/stdc++.h>
using namespace std;

#define ll int
#define ret return
#define pb push_back

const ll sz=10000;

ll n,col[sz],failed=0,vis[sz] ;
vector<ll>adj[sz];

ll bfs(ll nod ){


    queue<ll>q;
    q.push(nod);
    col[nod]=0;
    vis[nod]=1;
    while(q.size()){

          ll u=q.front();
          q.pop();
          for(int i=0 ; i<adj[u].size() ; i++){

                if(vis[ adj[u][i] ]){

                    if(col[ adj[u][i] ]==col[u]) {
                         failed=1;
                         return -1;
                    }
                    continue;
                }
                int  v=adj[u][i];
                vis[ v ]=1;
                col[ v ]=1^col[u];
                q.push(v);
          }

    }
 return 1;
}
int main(){

       cin>>n;
       memset(col,-1,sizeof col);
       memset(vis,0,sizeof vis);
       for(int i=1; i<=n; i++){

             ll x;
             while(cin>>x && x) adj[i].pb(x);
       }
       col[1]=0;
       bfs(1);

       if(failed==1) {cout<<-1<<endl;return 0;}
       for(int i=1; i<=n; i++)cout<<col[i];
       cout<<endl;
       return 0;
}
