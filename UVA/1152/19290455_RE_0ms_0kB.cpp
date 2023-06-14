#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long
#define sz  4005
int n,nn, a[sz][sz],ok=0;
unsigned ll ans1=0ULL;
ll fun( int  b, int  col )
{
   if(b==0 and col) {  ans1++; }
   if( col==4  ) return 0;
   for(int i=0 ; i<n ; i++){
        fun(b+a[i][col] , col+1 );
   }
}
int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--){
        if(ok) printf("\n"); ok=0;
        ans1=0ULL;
        scanf("%d",&n);
        for(int i=0 ; i<n; i++)
        {
            for(int j=0 ; j<4 ; j++)
            {
               scanf("%d",&a[i][j]);
            }
        }
        fun(0,0);
        printf("%u",ans1);
        ok=1;
    }

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
///Time&Date-Whenever i submit///
