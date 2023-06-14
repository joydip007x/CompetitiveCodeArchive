#include<bits/stdc++.h>
using namespace std;
#define ll int
#define  ret return
///*/////////////////// /// *
/*//    author-joydip007x  ///  */
#define M 9999
ll dp[M] ,n,lmt,t,k;
vector<ll>v;

ll fun(ll last)
{

  ////cout<<last<<" : ";
    if(last<0) ret 0;
    if(last==1 ) ret 2;
    if(last==2 ) ret 2;
    if(last==0) ret 1;
    if(dp[last]!=-1) ret dp[last];
    ret dp[last]=  ( fun(last-1) + fun(last-2)   );

}
int main()
{
  memset(dp,-1,sizeof dp);
   scanf("%d",&n);


   printf("%d\n" , fun(n) );

}
/*

*/
