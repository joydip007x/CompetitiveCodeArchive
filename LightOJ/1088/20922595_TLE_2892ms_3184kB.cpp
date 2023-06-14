#include<bits/stdc++.h>
using namespace std;
typedef int  ll;
#define pb push_back

int main()
{
  ll t,cas=1;
  cin>>t;
  while(t--){

       cout<<"Case "<<cas++<<":\n";
      ll n,q,x,y;
      vector<ll>v;
      cin>>n>>q;
      for(int i=0 ;  i < n ; i++) {
         cin>>x ;
          v.pb(x);

      }
      for(int i=0 ; i<  q ; i++){

         cin>> x >> y;
         auto it= upper_bound(v.begin()  , v.end()  , x-1 );
         auto it2=upper_bound(v.begin()  , v.end()  , y );
         cout<<abs(it2-it)+1-1<<endl;
      }

  }

}


///author-joydip007x         ///
///Time&Date-Whenever i submit//
