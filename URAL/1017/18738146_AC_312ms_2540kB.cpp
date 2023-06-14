#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MX 520
#define ret return
#define eps 1e-7

ll dp[MX][MX] ,ans;
ll n,m,q,x,y,vis[MX][MX];
ll  fun(ll aa, ll rem)
{
    if(!rem) ret 1;
    if(rem<0 || aa>rem) ret 0;
    if( dp[aa][rem]!=-1 ) ret dp[aa][rem];
    ll xx=0;
    for(ll i=aa+1 ; i<n; i++){
        xx=xx+ fun(i,abs(rem-i));
    }
    ret dp[aa][rem] =xx;
}
int main()
{
    scanf("%lld",&n);
    memset(dp,-1,sizeof dp);
    ans=fun(0,n);
    ////cout<<ans<<":\n";
    printf("%lld",ans ) ;
}
/*
3 2
3
1 1
3 2
1 2
*/
