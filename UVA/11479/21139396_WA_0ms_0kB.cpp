#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long  
#define sc(c) scanf("%lld",&c)
int main(){
     
     ll t ,cas=1;;;
     sc(t);
     while(t--){
        ll a,b,c;
        sc(a); sc(b); sc(c);
        vector<ll> v;
        set<ll>s;
        v.pb(a), v.pb(b), v.pb(c);
        sort(v.begin(), v.end());
        s.insert(a),s.insert(b),s.insert(c);
        printf("Case %lld: ",cas++ );
        if(v[0]+v[1] <v[2] || v[1]+v[2]<v[0] || v[0]+v[2]<v[1] ) { printf("Invalid\n");}
        else if( s.size()==1   ) { printf("Equilateral\n");}
        else if( s.size()==2   ) { printf("Isosceles\n");}
        else printf("Scalene\n"); 
     }
 
}
///author-joydip007x         ///
///Time&Date-Whenever i submit///

