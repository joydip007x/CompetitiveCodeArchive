#include<iostream>
using namespace std;

#define ll int
#define ret return

int main(){

     ll x,y,ans1,ans2;
     cin>>x>>y;
     ans1=max(0,10-x);
     ans2=max(0,10-y);
     cout<<ans1<<" "<<ans2<<endl;

}
