#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll c;
  scanf("%lld",&c);
  for(ll kk=0 ; kk <c ; kk++){

    ll ans=0,n;
    scanf("%lld",&n);
    set<ll>s;
    map<ll,ll>m;
    for(ll i=0 ; i<n ; i ++) {
        ll x,y;
        scanf("%lld",&x);
        y=x+1;
        if(!x) {ans++;continue;}
        if(m[y]==0){
            ans=ans+y;
            m[y]=x;
        }
        else{
            --m[y];
        }
    }
    printf("Case %lld: %lld\n",kk+1,ans);
  }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
