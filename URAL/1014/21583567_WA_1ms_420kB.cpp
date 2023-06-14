#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;
vector<ll>v,v2;
ll str=n,yy=1;
ll xx;
string s,s2;
int main()
{
    cin>>n;
    if(n==0){cout<<"10"<<"\n";return 0;}
    if(n<=9){cout<<n+10<<"\n";return 0;}
    for( int i=2; i<10 ;i++)
    {
        while( n%i==0 ){
             n=n/i;
             v.pb(i);
        }
    }
    if(n>9){cout<<"-1\n"; return 0 ;}
    if(n!=1 && n<=9 ) v.pb(n);
    sort(v.begin(),v.end() );
    v2=v;
    reverse(v2.begin(),v2.end() );
    for(int i=0 ; i<v.size() ; i++){
         if(v[i]==1) continue;
         if(i==0) { xx=v[i]; continue; }
         if ( xx*v[i] <=9) { xx=xx*v[i];}
         else{
             s.pb(xx+48);
             xx=v[i];
         }
    }
    if(xx>1)s.pb(xx+48);
    v=v2;
    for(int i=0 ; i<v.size() ; i++){

         if(v[i]==1) continue;
         if(i==0) { xx=v[i]; continue; }
         if ( xx*v[i] <=9) { xx=xx*v[i];}
         else{
             s2.pb(xx+48);
             xx=v[i];
         }
    }
    if(xx>1)s2.pb(xx+48);
    sort(s.begin() ,s.end() );
    sort(s2.begin() ,s2.end() );
    if(s.size()<s2.size() ) { cout<<s<<endl;return 0;}
    if( s.size()>s2.size() ){cout<<s2<<endl;return 0;}
    bool f=lexicographical_compare(s.begin() , s.end() , s2.begin() , s2.end() );
    if(f){cout<<s;cout<<"\n";}
    else{cout<<s2;cout<<"\n";}
    return 0;
}
