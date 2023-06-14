#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pp pair< double ,ll >
#define s(c) scanf("%lld",&c)
#define pb push_back

vector<pair<ll,double > >adj[101+2];
ll par[101+2] ,n,m ;

double dis[101+2], con[101+2][101+2];;
double djksta(ll s){

   par[s]=-1;
   dis[s]=1.0;
   priority_queue< pp > pq;
   pq.push({1.00,s });
   while(pq.size()){

       ll u=pq.top().second;
       pq.pop();
       for(auto i: adj[u]){

            if(  dis[i.first] < dis[u]*( (i.second/100.00)  )  ) {

                 par[i.first]=u;
                 dis[ i.first]=dis[u]*( (i.second/100.00)  ) ;
                 pq.push({  dis[i.first] , i.first  } );
            }
       }
   }
   return dis[n] *1.00;

}
int main()
{

   while(1){

       s(n);
       if(!n) break;
       s(m);
       for(int i=0; i<=n; i++)
                 adj[i].clear(),dis[i]=-100.00;
       memset(par,-1,sizeof par);
       memset(con,-1,sizeof con);
       for(int i=0 ; i< m ; i++) {

           ll a,b,p;
           s(a) ; s(b); s(p);
           adj[a].pb({b,p*1.00});
           adj[b].pb({a,p*1.00});
       }
       printf("%0.6lf percent\n", djksta(1)*100.00);
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
