#include<bits/stdc++.h>
using namespace std ;
#define ll            long long
ll n,x,q,t ;

bool isprime( ll a){

  if (a==3 || a==5) return true;
  while(a%2==0 ){
     return false;
  }
  for(int i=3; i*i<=a; i=i+2){

     while(a%i==0){

        a=a/i;
        return false;
     }
  }
   return true;
}
int main(){

    cin>>n;
     if (isprime(n) || n<=4 ){

        cout<<n-1<<endl;
        return 0;

     }
     cout<<2<<endl;return 0;

}
