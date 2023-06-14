#include<bits/stdc++.h>
using namespace std ;

int main(){

    int a, b;
    cin>>a>>b;
    int c=(b*2)+40;
    int d=80+ ( a-40+b-40)*2 ;
    cout<<max(c,d)<<"\n";
}
