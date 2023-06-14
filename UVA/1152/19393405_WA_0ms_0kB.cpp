#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                       int

int n,x, arr[10000][5],val,ans;
vector<int>a;
int main()
{

   scanf("%d",&n);
   int ccc=0;
   for(int i=0 ; i<n ; i++){

     if(ccc) puts(""); ccc=0;
       scanf("%d",&x);
      ans=0;
     for(int j=0 ; j<x ; j++)
     {
         int in=-1;
        scanf("%d",&arr[j][++in]);   scanf("%d",&arr[j][++in]);
        scanf("%d",&arr[j][++in]);    scanf("%d",&arr[j][++in]);
     }
     for(int k=0 ; k<x ; k++ )
     {
         for(int l=0 ; l<x ; l++ )
         {
             a.pb(arr[k][0]+arr[l][1]) ;
         }
     }
     sort(a.begin(),a.end() );
     for(int k=0 ; k<x ; k++ )
     {
         for(int l=0 ; l<x ; l++ )
         {
             val=(arr[k][2]+arr[l][3]) ;
             if(binary_search(a.begin() , a.end() , -val)==0)continue;
             auto it=lower_bound(a.begin() , a.end() , -val);
             auto it2=upper_bound(a.begin() , a.end() , -val);
             ans+=it2-it;
             
         }
     }
    printf("%d",ans);
    ccc=1;
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






