#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 1001;
const int mod = 1e9 + 7;

#define ret return 
ll n,x,dp[N][N];
vector<ll>v ;
string s1,s2;
ll LCS(ll a, ll b){
   

   if(a==s1.size() || b==s2.size() ) ret 0LL;
   if(dp[a][b]!=-1) ret dp[a][b];
   ll in1,in2;
   in1=in2=0;
   if( s1[a]==s2[b] )ret dp[a][b]=1+LCS(a+1,b+1);
   in1=LCS(a,b+1);
   in2=LCS(a+1,b);
   ret dp[a][b]=max(in1,in2);
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */
   
   memset(dp,-1,sizeof dp);
   cin>>s1>>s2;
   cout<<LCS(0,0);
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///