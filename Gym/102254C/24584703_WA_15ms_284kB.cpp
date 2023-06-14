#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 35000;
const int mod = 1e9 + 7;

vector<ll>v;

ll n,x,q,d;
ll s;
ll dp[N];

unordered_set<ll>S;

ll fun(ll b, ll mn, ll mx , ll tot ,ll tk,ll ind ){

    if(tk>=n){
    	 if( tk>=0 && abs(mx-mn)<=d && tot>=q)return 1;
    	 return 0;
    }
    if(dp[b]!=-1) return dp[b];
    ll c=0;
    if( tk>=0 && abs(mx-mn)<=d && tot>=q)c++;
    for(int i=ind; i<n; i++){
        
         if( b&(1LL<<i)) continue;
         c+=fun((b|(1LL<<i)) ,min(mn,v[i]) ,max(mx,v[i]),tot+v[i],tk+1,ind+1);
    }
   // return c;
   return dp[b]=c;
}
int main()
{
   // freopen("input.txt", "r+", stdin);
  ///  freopen("output.txt", "w+", stdout);

   ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

   cin>>n>>q>>d;
   memset(dp,-1,sizeof dp);
   for(int i=0; i<n; i++){ 

          cin>>s;
          v.pb(s);
   }
   ll oo=fun(0,LLONG_MAX,LLONG_MIN,0,0,0);
   //cout<<S.size()<<endl;
   cout<<oo;
   return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///