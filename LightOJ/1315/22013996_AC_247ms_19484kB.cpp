#include<bits/stdc++.h>
using namespace std;
typedef int ll;

#define sc(c) scanf("%d",&c) 
#define qq printf("Bob\n");
#define pp printf("Alice\n");

const ll sz=2000+100;
int movx[] = {-1, -1, -2, -3, -2, +1};
int movy[] = {-3, -2, -1, -1, +1, -2};
ll dp[sz+10][sz+10];
ll rec(ll x, ll y){
    
    if(dp[x][y]!=-1 ) return dp[x][y];
    int p=0;
    unordered_map<ll,ll>u;
    for(int i=0; i<=5;i++){
         
    	if(x+movx[i]>=0 && y+movy[i]>=0)
    	      u[ rec(x+movx[i],y+movy[i])]=1;
    }
    for(int i=0;  ;i++) 
    	if(!u[i]) return dp[x][y]=i;  	
}
int main()
{
    memset(dp,-1,sizeof dp);
    ll t,cas=1;
    sc(t); 
    while(t--){

        ll n;
    	sc(n);
    	ll r=0;
    	for(ll i=0;i<n;i++) { 

    		ll x,y;
    		sc(x);sc(y); 
    		r=r^rec(x,y) ;            
    	}
    	printf("Case %d: ",cas++);
        if(r) {pp;} else {qq;}
    }
    return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///