#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

int main(){

    ll a,b;
    cin>>b>>a;
    ll c= (b*2)+40;
    ll e=(a*2)+40 ;
    ll d=((a-40 )*1 )+( 40)+ (40 ) ;
    ll f=((b-40 )*1 )+( 40)+ (40 ) ;
    cout<<max({ c,d,e,f} ) <<"\n";
    return 0;
}
