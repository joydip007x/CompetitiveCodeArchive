
#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define pi pair<int, int >
#define sz 10010
#define INF 99999
int n,dis[sz],m,t ,mxdst,x,y,z,st;
vector< pair<int,int > >ad[sz];
int djx(int st){

  dis[st]=0;
  priority_queue< pi ,vector<pi> , greater<pi > >PQ ;
  PQ.push({st,0});
  while(!PQ.empty())
  {
      pi a=PQ.top();PQ.pop();
      for(int i=0 ; i<ad[a.first].size() ; i++)
      {
          pi b=ad[a.first][i];
          mxdst=max( b.second , dis[ a.first]);
          if( dis[b.first]==INF || dis[b.first ] >mxdst   )
          {
              dis[b.first]=mxdst;
              PQ.push( {  b.first ,dis[b.first]});
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
      for(int i=0;i<n; i++) ad[i].clear();
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
