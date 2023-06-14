#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define sc(c) scanf("%lld",&c)
#define mod 1000000007

ll dp[110][110][mod/100000] ,n,m,lmt;

ll chk( ll p){
    if( p== (1<<(n+1))-1)return 1;
    return 0;
}
ll rec( ll cur , ll last, ll xx){

      if(last<0 || last>=n) return 0;
      if(cur==m) return dp[cur][last][xx]=chk( xx);
      if(dp[cur][last][xx]!=-1) return dp[cur][last][xx];
      ll ret=0;
      ret=rec(cur+1, last+1,xx|(1<<(last+1+1)) )%mod;
      ret=(ret%mod +rec(cur+1, last-1,xx|(1<<(last-1+1)) )%mod)%mod;
      ret=ret+chk(xx);
     return dp[cur][last][xx]=ret%mod;
}
int main(){
     ll t ;
     sc(t);
     while(t--){

         sc(n);sc(m);
         ll sum=0;
         memset(dp,-1,sizeof dp);
         for(int j=1; j<=n-1; j++)
             sum=(sum%mod + rec(1,j,1LL|(1<<(j+1)))%mod)%mod;
         printf("%lld\n",sum%mod);
     }

}


///author-joydip007x         ///
///Time&Date-Whenever i submit///

