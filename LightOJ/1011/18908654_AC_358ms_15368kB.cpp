#include<bits/stdc++.h>
using namespace std;
#define ll int
#define  ret return
///*/////////////////// /// *
/*//    author-joydip007x  ///  */

#define M 20
#define MX 170000
#define pb insert
#define eee cout<<endl
ll n,m,a[M][M],dp[M][MX],vis[M];

ll backtx(ll col, ll res )
{
   if(col>n) ret 0;
   if( dp[col][res]!=-1 ) ret dp[col][res];//u gotta understand the only thing remains unique is set of takenBrides/
   ///not sum of priority till now, cz if priority1==priority , these selections of groom maybe was different , and your are returning right here cause of the unknown match of result
   //so forcefully learned bitmask
   for(ll i=1 ; i<=n ; i++){
      if(   res&1<<i ) continue;//bitchecking if visited
      dp[col][res]=max(dp[col][res], a[col][i] +backtx( col+1, res|1<<i /*set the taken bit on */ )    );
    }
    ret dp[col][res];
}
int main()
{
    ll t;
    ///cout<<(1<<17)<<" - ";
    scanf("%d",&t);
    for(ll o=1 ; o<=t; o++){

        scanf("%d",&n); memset(vis,false,sizeof vis);
        memset(dp,-1,sizeof dp);
        memset(a,0,sizeof a);
        for(ll i=1; i<=n ; i++)for(ll j=1; j<=n ; j++) scanf("%d",&a[i][j]);
        ll ans=backtx(1,1);
        printf("Case %d: %d\n",o,ans);
    }
}
/*
2
2
1 5
2 1
3
1 2 3
6 5 4
8 1 2 *//*
2
3
2 9 16
5 8 12
3 10 14
*/
