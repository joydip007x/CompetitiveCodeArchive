#include<bits/stdc++.h>
using namespace std;

#define ll long long

#define p printf("First\n")
#define q printf("Second\n")

ll t;
int main(){

       cin>>t;

       while(t--){

                ll n;
               cin>>n;
               vector<ll>v;
               ll cnt=0,r=0;
               for(int i=0; i<n; i++){


                    ll x;
                     cin>>x;
                   //  v.pb(x);
                     r=r^x;
                     if(x==1) cnt++;
               }
               if(cnt==n){

                     if(cnt%2){
                        q;
                     }
                     else {
                        p;
                     }
               }
               else{

                    if(r) {p;}
                    else {q;}
               }

       }


 }
