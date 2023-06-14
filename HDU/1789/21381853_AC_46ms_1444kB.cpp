#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define pb push_back
bool cmp( pair <ll ,ll > a, pair <ll, ll > b) {

    return a.first>b.first;
}
int main(){


  ll t;
  scanf("%lld",&t);
   for(int i=0 ; i<t ; i++){

      ll n;
      scanf("%lld",&n);
      vector<pair<ll,ll> >v;

      ll mx=-1, dead=-1,ans=0;
      for(int j=0 ; j< n ; j++) {

        ll x;
        scanf("%lld",&x);
        dead=max(dead, x);
        ///ans+=x;
        v.pb({0,x});
      }
       for(int j=0 ; j< n ; j++) {

        ll x;
        scanf("%lld",&x);
        ans+=x;
        v[j].first=x;
      }
      sort(v.begin(),v.end() , cmp);
      vector<ll>v2;
      v2.resize(dead+1,-1);
      ////for(auto it:v) cout<<it.first<<" "<<it.second<<endl;

      for(int i=0 ; i<v.size() ; i++){

          ll p=v[i].first, d=v[i].second ;
          if(v2[d]==-1) ans-=p,v2[d]=1 ;
          else{

              while( d>=1) {
                 if(v2[d]==-1) {v2[d]=1,ans-=p; break;}
                 else --d;
              }

          }
      }
    /////cout<<"XXXXXXXXXXXXXX ";
     printf("%lld\n",ans);
   }

}
