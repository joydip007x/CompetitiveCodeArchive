#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pp pair< ll,ll >
#define s(c) scanf("%lld",&c)
#define pb push_back

vector<pair<ll,ll> >adj[101+2];
ll par[101+2], vis[101+2] ,n,m , con[101+2][101+2];
double djksta(ll s){

   vis[s]=true;
   par[s]=-1;
   priority_queue< pp > pq;
   pq.push({0,s });
   while(pq.size()){

       ll u=pq.top().second;
       ll v=pq.top().first;
       pq.pop();
       for(auto i: adj[u]){

            if(!vis[i.first]) {

                 par[i.first]=u;
                 vis[u]=true;
                 pq.push({ v+i.second, i.first  } );
            }
       }
   }
  double ret= ( (con[n][par[n]]*1.00)/100.000 );
   for(int i=par[n] ; par[i]!=-1 ; ){

      ret=ret* ( (con[i][par[i]]*1.00)/100.000 );
      i=par[i];
   }
   return ret*100.000;
}
int main()
{

   while(1){

       s(n);
       if(!n) break;
       s(m);
       for(int i=0; i<=n; i++)
                 adj[i].clear();
       memset(vis,false,sizeof vis);
       memset(par,-1,sizeof par);
       memset(con,-1,sizeof con);
       for(int i=0 ; i< m ; i++) {

           ll a,b,p;
           s(a) ; s(b); s(p);
           con[a][b]=con[b][a]=p;
           adj[a].pb({b,p});
           adj[b].pb({a,p});
       }
       printf("%0.6lf percent\n",djksta(1));
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
