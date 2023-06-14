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
set<ll>s;
int main()
{
  
     
   ///ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
   cin>>t;
   while(t--){

          cin>>n>>k;
          x=n;
          s.clear();s.insert(1);
          for(int i=2; i*i<=n; i++)
                   while(n%i==0)s.insert(i),n/=i;
          ll ans=LLONG_MAX;
          for(auto i:s)if(i<=k)ans=min(ans,x/i);
          cout<<ans<<endl;
        
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///