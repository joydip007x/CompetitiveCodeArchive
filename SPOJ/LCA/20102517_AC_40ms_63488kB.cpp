#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define pb push_back
#define sz 100000+100

vector<ll>adj[sz];
const ll cz= log2(sz)+100;
ll lca[sz][ cz ] , lvl[sz ] ,n;
void dfs( ll u){

  for( int i=0 ; i<adj[u].size() ; i++){

     if( lvl[ adj[u][i] ]!=-1) continue;
     lvl[ adj[u][i] ]=1+ lvl[u];
     lca[adj[u][i] ][0]=u;
     dfs( adj[u][i] );
  }
}
ll find_lca( ll p ,ll q) {

   if(lvl[p]<lvl[q]) swap(p,q);
   ll log,i;
   for(log=0 ; (1<<log)<=lvl[p] ; log++);
   --log;
   for( i=log ; i>=0 ; --i) {
      if(  lvl[p]-(1<<i) >=lvl[q] ) p=lca[p][i];
   }
   if(p==q) return p;
   for( i=log ;i>=0 ; i--) {
     if(  lca[p][i]!=-1 and lca[p][i]!=lca[q][i] )
                 p=lca[p][i],q=lca[q][i];
   }
   return lca[p][0];
}
int main()
{
   ll t;
   scanf("%d",&t);
   for(int tt=1; tt<=t ; tt++){

     scanf("%d",&n);
     for(int i=0; i<=n+100; i++){
        lvl[i]=-1;
        adj[i].clear();
        for(int j=0; (1<<j)<=n+100; j++) lca[i][j]=-1;
     }
     for(int i=0 ; i<n ; i++){
        int k;
        scanf("%d",&k);
        for(int j=0; j<k; j++) {
                int y;
                scanf("%d",&y);
                --y;
                adj[i].pb(y); adj[y].pb(i);
          }
      }
      lvl[0]=0;
      lca[0][0]=-1;
      dfs(0);
      for(int j=1 ; (1<<j)<=n ; j++){
       for( int i=0 ; i<n ; i++){
          if(lca[i][j-1]!=-1)
               lca[i][j]= lca[ lca[i][j-1] ][j-1];
        }
      }
       ll que,p,q;
       printf("Case %d:\n",tt);
       scanf("%d",&que);
       while(que--){
          scanf("%d %d",&p,&q);
          --p;--q;
          printf("%d\n",find_lca(p,q)+1);
       }
   }
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
