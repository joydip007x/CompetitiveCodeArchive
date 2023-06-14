#include<bits/stdc++.h>
using namespace std;
typedef int ll;

#define pp pair< double ,ll >
#define s(c) scanf("%d",&c)
#define pb push_back

const ll sz=200;
vector<pair<ll,double > >adj[sz];
ll  n,m ;
double dis[sz] ;
double djksta(ll s){

   dis[s]=1.0;
   priority_queue< pp > pq;
   pq.push({1.00,s });
   while(pq.size()){

       ll u=pq.top().second;
       pq.pop();
       for(auto i: adj[u]){

            if(  dis[i.first] <=dis[u]*( (i.second/100.00)  )  ) {

                 dis[ i.first]=dis[u]*( (i.second/100.00)  ) ;
                 if(i.first==n) return dis[i.first ] ;
                 pq.push({  dis[i.first] , i.first  } );
            }
       }
   }
   return -1.00 ;
}
int main()
{

   while(1){

       s(n);
       if(n==0 ) break;
       s(m);
       for(int i=0; i<=n+1; i++) adj[i].clear(),dis[i]=-100.00;
       for(int i=0 ; i< m ; i++) {

           ll a,b;
           double p;
           s(a) ; s(b);
           scanf("%lf",&p);
           adj[a].pb({b,p*1.00});
           adj[b].pb({a,p*1.00});
       }
       double val=djksta(1);
       ///cout<<"Dj \n";
       printf("%0.6lf percent\n",val*100.00 );
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
