#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define p printf("First\n")
#define q printf("Second\n")
#define pb push_back
ll t,n;
int main(){


           cin>>n;
           vector<ll>v;
           while(n%2==0) { v.push_back(2) ; n=n/2;}
           for(int i=3;  i<1000000;i=i+2){

                 while(n%i==0){

                          n=n/i;
                          v.pb(i);
                 }
           }
          /// cout<<" LASTT -- "<<n<<endl;
          if(n!=1) v.pb(n);
       ///    for(auto it:v) cout<<it<<" ";
       cout<<v.size()<<endl;

 }
