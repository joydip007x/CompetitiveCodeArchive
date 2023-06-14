#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define MX 920
#define ret return

ll r[MX] ,rans=0,n,p,q,xx,dp[MX][MX];
bool vis[MX] ,vis2[MX][MX];
ll fun(ll col, ll rem){

  ///cout<<"called : "<<rem<<"\n ";
  ll ans=0ULL;
  if(vis2[col][rem]) ret dp[col][rem];
  if(col>p || rem==0) ret 1;
  ////if( (p-col) <rem-1) ret 0;
  for(ll r=1 ; r<=p ; r++)
  {
     if(  vis[(int) r] ) continue;;
     vis[(int)r]=true;
     ans+=fun(col+1,rem-1);
     ///cout<<
     vis[ (int)r]=false;
  }
  vis2[col][rem]=1;
  ret dp[col][rem]=ans;

}
int main()
{
    scanf("%llu",&n);
    for(ll i=0 ; i<n ; i++){
        scanf("%llu %llu",&p,&q);
        if( p<q )  {   printf("Case %llu: 0\n",i+1);continue; }
        memset(vis,false, sizeof vis);
        memset(vis2,false, sizeof vis2);
       //// memset(dp,-1ULL,sizeof dp);
        xx=fun(1,q);
        xx=xx*(p-q+1);
        ///cout<<"so "<<1<<" - "<<xx;cout<<endl;
        printf("Case %llu: %llu\n",i+1,xx);

    }
}
/*
8
1 1
2 1
3 1
4 1
4 2
4 3
4 4
4 5
*/
