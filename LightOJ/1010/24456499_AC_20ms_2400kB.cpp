#include<bits/stdc++.h>
using namespace std;
typedef int  ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

#define PRINT printf("%s\n", xans.c_str());

const int N = 201;
const int mod = 1e9 + 7;

#define sc(c) scanf("%d",&c);

ll n,t,m,vis[N][N],dp[N][N],cnt=0;


int main()
{
   
    sc(t);
    while(t--){

         sc(m); sc(n);
         ll ans=0;
         if(min(m,n)==1) ans=max(m,n);
         else if(min(m,n)==2){
             
             ans=max(n,m);
             ans=ans+(ans%4==1 || ans%4==3)+(ans%4==2)+(ans%4==2);

         }
         else if( (m*n)%2 ){ ans=(m*n)/2 ; ans++;}
         else ans=(m*n)/2;
         printf("Case %d: %lld\n",++cnt,ans);
        
    }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///