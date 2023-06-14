#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define sz 1000+100
int main()
{
    int t;
   scanf("%d",&t);
   while(t--)
   {
        ll n,y,a[sz],b[sz] ;
        scanf("%d %d",&n,&y);
        for(int i=0 ; i<n; i++) scanf("%d %d",&a[i],&b[i]);
        sort(b,b+n);
        ll laura=1,cnt=0;
        for(int i=0 ; i<n and laura<=y ; i++){
            cnt++;
            laura= laura*(a[i]+b[i]);
        }
        printf("%d\n",cnt-1);
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
