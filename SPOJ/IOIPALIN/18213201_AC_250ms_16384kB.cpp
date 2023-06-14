#include<bits/stdc++.h>
using namespace std;
int n ,dp[2 ][5001],ss;
char s2[5001],s1[5001];

int LCS(int a, int b)
{
    int p=0;
   for(int i=1 ; i<=ss ; i++)
   {
       for(int j=1 ; j<=ss ; j++)
       {
           if( s1[i-1] ==s2[j-1 ]  ) dp[  p ][j]= 1 + dp[ p^1 ][j-1];
           else    dp[ p ][j]= max (dp[ p  ][j-1 ], dp[  p^1 ][j]   );
       }
      p=p^1;
    }
    return dp[p^1][ss] ; //max(dp[1][ss],dp[0][ss] );

}
int main()
{
    scanf("%d\n%s",&n,&s1);
    ss=strlen(s1) ;
    strcpy(s2,s1);
    reverse(s2,s2+n);
   printf("%d",n- LCS(0,n-1) );
}
