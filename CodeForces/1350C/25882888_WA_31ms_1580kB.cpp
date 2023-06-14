#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll n,x,t,m,k;
ll a[100009],dp[100009];
 
ll pow( ll x, ll y )
{
    ll res= 1;
    while(y>0){ if(y&1) res*= x; x*= x;  y>>= 1; }
    return res;
}
int main()
{
  

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>n;
    map<ll,vector<ll> >m;
    ll ans=1;
    for(int i=0; i<n; i++){

            cin>>x;
            ll cnt=0;
            while(x%2==0)cnt++,x=x/2;
            if(cnt)m[2].pb(cnt);
            for(int j=3; j*j<=x ;j+=2){

                 cnt=0;
                 while(x%j==0)cnt++,x=x/j;
                 if(cnt)m[j].pb(cnt);
            }
            if(x>1)m[x].pb(1);
    }
    for(auto i:m){

        if(i.second.size()==n)ans*=pow(i.first,m[i.first][1]);
        if(i.second.size()+1==n)ans*=pow(i.first,m[i.first][0]);
    }
    cout<<ans<<endl;

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///