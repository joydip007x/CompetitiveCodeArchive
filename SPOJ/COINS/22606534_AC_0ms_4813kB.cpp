#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ret return
#define pb push_back

///const ll sz=100000;
ll z;
unordered_map<ll,ll>dp;
ll rec(ll n){

     if(n<=11) ret n;
     if(dp[n]!=0) ret dp[n];
     ll p=rec(n/2);
     ll q=rec(n/3);
     ll r=rec(n/4);
     ret dp[n]=max(n,p+q+r);
}
int main(){


     while(cin>>z){

        if(z<=11){
            cout<<z<<endl;continue;
        }
         cout<<rec(z)<<endl;
     }
}
