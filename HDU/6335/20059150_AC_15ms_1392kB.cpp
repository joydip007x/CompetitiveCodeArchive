#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define sz 1000+100
int main()
{
    int t;
   scanf("%d",&t);
   while(t--)
   {
        ll n,y,a[sz],b[sz] ;
        scanf("%lld %lld",&n,&y);
        for(int i=0 ; i<n; i++) scanf("%lld %lld",&a[i],&b[i]);
        sort(b,b+n);
        ll laura=1,cnt=0;
        for(int i=0 ; i<n ; i++){
            if( laura*(a[i]+b[i]) <=y ){
                cnt++;
                laura=laura*(a[i]+b[i]);
            }
        }
        printf("%lld\n",cnt);
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
