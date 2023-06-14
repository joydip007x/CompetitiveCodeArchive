#include<bits/stdc++.h>
using namespace std ;

#define ll            int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,t,x,s,id;
double mn;
const  ll sz=10000+10 ;
vector<ll >adj[sz] ,v;
unordered_map<ll,ll>m;
unordered_set<ll>ss;
ll vis[sz] ;
ll bfs( ll st, ll e ){

   vis[st]=0;
   if(st==e) return 0;
   queue<ll>q;
   q.push(st);
   while( q.size() ){

         ll u=q.front(); q.pop();
         for(auto i: adj[u]){

            if(vis[i]!=-1) continue;
            vis[i]=vis[u]+1;
            q.push(i);
            if(i==e) return vis[i];
         }
   }
   return vis[e];
}
int main(){

    sc(t);
    while(t--){

          sc(n);sc(s);
          m.clear(); v.clear();
          ss.clear();
          id=INT_MAX ; mn=99999*3.065956589 ;
          for(int i=0; i<=n+1 ; i++) adj[i].clear();
          for(int i=0 ; i<s; i++){
              vector<ll>l;
              l.clear();
              while( scanf("%d",&x) && x!=0) {
                    l.pb(x);
                    m[x]++;
                    if(m[x]>=2 ) ss.insert(x);
                if(  l.size()  >1)  {
                    ll last=l.size()-1;
                    adj[ l[last] ].pb( l[last-1] );
                    adj[ l[last-1] ].pb( l[last] );
               }
              }
          }
//          cout<<" WOW : ";
//          for(auto it:ss) { v.pb(it);  cout<<it<<" <> " ;  }
//          cout<<endl<<":::::::::::::::::::::::::::::::::\n";
           for(auto it:ss) { v.pb(it);    }

          for( int i=0 ; i<v.size() ; i++ ){

              double  t=0.000 ;
              for(int j=0; j<v.size() ; j++){

                 if( v[i]==v[j] ) continue ;
                 memset(vis,-1,sizeof vis);

                 ll pp=bfs( v[i],v[j] );
                 t+=pp;
                /// cout<<"called bfs  s= "<<v[i]<<" e= "<<v[j]<<" step = "<<pp<<" TOT "<<t<<endl;
              }
              t=(t*1.00)/( 1.00*(v.size()-1) );
              if( t<mn ){
                 mn=t;
                 id=v[i];
              }
              if(t==mn){
                 id=min(v[i],id);
              }
             /// cout<<" @ "<<v[i]<<" COST = "<<t<<" MNCOST "<<mn<<endl;
          }
          printf("Krochanska is in: %d\n",id);
    }
}
/*
4
13 3
1 2 3 4 5 6 7 0
8 9 4 10 13 0
11 2 12 9 6 7 0
6 2
2 5 3 6 1 4 0
4 1 6 3 5 2 0
5 2
1 2 3 4 5 0
3 5 1 4 2 0
7 2
3 5 1 2 4 7 6 0
3 6 1 0
*/
