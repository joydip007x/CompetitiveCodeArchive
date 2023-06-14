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
ll t,vis[20000];
ll n,x,y,e,z;
set<ll>adj[20000];
ll cnt=0,cnt2=0;
ll dfs(ll s,ll o){
   
   vis[s]=1;
   for(auto i:adj[s]){

       if(vis[i] && i!=o) cnt2=-1;
       if(!vis[i])
        {cnt++;dfs(i,s);}
   }
   return cnt; 
}
int main()
{
  
 //  ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  
   cin>>n;

   ll b=__builtin_popcountll(n); 

   if(b==1)cout<<"YES\n"; else cout<<"NO\n";
   

  return 0;
}



  ///author-joydip007x         ///
  ///Time&Date-Whenever i submit///