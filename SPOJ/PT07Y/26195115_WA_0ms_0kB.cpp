#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef  double  ld;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N =55;
const int mod = 1e9 + 7;
ll t,vis[15000];
ll n,x,y,e,z;
set<ll>adj[10000+1000];
ll cnt=0;
ll dfs(ll s){
   
   vis[s]=1;
   for(auto i:adj[s]){

       if(!vis[i]){cnt++;dfs(i);}
   }
   return cnt; 
}
int main()
{
  
 //  ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  
   cin>>n>>e;
   for(int i=0; i<e; i++){

       cin>>x>>y;
       z=x;
       adj[x].insert(y);
       adj[y].insert(x);
   }
   ll p=dfs(z);
   if(p+1==n)cout<<"YES\n";
   else cout<<"NO\n";

  return 0;
}



  ///author-joydip007x         ///
  ///Time&Date-Whenever i submit///