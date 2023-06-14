#include<bits/stdc++.h>
using namespace std ;
 
#define ll            int 
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

#define p pair<ll,ll>
const int sz=50+50+10;
int x,y,z,mxflw;
int m,w,g[sz][sz],par[sz];
vector< pair<int,p> > dm,sm,dw,sw;

bool bfs( ll start, ll en){

  memset(par,-1,sizeof par);
  queue<ll>q; 
  q.push(start);
  while(q.size()){

  	   ll u=q.front(); q.pop();
  	   for(int i=1; i<=m+w+1; i++){
  	   	  if(par[i]!=-1 || g[u][i]<=0  ) continue;
  	   	  par[i]=u;
  	   	  q.push(i);
  	   	  if(i==en) return true;
  	   }
  }
  return false;
}
int main(){
 
      int t ;
      sc(t);
      for(int cas=1; cas<=t ; cas++ ){

             sc(m);sc(w);
             dm.clear(); dw.clear();
             sm.clear(); sw.clear();
             memset(g,0,sizeof g);
             for(int i=1 ; i<=m ; i++){

                 sc(x);sc(y);sc(z);
                 if(z) { dm.pb({i,{x,y}});}
                 else sm.pb({i,{x,y}});
             }
             for(int i=1 ; i<=w ; i++){

                 sc(x);sc(y);sc(z);
                 if(z) { dw.pb({i+m,{x,y}});}
                 else sw.pb({i+m,{x,y}});
             }
             for(int i=0; i<dm.size() ; i++){

             	 for(int j=0; j<dw.size() ; j++){
                      
                       if( abs(dm[i].second.second-dw[j].second.second)>5  ||
                       	 abs(dm[i].second.first-dw[j].second.first)>12 )  continue;
                       	g[ dm[i].first ][dw[j].first]=1;
             	 }
             }
             for(int i=0; i<sm.size() ; i++){

             	 for(int j=0; j<sw.size() ; j++){
                      
                       if( abs(sm[i].second.second-sw[j].second.second)>5  ||
                       	 abs(sm[i].second.first-sw[j].second.first)>12 )  continue;
                       	g[ sm[i].first ][sw[j].first]=1;
             	 }
             }
             for(int i=0 ; i<dm.size(); i++) g[0][dm[i].first]=1;
             for(int i=0 ; i<sm.size(); i++) g[0][sm[i].first]=1;  
             for(int i=0 ; i<dw.size(); i++) g[dw[i].first][w+m+1]=1;
             for(int i=0 ; i<sw.size(); i++) g[sw[i].first][w+m+1]=1;
  
             mxflw=0;
             while(bfs(0,w+m+1)){
               	 for(int i=w+m+1; i!=0 ; i=par[i]) 
               	 	   g[par[i]][i]-=1,g[i][par[i]]+=1;
                 mxflw+=1;
             }
         	 printf("Case %d: %d\n",cas,mxflw);
      }
 
}