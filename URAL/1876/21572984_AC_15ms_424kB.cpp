#include<bits/stdc++.h>
using namespace std ;

int main(){

    int a, b;
    cin>>a>>b;
    int c=(b*2)+40;
   /// if(b>=a) return cout<<c<<"\n",0;

    int d=(a*2)+40 ;
    cout<<max(c,d-1)<<"\n";
}
