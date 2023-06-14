#include<bits/stdc++.h>
using namespace std ;

#define ll            int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const int sz=105+5;
ll n,cas,s,e,mxflw,edge;
ll par[sz] ;
ll adj[sz][sz] ;
bool  bfs ( ll x, ll y){

  /// cout<<" SO "<<x<<" "<<y<<"\n";
   for(int i=0 ; i<=n+1; i++) par[i]=i;
   queue<ll>q;
   q.push(x);
   while(q.size() ){

        ll u=q.front();q.pop();
        for(ll i=0 ; i<=n; i++){

              ///cout<<" TRAVERSE "<<u<<"->"<<i<<endl;
              if( par[i]!=i ||  (adj[u][i]<1 && adj[i][u]<1 ) ) continue;
              par[i]=u;
              q.push(i);
              if(i==y) return true;
        }
   }
   return false;
}
int main(){

      sc(cas);
      for(int cc=1; cc<=cas; cc++){


              sc(n);
              sc(s);sc(e);sc(edge);
              mxflw=0;
//              for(int i=0; i<=n+2; i++){
//                  for(int j=0; j<=n+2;j++) adj[i].pb(0);
//              }
              memset(adj,0,sizeof adj);
              for(int i=0; i< edge; i++){

                    int x,y,z;
                    scanf("%d %d %d",&x,&y,&z);
//                    if(adj[x][y]==0 && adj[y][x]==0) adj[x][y]+=z;
//                    else if( adj[x][y]==0) adj[y][x]+=z;
//                    else adj[x][y]+=z;
                    adj[x][y]+=z;
                    adj[y][x]+=z;
              }
//              cout<<" D : |n\n";
//              for(int i=0 ; i<=n; i++){
//
//                  for(int j=0; j<=n; j++){
//                     cout<<adj[i][j]<<" - ";
//                  }
//                  cout<<endl;
//              }
              while(bfs(s,e)){

               ///  cout<<" O \n";
                 int tmp=INT_MAX;
                 for(int i=e ; i!=s ; i=par[i]) tmp=min(tmp,adj[par[i]][i]);
                 for(int i=e ; i!=s ; i=par[i]){

                       adj[ par[i] ][i]-=tmp;
                       adj[i][par[i]]-=tmp;
                 }
                 mxflw+=tmp;
              }
              printf("Case %d: ",cc);
              printf("%d\n",mxflw);
      }



}
