#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 #define int ll 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t;
 vector<ll> v;
  map<ll,ll>m;
void primeFactors(int n) 
{ 
    while (n%2 == 0) 
    { 
        v.pb(2);
        n = n/2; 
    }
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            v.pb(i);
            n = n/i; 
        } 
    } 
    if (n > 2) v.pb(n);
} 
int32_t main()
{
   // freopen("input.txt", "r+", stdin);
   /// freopen("output.txt", "w+", stdout);

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr);

    cin>>t;
    while(t--){
 
    	  cin>>n;
    	
    	     m.clear(); v.clear();
    	    for(int i=0 ; i<n ; i++){
    	   	 cin>>x;	
    	   	         v.pb(x);
    	   	 m[x]++;
    	   }
    	   if(m[2048]) cout<<"YES\n"; 
           else{

    	   sort(begin(v), end(v));
 
    	   for(int i=1; i<=2048; i=i*2){
 
                 m[i*2]+=(m[i]/2);
    	   }
    	   if(!m[2048]) cout<<"NO\n";
    	   else cout<<"YES\n";
    	  }
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///