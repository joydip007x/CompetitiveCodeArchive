#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll x,t,k,n;
vector<ll>v;
map<ll,ll>m;
ll dp(ll p){
  return (m[p-1] || m[p+1]);
}
int main()
{
  
     
   ///ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
   cin>>t;
   while(t--){

          cin>>n;
          v.clear();
          ll o=0,e=0, ok=0;
          m.clear();
          for(int i=0; i<n; i++){

             cin>>x;
             v.pb(x);
             m[x]++;
             if(x%2) o++; 
             else e++;
          }
          if(o%2==0 && e%2==0){cout<<"YES\n"; continue;}
          for(auto i:v){

               ll p=i;   
               if( dp(p) ){ok++;break;}
          }
          (ok )? cout<<"YES\n":cout<<"NO\n";    
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///