#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t,y,vis[1100];
vector<ll>v[1100] ;
string s;
ll f(ll a){

  ll ret=0;
  vis[a]=1;
  for(int i=0; i<v[a].size(); i++) {

  	  if(!vis[v[a][i]])ret=ret^(f(v[a][i])+1);
  } 
  return ret;
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

   cin>>t;
   while(t--){

   	 cin>>n;
   	 for(int i=0; i<=110;i++) v[i].clear();
   	 memset(vis,0,sizeof vis);
   	 for(int i=0; i<n-1; i++){ 

   	 	  cin>>x>>y;
   	 	  if(x==1){  v[x].pb(y);continue;}
   	 	  if(y==1){  v[y].pb(x);continue;}
   	 	  v[x].pb(y);
   	 	  v[y].pb(x);
   	 }
   	 ll r=0;
   	 if(v[1].size()+1==n){
   	 	 if(n%2) cout<<"Alice\n";
   	 	 else cout<<"Bob\n";
   	 	 continue;
   	 }
   	 for(int i=0; i<v[1].size() ; i++){

   	 ///	cout<<" CC "<<v[1][i]<<endl;
         r=r^f(v[1][i]);
   	 }
     if(!r) cout<<"Bob\n"; 
     else cout<<"Alice\n";

   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///