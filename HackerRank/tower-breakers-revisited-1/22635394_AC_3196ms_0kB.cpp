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
	  divlist[p].insert(1);

      ll x=p;
            for(ll i=2; i*i<=p; i++){

              if(x%i!=0) continue;
              divlist[p].insert(i);
             if( i>1 && i!= x/i  )
              divlist[p].insert(x/i);
      }
    return;
}
ll rec(ll a){

    if( dp[a]!=-1) ret dp[a];
    unordered_map<ll,ll>u;
    set<ll>wow;
    for(int i=2; i*i<=a; i++){

    	  if(a%i!=0) continue;
    	  ll x=i;
    	  ll y=a/i;
    	  if( x>=1 && x<a) wow.insert(x);
    	  if( y>=1 && y<a) wow.insert(y);
    }
    for(auto it:wow) u[  rec(  it )  ]++;
    for(int i=1; ;i++) if(!u[i]) ret dp[a]=i;
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
                            // prec(x);
                             r=r^rec(x);
                      }
                      if(r){ pp; }
                      else { qq; }
         }
         return 0;
 }
