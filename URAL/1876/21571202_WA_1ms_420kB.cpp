#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

int main(){

    ll a,b;
    cin>>a>>b;
    ll c= (b*2)+40;
    ll d=(a*2 )+( b ) ;
    cout<<max(c,d) <<"\n";
    return 0;
}
