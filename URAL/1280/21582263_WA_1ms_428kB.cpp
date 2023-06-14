#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;
ll m,y;
ll vis[1099];
vector<ll>adj[1010];
int main(){

//    ios::sync_with_stdio(false); cin.tie(nullptr);
    cin>>n>>m;
    ll f=0;
    for(int i=0 ; i< m ; i++){

         cin>>x>>y;
         adj[y].pb(x);
    }
    for( int i=0 ; i< n; i++){

         cin>>x;
         if(i==0) {  vis[x]=1; continue;}
         for(auto it:adj[x]){

              if( vis[it]==0 ) {f=1; break;}
         }
         vis[x]=1;

    }
    if(f==0) cout<<"YES\n";
    else cout<<"NO\n";

}
