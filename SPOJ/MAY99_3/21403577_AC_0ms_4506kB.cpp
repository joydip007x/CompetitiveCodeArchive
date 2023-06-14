#include<bits/stdc++.h>
using namespace std ;
#define sc(c)          scanf("%d",&c);
#define ll int
ll a,b,c,t ,dd ;
ll x,y=0;

int main(){
  sc(t);
  while(t--){
      sc(a);sc(b) ; sc(c);
      if( a+b<c || ( a<c && b<c )) {cout<<"NO\n"; continue;}

      if( a==1 || b==1) { cout<<"YES\n"; continue; }
      if( max(a,b)%min(a,b) ==c ) { cout<<"YES\n"; continue; }

      if( c%__gcd(a,b) ==0 /*&& __gcd(a,b)>1*/   ) cout<<"YES\n";
       else cout<<"NO\n";
  }
}
