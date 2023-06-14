#include<bits/stdc++.h>
using namespace std ;
#define ll            long long
ll n,x,q,t ;
int main(){

    cin>>n;
    
    if(n%2==1 || n<=4) {
         cout<<n-1;
    }
    else cout<<2;
    cout<<"\n";
    return 0;
}
