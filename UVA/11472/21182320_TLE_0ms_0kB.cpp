#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll int
#define lll long long
#define sc(c) scanf("%d",&c)
#define mod 1000000007

ll dp[110][110][mod/100000] ;
ll n,m,lmt;

ll rec( ll cur , ll last, lll xx){

      if(last<0 || last>=n) return 0;
      if(cur>m) return 0;
      if(dp[cur][last][xx]!=-1) return dp[cur][last][xx];
      ll ret=0;
      if( xx== (1<<n)-1 ) ret++;
      ret+=rec(cur+1, last+1,xx|(1<<(last+1)) );
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

                sum=sum+rec(1 , j , 1<<j );
                sum%=mod;
         }
         printf("%d\n",sum);
     }

}


///author-joydip007x         ///
///Time&Date-Whenever i submit///

