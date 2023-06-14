#include<bits/stdc++.h>
using namespace std;
typedef int  ll;
#define pb push_back
vector<ll>v;
ll a[2];
int main()
{
  ll t,cas=1;
  scanf("%d",&t);
  while(t--){

      v.clear();
      printf("Case %d:\n",cas++);
      ll n,q,x,y;
     scanf("%d",&n);scanf("%d",&q);
      for(int i=0 ;  i < n ; i++) {
          scanf("%d",&x);
          v.pb(x);
      }
      for(int i=0 ; i<  q ; i++){

        scanf("%d",&x);scanf("%d",&y);
         auto it= upper_bound(v.begin()  , v.end()  , x-1 );
         auto it2=upper_bound(v.begin()  , v.end()  , y );
       printf("%d\n",abs(it2-it));
      }

  }
}

///author-joydip007x         ///
///Time&Date-Whenever i submit//
