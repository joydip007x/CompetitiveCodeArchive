#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;

#define sc(c) scanf("%lld",&c) 
#define qq printf("Bob\n");
#define pp printf("Alice\n");

const ll sz=10002;
ll dp[sz+100];

ll rec(ll x){
    
    if(x<=2 ) return 0;
    if(dp[x]!=-1) return dp[x];
	ll tmp[sz+100];
	for(ll i=0; i<=sz+80; i++) tmp[i]=0;
	for(ll i=1;  ;i++){

		ll p=i , q=x-i;
		if(p>=q) break;
		tmp[ rec(p)^rec(q) ]=1;
	}
	for(ll i=0;  ;i++) if(tmp[i]<=0 ) return dp[x]=i;
    return 0;
}
int main()
{
    
    for(int i=0; i<=sz+10;i++) dp[i]=-1;
    ll t,cas=1;
    sc(t); 
    while(t--){

        ll n;
    	printf("Case %lld: ",cas++);
    	sc(n);
    	ll  r=0,x;
        dp[0]=dp[1]=dp[2]=0;
    	for(int i=0;i<n;i++) { 

        	sc(x); 
    		r=r^rec(x) ;
    		///cout<<rec(x)<<" ::: "<<x<<endl;
    	}
        if(r) {pp;}
        else {qq;}
    }
    return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///