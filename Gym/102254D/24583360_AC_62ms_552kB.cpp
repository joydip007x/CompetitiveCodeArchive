#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x;
vector<ll>v ,v2;
string s;
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

   cin>>n;
   for(int i=0; i<2*n ; i++){
   	 cin>>x;
   	 v.pb(x);
   }
   ll a=0,b=0;
   sort(begin(v), end(v));
   for(int i=0,j=(2*n)-1; i<j; i++,j--){
          
        v2.pb(v[i]+v[j]);   
   }
   a=*max_element(begin(v2), end(v2));
   b=*min_element(begin(v2), end(v2));
   cout<<abs(a-b)<<endl;
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///