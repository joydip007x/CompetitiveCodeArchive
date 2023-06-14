#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define pb push_back
int main(){


  ll t;
  scanf("%lld",&t);
   for(int i=0 ; i<t ; i++){

      ll n;
      scanf("%lld",&n);
      vector<ll>v;
      map<ll,ll>m;
      ll mx=-1 ,k=-1 ,a1=-1,z=0,o1=0;
      for(int j=0 ; j< n ; j++) {

        ll x;
      scanf("%lld",&x);
      x=x%2;
     (x==0 ) ?z++: o1++;
      }
      if(z>=o1) k=0;
      else k=1;

     printf("2 %lld\n",k);
   }

}
