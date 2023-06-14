#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,dp[100000];
vector<ll>v ;
string s;
ll rec(ll i){
    
    if(i>=s.size() ) return 1;
    if(dp[i]!=-1)return dp[i];
    ll x=0,y=0;
    if(s[i]!='0')x+=rec(i+1);
    if( s[i]!='0' && i+1<s.size())y=(((s[i]-48)*10)+(s[i+1]-48));
    if(y>=1 && y<=26) x+=rec(i+2);
    return dp[i]=x;
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

        ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

   while(cin>>s && s[0]!='0'){
         
         for(int i=0; i<s.size()+55; i++)dp[i]=-1;
         cout<<rec(0)<<endl;

   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit/// 