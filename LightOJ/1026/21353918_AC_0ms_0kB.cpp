#include<bits/stdc++.h>
using namespace std;
typedef int  ll;
#define sc(x)  scanf("%d",&x);

const int sz =10000+100;
int n,vis[ sz ] ,low[sz], dis[sz] ,par[sz] ;
vector<int> adj [sz] ;
vector< pair < int , int  > >ans ; 
void dfs( int s, int t=1 ){

      low[s]=dis[s]=vis[s]=t;
      for(auto i :adj[s]){

      	  if(vis[i]) {  if ( par[s]!=i) low[s]=min(dis[i],low[s]); continue ; }
      	  par[i]=s;
      	  dfs(i,t+1);
      	  low[s]=min(low[s], low [i]);
          if( low[i] > dis[s]) ans.push_back( { min(s,i ) ,max (s,i)} );
      }
   return ;
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/
    int t;
    sc(t);
    for(int c=1 ; c<= t ; c++ ) {
    
    	sc(n);
    	for(int i=0 ; i< n  ;i++) adj[i].clear();
    	memset(vis,0,sizeof vis);
        memset(low,0,sizeof low);
        memset(dis,0,sizeof dis);
        memset(par,-1,sizeof par);
        ans.clear();
    	for(int i=0 ; i< n ; i++){
             int u,k,x;  char xx[100];
    		 sc(u); 
    		 scanf("%s",&xx);
    		 sscanf(xx,"%*c %d %*c ",&k);
    		 for(int j=0 ; j<k ; j++){

    		 	 sc(x);
    		 	 adj[u].push_back(x);
    		 }
    	}
    	for(int i=0 ; i<n; i++) if(!vis[i]) dfs(i);
    	printf("Case %d:\n%d critical links\n",c,ans.size());
        sort(ans.begin(), ans.end());
        for(int i=0;i<ans.size();i++)printf("%d - %d\n",ans[i].first,ans[i].second);
    }


  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///