#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,y;
vector<ll>v ;
string s;

map< pair<ll,ll> , ll >m;
ll mx=INT_MIN;
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

   cin>>n;

   for(int i=0; i<n; i++){
   	 cin>>x>>y;

   	 m[{x,y}]++;
   	 mx=max(mx,m[{x,y}]);
   }
   cout<<mx<<endl;

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///