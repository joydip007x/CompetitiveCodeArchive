#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define sc(c) scanf("%lld",&c)
#define mod 1000000007

ll dp[110][110] ,n,m,lmt;
unordered_map<ll,ll>vis;
ll chk( ){

//    for(int i=0; i<=n-1; i++) cout<<vis[i]<<" visibility of "<<i<<endl;
    for(int i=0; i<=n-1; i++){

        if(vis[i]<=0)
            return 0;
    }
    return 1;
}
ll rec( ll cur , ll last){

      if(last<0 || last>=n) return 0;
      if(cur==lmt){
//            cout<<" HMM "<<cur<<" inserted "<<last<<"\n";
            return /*dp[cur][last]=*/chk( );
      }
      //if(dp[cur][last]!=-1) return dp[cur][last];
      ll x=0,y=0;

      vis[last+1]++;
      x=rec(cur+1,last+1);
      vis[last+1]--;

      vis[last-1]++;
      y=rec(cur+1, last-1);
      vis[last-1]--;

     return dp[cur][last]=((x%mod)+(y%mod)%mod);
}
int main(){
     ll t ;
     sc(t);
     while(t--){

         sc(n);sc(m);
         ll sum=0;
        // memset(dp,-1,sizeof dp);
         for(int i=n; i<=m;i++){
            for(int j=1; j<=n-1; j++){
                vis[j]++;
                lmt=i;
//                cout<<" length- "<<i<<" first- "<<j<<" ";
                ll c=rec(1,j)%mod;
//                cout<<" ways- "<<c<<endl;
                sum=(sum+c)%mod;
                vis[j]--;
                //for(auto it:vis) cout<<it.first<<" ";cout<<endl;

            }
         }
//         cout<<" MA KA LAUDA:: ";
         printf("%lld\n",sum%mod);

     }

}


///author-joydip007x         ///
///Time&Date-Whenever i submit///

