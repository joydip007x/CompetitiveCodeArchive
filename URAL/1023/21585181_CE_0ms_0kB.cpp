#include<bits/stdc++.h>
using namespace std ;
#define ll            long long
ll n,x,q,t ;
int main(){

    cin>>n;
    if(n%2==1 || n<=4) {
         cout<<n-1>>"\n";
         return 0;
    }
    if(n%4==0)cout<<n/4<<endl;
    else cout<<n-1<<endl;
    return 0;
    
}
