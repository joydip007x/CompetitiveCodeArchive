#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;

#define sc(c) scanf("%lld",&c) 
#define qq printf("Bob\n");
#define pp printf("Alice\n");

const int sz=10002;
int dp[sz+100];

ll rec(ll x, ll lmt){
    
    if(x<=2 || lmt==0  ) return 0;
    if(dp[x]!=-1) return dp[x];
	ll tmp[sz+100];
	for(int i=0; i<=sz+80; i++) tmp[i]=0;
	for(int i=1; i<=lmt ;i++){

		ll p=i , q=x-i;
		ll r=(i-1)/2 , s= (q-1)/2; 
		if(p>=q) break;
		tmp[ rec(p,r)^rec(q,s) ]=1;
	}
	for(int i=0; i<=sz ;i++) if(tmp[i]<=0 ) return dp[x]=i;
    return 0;
}
int main()
{
    
    int t,cas=1;
    sc(t); 
    while(t--){

        ll n;
    	printf("Case %d: ",cas++);
    	sc(n);
    	ll  r=0,x;
        dp[0]=dp[1]=dp[2]=0;
    	for(int i=0;i<n;i++) { 

        	sc(x); 
    		r=r^rec(x,(x-1)/2) ;
    	}
        if(r) {pp;}
        else {qq;}
    }
    return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///