#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll int
#define sc(c) scanf("%d",&c)

ll dp[105][13][ (1<<13)+5] ;
ll n,m;
const int mod = 1000000007;
ll rec( ll cur , ll last, ll xx){

      if(cur>m) return 0;
      if(dp[cur][last][xx]!=-1) return dp[cur][last][xx];
      ll ret=0;
      if(last+1<n) ret=rec(cur+1, last+1,      xx|(1<<(last+1)) )%mod;
      if(last-1>=0)ret=(ret +rec(cur+1, last-1,xx|(1<<(last-1)) )%mod)%mod;
      if( xx== (1<<(n))-1)  ret++;;
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
             sum=(sum%mod + rec(1,j, 1<<(j) )%mod)%mod;
         printf("%d\n",sum);
     }

}


///author-joydip007x         ///
///Time&Date-Whenever i submit///

