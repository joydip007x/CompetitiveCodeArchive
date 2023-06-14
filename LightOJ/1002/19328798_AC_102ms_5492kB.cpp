
#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define pi pair<int, int >
#define sz 100005
#define INF 99999999
int n,dis[sz],m,t ,mxdst,x,y,z,st;
vector< pair<int,int > >ad[sz];
int djx(int st){

  dis[st]=0;
  priority_queue< pi ,vector<pi> , greater<pi > >PQ ;
  PQ.push({0,st});
  while(!PQ.empty())
  {
      pi a=PQ.top();PQ.pop();
      for(int i=0 ; i<ad[a.second].size() ; i++)
      {
          pi b=ad[a.second][i];
          mxdst=max( b.second, dis[a.second]   );
          if( dis[b.first]==INF || dis[b.first ] >mxdst   )
          {
              dis[b.first]=mxdst;
              PQ.push( {  mxdst,b.first });
          }
      }
  }
}
int main()
{
  scanf("%d",&t);
  for(int cas=0 ; cas<t ; cas++)
  {
      memset(dis,0,sizeof dis);
      scanf("%d %d",&n,&m);
      for(int i=0;i<max(n,m); i++) {  ad[i].clear(); dis[i]=INF ; } 
      for(int i=0 ; i<m ; i++)
      {
          scanf("%d %d %d",&x,&y,&z);
          ad[x].pb({y,z});
          ad[y].pb({x,z});
          dis[x]=dis[y]=INF;
      }
      scanf("%d",&st);
      djx(st);
      printf("Case %d:\n",cas+1);
      for(int i=0 ; i<n ; i++) { (dis[i]==INF)? printf("Impossible\n"):printf("%d\n",dis[i]) ; }

  }

}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
