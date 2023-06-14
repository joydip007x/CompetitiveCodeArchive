#include<bits/stdc++.h>
using namespace std;
#define ll int
#define  ret return
///*/////////////////// /// *
/*//    author-joydip007x  ///  */
#define M 9999
ll dp[M][M] ,n,lmt,a[M],t,pp=0;
ll lds(ll last,ll cur)
{
    if(last==lmt || cur>lmt) ret 0;
    if(dp[last][cur]!=-1 ) ret dp[last][cur];
    if(  a[last]<a[cur] ) dp[last][cur]=1+lds( cur,cur+1 );
    ret dp[last][cur]=max( dp[last][cur] , lds(last ,cur+1));
}
void lisprint(ll last, ll cur)
{
    if(last==lmt || cur>lmt) ret ;
    ll aa=lds(last,cur);
    if(  aa==1+ lds(cur, cur+1))
    {
        cout<<a[cur]<<endl;;
        lisprint(cur,cur+1);
        ret;
    }
    lisprint(last,cur+1);
    ret;

}
int main()
{
    lmt=0;
    a[0]=-999999999;
    memset(dp,-1,sizeof dp);
   while(  scanf("%d",&t)!=-1 )
   {
              lmt++;
            a[lmt]=t;
   }
   cout<<lds(0,1)<<"\n"<<"-\n";
   lisprint(0,1);
}
/*
-7
10
9
2
3
8
8
6
*/
