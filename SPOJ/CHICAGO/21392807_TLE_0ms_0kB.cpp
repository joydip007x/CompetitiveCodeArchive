#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pp pair< double ,ll >
#define s(c) scanf("%lld",&c)
#define pb push_back
vector<pair<ll,double > >adj[101+2];
ll n,m ;
double dis[101+2];

double djksta(ll s){

   dis[s]=1.0;
   priority_queue< pp > pq;
   pq.push({1.00,s });
   while(pq.size()){

       ll u=pq.top().second;
       pq.pop();
       for(auto i: adj[u]){

            if(  dis[i.first] <= dis[u]*( (i.second/100.00)  )  ) {

                 dis[ i.first]=dis[u]*( (i.second/100.00)  ) ;
                /// if(i.first==n) return dis[n] ; 
                 ///cout<<" u = "<<u<<" i.first=  "<<i.first<<" \n";
                /// if(i.first==n) cout<<dis[n]<<" XD \n";
                if( i.first!=n )pq.push({  dis[i.first] , i.first  } );
            }
       }
   }
   return  dis[n] *1.00;
}
int main()
{

   while(1){

       s(n);
       if(!n) break;
       s(m);
       for(int i=0; i<=n; i++)
                 adj[i].clear(),dis[i]=-100.00;
       for(int i=0 ; i< m ; i++) {

           ll a,b,p;
           s(a) ; s(b); s(p);
           adj[a].pb({b,p*1.00});
           adj[b].pb({a,p*1.00});
       }
       ///cout<<djksta(1)<<" MKL \n" ; 
       //printf("%0.6lf percent\n", (djksta(1)*100.00 )  ) ;
       cout<<fixed<<setprecision(6)<<djksta(1)*100<<endl;
   }
}
///author-joydip007x         ///
///Time&Date-Whenever i submit///
