#include<bits/stdc++.h>
using namespace std;
int n ,dp[2 ][5001],ss;
char s2[5001],s1[5001];

int LCS(int a, int b)
{
    int p=1;
   for(int i=1 ; i<=ss ; i++)
   {
       for(int j=1 ; j<=ss ; j++)
       {
           if( s1[i-1] ==s2[j-1 ]  ) dp[  p ][j]= 1 + dp[ p^1 ][j-1];
           else    dp[ p ][j]= max (dp[ p  ][j-1 ], dp[  p^1 ][j]   );
       }
      p=(p+1)%2;
    }
    return max(dp[1][ss],dp[0][ss] );

}
int main()
{
    int t;scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {
        memset(dp,0,sizeof dp);
        scanf("%s",&s1);
        n=ss=strlen(s1) ;
        strcpy(s2,s1);
        reverse(s2,s2+n);
        printf("Case %d: %d\n",i,n- LCS(0,n-1) );
    }
}
