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
    if(  a[last]>=a[cur] ) dp[last][cur]=1+lds( cur,cur+1 );
    ret dp[last][cur]=max( dp[last][cur] , lds(last ,cur+1));
}
int main()
{
    cout.tie(NULL);
    char has=35;ll tes=1,start=1,dew=0;;
    lmt=0;
    a[0]=INT_MAX;
    memset(dp,-1,sizeof dp);
   while(  scanf("%d",&t) )
   {
        if(t==-1 and start ) break;
        if(t==-1) {
                memset(dp,-1,sizeof dp);
                if(dew) printf("\n");
                ////cout<<" INPUTTED - "<<lmt<<" numbers and last "<<a[lmt]<<endl;
                printf("Test %c%d:\n",has,tes++);
                printf("  maximum possible interceptions: %d\n",lds(0,1));
                lmt=0;
                a[0]=INT_MAX;
                start=1;
                dew=1;
        }
        else {
            start=0;
            lmt++;
            a[lmt]=t;
        }
   }
}
/*
389
207
155
300
299
170
158
65
-1
*/
