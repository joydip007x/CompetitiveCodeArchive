#include<bits/stdc++.h>
using namespace std;
typedef int  ll;

#define sc(c) scanf("%d",&c) 
#define q printf("Bob\n");
#define p printf("Alice\n");

const int sz=10000+10;
int dp[sz],n,x;

ll rec(ll a, ll lmt){

   if(a<=2) return 0;
   if(dp[a]!=-1) return dp[a];
   ll tmp[a+8];
   fill(tmp,tmp+a+1,0);

   for(int i=1; i<=lmt ;i++){
         tmp[ rec(i,(i-1)/2)^rec(a-i,(a-i-1)/2) ]=1;
   }
   for(int i=0; i<tmp[a] ;i++) if(!tmp[i]) return dp[a]=i;
}
int main()
{
    
    int t,cas=1;
    sc(t); 
    while(t--){

    	printf("Case %d: ",cas++);
    	sc(n);
    	fill(dp,dp+n+1,-1);
    	ll r=0;
    	for(int i=0;i<n;i++) {  sc(x); r=r^rec(x,(x-1)/2)  ;}
        if(r) {p;}
        else {q;}
    }
    
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///