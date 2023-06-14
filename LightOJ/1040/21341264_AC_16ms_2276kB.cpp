#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll int 
ll n,x,t,a[110][110],tot,vis[110] ,visited ;

#define sc(c) scanf("%d",&c);
ll prim(ll s){

   priority_queue<pair<int , int> , vector< pair <int , int > >, greater<pair <int , int  > > > pq;
   pq.push({0,s});
   ll cost =0 ; visited=0;
   memset(vis,0,sizeof vis);
   while(!pq.empty() ) {

     ll u=pq.top().second ;
     ll v=pq.top().first ; 
     pq.pop();
     if(vis[u] ) continue ; 
     vis[u]=1 ;
     visited++;
     cost+=v;
     for(int j=1 ; j<=n; j++){

          if(!vis[j]) {
          	if(a[u][j])pq.push({a[u][j],j});
            if(a[j][u])pq.push({a[j][u],j});
          }
     }
   }
   return cost;

}
int main(){

       sc(t);
       for(int c=1; c<=t ; c++){
           
           tot=0;
           sc(n);
           for(int i=1; i<=n ; i++){

           	   for(int j=1; j<=n ; j++){
           	   	  sc(x);
           	   	  a[i][j]=x;
           	   	  tot+=x;
           	   }
           }

        ll lol=prim(1);

       if(visited!=n) { printf("Case %d: -1\n", c  ); continue ; }
        printf("Case %d: %d\n", c ,tot-lol );
       }
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///

