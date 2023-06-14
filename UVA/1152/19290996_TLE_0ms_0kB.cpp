#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long
#define sz  8005
ll  a[sz][sz];
int n,ok=0;
long long  ans1=0LL;
ll fun( int  b, int  col )
{
   if(b==0 and col==4) {  ans1++; }
   if( col==4  ) return 0;
   for(int i=0 ; i<n ; i++){
        fun( b+a[i][col] , col+1 );
   }
   return 0;
}
int main()
{
    int t;
    scanf("%d",&t);
    if(t==0) return 0;
    while(t--){
        if(ok==1) printf("\n");
        ok=0;
        ans1=0LL;
        scanf("%d",&n);
        for(int i=0 ; i<n; i++)
        {
            for(int j=0 ; j<4 ; j++)
            {
               scanf("%lld",&a[i][j]);
            }
        }
        fun(0,0);
        printf("%lld",ans1);
        ok=1;
    }
 return 0;
}
/*
1

6
-45 22 42 -16
-41 -27 56 30
-36 53 -37 77
-36 30 -75 -46
26 -38 -10 62
-32 -54 -6 45
*/
///author-joydip007x         ///
