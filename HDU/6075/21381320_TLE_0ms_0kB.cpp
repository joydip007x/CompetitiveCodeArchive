#include<bits/stdc++.h>
using namespace std ;

#define ll int
#define pb push_back
int main(){


  ll t;
   cin>>t;
   for(int i=0 ; i<t ; i++){

      ll n;
      cin>>n;
      vector<ll>v;
      map<ll,ll>m;
      ll mx=INT_MIN ,k,a1;
      for(int j=0 ; j< n ; j++) {

        ll x;
        cin>>x;
        v.pb(x);
      }
      sort(v.begin() , v.end() );
      for(int i=1 ; i<v.size() ; i++) m[ v[i]-v[i-1] ]++;

      for(auto it:m) {
         if( it.second > mx )
          {  mx=it.second ; a1=it.first ;}

      }

      for(int i=1 ; i<v.size() ; i++)
      {
          if(v[i]-v[i-1]==a1)  {k=v[i]%a1;break; }
      }

      cout<<a1<<" "<<k<<endl;
   }

}
