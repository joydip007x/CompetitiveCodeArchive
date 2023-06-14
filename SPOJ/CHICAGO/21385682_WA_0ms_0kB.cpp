#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pp pair< ll , pair <ll,double > >
#define s(c) scanf("%lld",&c)
#define pb push_back

vector<pair<ll,ll> >adj[101];
ll par[101], vis[101] ,n,m;
double djksta(ll s){

   vis[s]=true;
   par[s]=-1;
   priority_queue< pp > pq;
   pq.push({00,{s,1.00 } });
   while(pq.size()){

       ll u=pq.top().second.first;
       ll v=pq.top().first;
double laura=pq.top().second.second ;
       pq.pop();
       for(auto i: adj[u]){

            if(!vis[i.first]) {

                 par[i.first]=u;
                 vis[u]=true;
                 pq.push({ v+i.second, {i.first, laura*(i.second/100.00) }  } );
                 if(i.first==n) return  100*laura*(i.second/100.00) ;
            }
       }
   }
//   for(int i=n ; par[i]!=-1 ; ){
//      i=par[i];
//      cout<<i<<" ";
//   }
    return 0.000;
}
int main()
{

   while(1){

       s(n);
       if(!n) break;
       s(m);
       for(int i=0; i<n; i++)
                 adj[i].clear();
       memset(vis,false,sizeof vis);
       memset(par,-1,sizeof par);
       for(int i=0 ; i< m ; i++) {

           ll a,b,p;
           s(a) ; s(b); s(p);

           adj[a].pb({b,p});
           adj[b].pb({a,p});
       }
       printf("%0.6lf percent\n",djksta(1));
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
