#include<bits/stdc++.h>
using namespace std;
#define ll int
#define ret return
#define M 2003
ll t,dp[M][M],lmt1,lmt2;
//char s1[M] , s2[M] ;
string s1,s2;
ll lcs( ll i,ll j)
{
    if(i==lmt1|| j==lmt2 )
    {
        if(i==lmt1)
            ret lmt2-j;
        ret lmt1-i;
    }
    if(dp[i][j]!=-1) ret dp[i][j];
    ll x,y,z ,cst=0;
    if(s1[i]!=s2[j]) cst=1;
    x=lcs(i+1,j+1);
    y=1+lcs(i,j+1);
    z=1+lcs(i+1,j);
    ret dp[i][j]=min( { x+cst,y,z });
}
int main()
{
     cin>>t;
    while(t--)
    {
         cin>>s1>>s2;
        memset(dp,-1,sizeof dp);
        lmt1=s1.size() ;
        lmt2=s2.size() ;
        cout<<lcs(0,0)<<"\n";
    }

}
