#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define sz 100000+100
ll n,x ,v[sz]  ;
int main()
{
    int t;
   scanf("%d",&t);
   while(t--)
   {

        scanf("%d",&n);
        for(int i=1; i<=n ; i++) scanf("%d",&v[i]);
        ll dd=(int)sqrt( abs(v[1]-v[n]) );
        for(int i=2; i<=n-1;i++){
        dd=min(dd , (int)sqrt( abs(v[1]-v[i]) )+(int)sqrt( abs(v[i]-v[n]) )  );
        }
        printf("%d\n",dd);
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
