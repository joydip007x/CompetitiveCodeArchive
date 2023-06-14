#include<bits/stdc++.h>
#define pb               push_back
#define ll               long long
#define fast             ios_base::sync_with_stdio(false),cin.tie(NULL)

///joydip007x
using namespace std;
vector<int>v,v2;
ll cmp(ll a, ll b)
{
    return __gcd(a,b);
}
int main()
{
  ll n,y,x;
  cin>>n;
  for(ll i=0; i<n ; i++)
  {
      cin>>y;
      v.pb(y);
  }
  ll gc=accumulate(v.begin() , v.end(), v[0] , cmp);
  if(gc!=v[0]) return cout<<"-1",0;

  vector<ll>ans;
  ans.pb(v.back()); v.pop_back();
  for(ll i=v.size()-1 ; i>=0 and v.size()  ; i--){
      ans.pb(v[i]);
      for(ll j=0 ; j<ans.size() ; j++)
      {
          ll xc=__gcd(v[j] , v[i]);
          auto it=find( v.begin() , v.end() ,xc  );
          if(it!=v.end() ) v.erase(it);
      }
  }
 sort(ans.begin() , ans.end() );
 auto iy=unique(ans.begin() , ans.end() );
 ans.resize(iy-ans.begin());
 for(auto it:ans) cout<<it<<" ";
}
