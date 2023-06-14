#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll x,t,k,m;
ll a[100009],dp[100009];
string s;
vector<ll>ans;

int main()
{
  

   ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){
           

           cin>>m;
           double n,r,g,a,pi;
           n=2*m*1.000;
           pi=2*acos(0.0);
           r=0.500;
           r*= (cos(pi/n)/ sin(pi/n) );

           g=n*r*r* tan(pi/n);

           g= g/(m/2)*1.00;
           cout << std::fixed;
           cout << std::setprecision(15); 
           cout<<g<<endl;
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///