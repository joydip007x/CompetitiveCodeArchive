#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll int 
ll n,x ,q,t;
#define sc(c) scanf("%d",&c)
int main(){

     sc(t);
     int cas=1;
     while(t--){
        
        int a,b,c;
        sc(a); sc(b); sc(c);
         std::vector<ll> v;
        set<ll>s;
        printf("Case %d: ",cas++ );
        v.pb(a), v.pb(b), v.pb(c);
        sort(v.begin(), v.end());
        s.insert(a),s.insert(b),s.insert(c);
        if(v[0]+v[1] <v[2]) { printf("Invalid\n"); continue;}
        if( s.size()==1   ) { printf("Equilateral\n"); continue;}
        if( s.size()==2   ) { printf("Isosceles\n"); continue;}
        printf("Scalene\n"); 
     }
  
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///

