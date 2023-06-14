#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll n,x,t,k;
ll a[100009],dp[100009];
string s;
vector<ll>ans;

int main()
{
  

   ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){
           

           cin>>n>>k;
           double p;
           ll q,z;
           p=ceil((1.00*k / (n-1)*1.00));
           q=(ll)p; --q;
           z=q;
           q=q*n;
           z=k-((n-1)*z);
           q+=z;
           cout<<q<<endl;
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///