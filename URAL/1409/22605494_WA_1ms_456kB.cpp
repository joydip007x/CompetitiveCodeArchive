#include<iostream>
using namespace std;

#define ll int
#define ret return

int main(){

     ll x,y,ans1,ans2,r;
     cin>>x>>y;
     r=x+y-1;
     if(r>9) r=9;
     ans1=max(0,r-x);
     ans2=max(0,r-y);
     cout<<ans1<<" "<<ans2<<endl;

}
