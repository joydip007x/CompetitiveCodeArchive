#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;

#define sc(c) scanf("%lld",&c) 
#define qq printf("Bob\n");
#define pp printf("Alice\n");

const ll sz=10010;
ll dp[sz+10];

ll rec(ll x){
    
    if(x<=2 ) return 0;
    if(dp[x]!=-1) return dp[x];
    ll lmt=(x-1)/2;
	ll tmp[sz+100];
	for(ll i=0; i<=sz+80; i++) tmp[i]=0;
	for(int  i=1; i<=lmt  ;i++){

		tmp[ (int)rec(i)^(int)rec(x-i) ]=1;
	}
	for(int  i=0;  ;i++) if(!tmp[i]) return dp[x]=i;
}
int main()
{
    memset(dp,-1,sizeof dp);
    ll t,cas=1;
    sc(t); 
    while(t--){

        ll n;
    	sc(n);
    	ll  r=0,y;
        dp[0]=dp[1]=dp[2]=0;
    	for(ll i=0;i<n;i++) { 

        	sc(y); 
    		r=r^rec(y) ;
    	}
    	printf("Case %lld: ",cas++);
        if(r) {pp;}
        else {qq;}
    }
    return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///