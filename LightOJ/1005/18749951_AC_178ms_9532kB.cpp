#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
#define MX 920
#define ret return

ll r[MX] ,rans=0,n,p,q,xx,dp[MX][MX];
bool vis[MX] ,vis2[MX][MX];
ll fun(ll col, ll rem){
  ///cout<<"called : "<<rem<<"\n ";
  if(rem==0) ret 1;
  if(col>p ) ret 0;
  if(vis2[col][rem]) ret dp[col][rem];
  ////if( (p-col) <rem-1) ret 0;
  ll ans=0ULL;
  for(ll i=col ; i<=p ; i++)
  {
      for(ll r=1 ; r<=p ; r++)
     {
     if(  vis[(int) r] ) continue;;
     vis[(int)r]=true;
     ans+=fun(i+1,rem-1);
     ///cout<<
     vis[ (int)r]=false;
     }
  }
  vis2[col][rem]=1;
  dp[col][rem]=ans;
   ret ans;
}
int main()
{
    scanf("%llu",&n);
    for(ll i=0 ; i<n ; i++){
        scanf("%llu %llu",&p,&q);
        memset(vis,false, sizeof vis);
        memset(vis2,false, sizeof vis2);
        memset(dp,0,sizeof dp);
        if( q>p  )  {   printf("Case %llu: 0\n",i+1);continue; }
        if( !q  )  {   printf("Case %llu: 1\n",i+1);continue; }
        xx=fun(1,q);
        ///xx=xx*(p-q+1)*1ULL;
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
