#include<bits/stdc++.h>
using namespace std ;

int main(){

    int a, b;
    cin>>a>>b;
    int c=(b*2)+40;
    if(b>=a) return cout<<c<<"\n",0;

    int d=40+((a-40)*2)+40+ ( (b-40)*2);
    cout<<max(c,d)<<"\n";
}
