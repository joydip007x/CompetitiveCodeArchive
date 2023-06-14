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
ll pow( ll x, ll y )
{
    ll res= 1;
    while(y>0){ if(y&1) res*= x; x*= x;  y>>= 1; }
    return res;
}
map<ll,vector<ll> >m;

int main()
{
  

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){
           

           cin>>s;
           string w[s.size()+2];
           for(int i=0; i<=s.size(); i++)w[i].clear();
           n=s.size(); ll cnt=0;
           for(auto i:s){

                --n;
                if(i=='0')continue;
                w[++cnt].pb(i);
                for(int j=0; j<n;j++)w[cnt].pb('0');
           }
         cout<<cnt<<endl;
         for(int i=1; i<=cnt;i++)cout<<w[i]<<" ";
         cout<<endl;



    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///