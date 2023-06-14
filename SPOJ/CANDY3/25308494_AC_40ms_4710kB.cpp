#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;

#define D pair<ll,ll>
ll n,x,t;

vector<D>v ;
map< ll ,ll >m;
map<ll, vector<ll > >m2;
set<ll>s;

int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

     //    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  cin>>t;
  while(t--){
       
        cin>>n;
        ll a=0;
        for(int i=0; i<n; i++){

        	cin>>x;
        	x=(x+n)%n;
        	a=(a+x+n)%n;
        }
        if( (a+n)%n==0)cout<<"YES\n";
    	else cout<<"NO\n"; 
		       
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///