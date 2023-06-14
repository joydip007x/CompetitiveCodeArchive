#include<bits/stdc++.h>
using namespace std;

#define ll int
#define ret return
#define pp printf("1\n")
#define qq printf("2\n")
#define pb push_back
ll t;
const ll sz=1000000+100;

ll dp[sz];
unordered_set<ll>divlist[sz];
void prec(ll p){

      if (p==1 ) return;

	  divlist[p].clear();
      ll x=p;
      ll ss=sqrt(p);
      for(ll i=1; i<=ss; i++){

              divlist[p].insert(i);
             if( i>1 && i!= p/i  ) divlist[p].insert(p/i);
      }
    return;
}
ll rec(ll a){

    if(a<=1 || dp[a]!=-1) ret dp[a];
    unordered_map<ll,ll>u;
    for(auto it:divlist[a]) u[  rec(  it )  ]=1;
    for(int i=0 ; ;i++) if(!u[i]) ret dp[a]=i;
}
int main(){

         memset(dp,-1,sizeof dp);
         cin>>t;
         while(t--){

                       ll n;
                      cin>>n;
                      ll r=0;
                      dp[1]=dp[0]=0;
                      for(int i=0; i<n; i++){
                             ll x;
                             cin>>x;
                             prec(x);
                             r=r^rec(x);
                      }
                      if(r){ pp; }
                      else { qq; }
         }
         return 0;
 }
