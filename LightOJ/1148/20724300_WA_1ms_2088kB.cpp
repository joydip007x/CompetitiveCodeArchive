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
    for(ll i=0 ; i<n ; i ++) {
        ll x;
        scanf("%lld",&x);
        s.insert(x+1);
    }
    for(set<ll>::iterator it=s.begin()  ; it!=s.end() ; it++){
        ans=ans+*it;
    }
    printf("Case %lld: %lld\n",kk+1,ans);
  }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
