#include<bits/stdc++.h>
using namespace std;
typedef int ll;

#define pp pair< double ,ll >
#define s(c) scanf("%d",&c)
#define pb push_back

const ll sz=200;
vector<pair<ll,double > >adj[sz];
ll par[sz ] ,n,m ;
double dis[sz], con[sz][sz];;
double djksta(ll s){

   par[s]=-1;
   dis[s]=1.0;
   priority_queue< pp > pq;
   pq.push({1.00,s });
   while(pq.size()){

       ll u=pq.top().second;
       pq.pop();
       for(auto i: adj[u]){

            if(  dis[i.first] <=dis[u]*( (i.second/100.00)  )  ) {

                 par[i.first]=u;
                 dis[ i.first]=dis[u]*( (i.second/100.00)  ) ;
                 if(i.first==n) return dis[i.first ] ;
                 pq.push({  dis[i.first] , i.first  } );
            }
       }
   }
   return -1.00 ;
}
//double  ddd ( ){
//
//  double ret= ( (con[n][par[n]]*1.00)/100.000 );
//   for(int i=par[n] ; par[i]!=-1 ; ){
//
//      if(i==-1) break;
//      ret=ret* ( (con[i][par[i]]*1.00)/100.000 );
//      i=par[i];
//      if(i==-1) break;
//      ///cout<<i<<" ";
//   }
//   return ret*100.000;
//}
int main()
{

   while(1){

       s(n);
       if(!n) break;
       s(m);
       for(int i=0; i<=n+10; i++)
                 adj[i].clear(),dis[i]=-100.00,par[i]=-1 ;
       memset(con,-1,sizeof con);
       for(int i=0 ; i< m ; i++) {

           ll a,b;
           double p;
           s(a) ; s(b);
           scanf("%lf",&p);
           ///con[a][b]=con[b][a]=p*1.00;
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
