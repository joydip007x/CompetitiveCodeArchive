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
vector<ll>divlist[sz];
void prec(ll p){

      if(divlist[p].size() || p<=2 ) return;
      ll x=p;
      ll ss=sqrt(p)+1;
      for(int i=1; i<=ss; i++){
             if(x%i==0) divlist[p].push_back(i);
      }
    return;
}
ll rec(ll a){

    if(a<=1 || dp[a]!=-1) ret dp[a];
    unordered_map<ll,ll>u;
    for(int i=0; i<divlist[a].size() ; i++){

              u[rec(divlist[a][i])]=1;
    }
    for(int i=0 ; ;i++) if(!u[i]) ret dp[a]=i;
}
int main(){


         memset(dp,-1,sizeof dp);
        divlist[2].pb(1);
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
