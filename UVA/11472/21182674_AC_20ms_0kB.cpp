#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll int
#define sc(c) scanf("%d",&c)

const int mod = 1000000007;
ll dp[100+5][10+5][(1<<10)+5];
ll n,m;
ll rec( ll cur , ll last, ll xx){

      if(cur>m) return 0;
      if(last<0 || last>=n) return 0;
      if(dp[cur][last][xx]!=-1) return dp[cur][last][xx];
      ll ret=0;
      if (xx == ((1 << n) - 1))ret++;
      if(last+1<n)ret+=rec(cur+1, last+1,xx|(1<<(last+1)) );
      ret%=mod;
      ret+=rec(cur+1, last-1,xx|(1<<(last-1)) );
     ret%=mod;
     return dp[cur][last][xx]=ret;
}
int main(){
     ll t ;
     sc(t);
     while(t--){

         sc(n);sc(m);
         ll sum=0;
         memset(dp,-1,sizeof dp);
         for(int j=1; j<=n-1; j++){

                sum+=rec(1 , j , 1<<j );
                sum%=mod;
         }
         printf("%d\n",sum);
     }

}


///author-joydip007x         ///
///Time&Date-Whenever i submit///

