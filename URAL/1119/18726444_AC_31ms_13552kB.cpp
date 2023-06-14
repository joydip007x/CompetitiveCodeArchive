#include<bits/stdc++.h>
using namespace std;

#define ll int
#define MX 1020
#define ret return
#define eps 1e-7

const double dis= sqrt(2)*100;
double dp[MX][MX] ,ans;
bool stvis[MX][MX];
ll n,m,q,x,y,vis[MX][MX];
double fun(ll i, ll j)
{
    if(i==n and j==m) ret 0.00;
    if(i>n || j>m)
    {
        ret INT_MAX;
    }
    if( stvis[i][j] ) ret dp[i][j]*1.00000;
    stvis[i][j]=true;
    double x,y,z;
    x=89898*99899.99;
    if( vis[i+1][j+1] ) ret dp[i][j]= x=(sqrt(2)*100)*1.0000 + fun(i+1,j+1);
    y=( fun(i+1,j)+100 ) *1.00;
    z=(fun(i,j+1)+100  ) *1.00;
    ret dp[i][j]= min( { y,z } )*1.00;
}
int main()
{
    scanf("%d %d\n %d",&n,&m,&q);
    memset(stvis,false,sizeof stvis);
    memset(vis,0,sizeof stvis);
    ////for(ll i=0; i<=MX ; i++){for(ll j=0 ; j<=MX ; j++){ dp[i][j]=INT_MAX*1.0; } }
    for(ll i=0 ; i<q ; i++)
    {
        scanf("%d %d",&x,&y);
        vis[x][y]=1;
    }
    ans=fun(0,0)*1.000;    /////cout<<ans<<" :::XXXX \n";
    printf("%.0lf",round(ans) ) ;
}
/*
3 2
3
1 1
3 2
1 2
*/
