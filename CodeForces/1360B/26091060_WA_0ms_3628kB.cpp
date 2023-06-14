#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll x,t,k,m,n;
vector<ll>v;

int main()
{
  

   ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
   cin>>t;
   while(t--){

          cin>>n;
      
          for(int i=0; i<n; i++){

             cin>>x;
             v.pb(x);
          }
          sort(begin(v), end(v));
          x=min({abs(v[0]-v[1]),abs(v[n-2]-v[n-1])  });
          cout<<x<<endl;;
          
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///