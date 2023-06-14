#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lll long long
#define sz2 25
#define sz3 INT_MAX
#define ret return

ll n ,s,sum,cc,ans,v;
ll dp[sz2-1][sz3-1] ,a[sz2][5] ;
ll check( ll a , ll b, lll c)
{
//    if(a==1) ret 0;
    a=a-2;
    ret c&1<<( (a*3) +b) ;
}
lll setter( ll a, ll b , lll c ){
  a=a-1;
  ret c|1<<( (a*3) + b );
}
ll L( ll col , lll v )
{
    if(col>n) ret 0;
    if( dp[col][v]!=INT_MAX) ret dp[col][v];
    for(ll i=1; i<=3 ; i++){
       if( col!=1 and check(col,i,v)  ) continue;
       dp[col][v]=min(dp[col][v], a[col][i]+L( col+1, setter(col,i,v ) ));
    }
   ///cout<<"dp["<<col<<"]["<<v<<"]="<<x<<endl;
    return dp[col][v] ;
}
int main()
{
    int t;scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {
        sum=cc=ans=0;
        for(ll k=0;k<sz2; k++)for(ll kk=0; kk<sz3; kk++) dp[k][kk]=INT_MAX;
        memset(a,0,sizeof a);
        scanf("\n%lld",&n);
        for (ll j=1;j<=n  ;j++)
        {
            for(ll k=1 ; k<=3 ; k++) scanf( "%lld",&a[j][k]);
            /////cout<<" for "<<j<<" - "<<a[j][1]<<" "<<a[j][2]<<" "<<a[j][3]<<endl;
        }
        ///cout<<" INPUT ENDED-\n";
        v=1LL;
        ans=L( 1,1LL);
       printf("Case %lld: %lld\n",i,ans );
    }
}
/*
2
4
13 23 12
77 36 64
44 89 76
31 78 45
3
26 40 83
49 60 57
13 89 99
*/
