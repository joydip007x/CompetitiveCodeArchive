#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

const ll sz=2000;
ll t,x,m,n;
vector<ll>v1,v2;
map<ll, vector<ll> >adj;
ll vis[sz],matchR[sz];
bool mbp( int  pind){
 
   for(auto i :adj[pind]){
      if(vis[i]) continue ;
      vis[i]=1;
      if( matchR[i]==-1 || mbp(matchR[i]) )
                   return matchR[i]=pind,true ;
   }

   return false;
}
int main()
{
    
    ll cnt=0;
    cin>>t;
    while(t--){

     	 cnt++;
     	 adj.clear();
         v1.clear(); v2.clear();
         memset(matchR,-1,sizeof matchR);
         ll ans=0;
    	 cin>>n;
    	 for(int i=0; i<n ; i++) {cin>>x,v1.pb(x);}
    	 cin>>m;
    	 for(int i=0; i<m ; i++) {
    	 	cin>>x;
    	 	v2.pb(x);
           for(int j=0; j<v1.size() ; j++){
           	     if( x%v1[j]==0 ){
           	     	 adj[x].pb(v1[j]);
           	     	// matchR[v1[j] ]=-1;
           	     }

           }
    	 }
    	 for(int i=0; i<v2.size() ; i++){
                 memset(vis,0,sizeof vis);
                   (mbp(v2[i]) )? ans+=1 : ans+=0 ;
    	 }
    	 cout<<"Case "<<cnt<<": "<<ans<<"\n";
    }   
 

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///