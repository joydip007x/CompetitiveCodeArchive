#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main()
{

    cin>>n;
    vector<ll>v,v2;
    ll str=n,yy=1;
    ll xx;
    string s,s2;
    if(n<=9){

         cout<<"-1\n";
         return 0;
    }
//    if(n<=9)
//    {
//        cout<<n<<"\n";
//         return 0;
//    }
    ll z=sqrt(n)+1;
    for( int i=2; i<z; i++)
    {
        while( n%i==0 ){
             n=n/i;
             v.pb(i);
        }
    }
//    cout<<" REMAIN "<<n<<endl;
    if(n!=1)v.pb(n);
    sort(v.begin(),v.end() );
//    for(auto it:v) cout<<it<<" ";cout<<endl;
    for(int i=0 ; i<v.size() ; i++) {

            if( v[i] >9) { cout<<"-1\n"; return 0 ; }
            yy=yy*v[i];
    }
    if(yy!=str) {

         cout<<"-1\n";
         return 0 ;
    }
    v2=v;
    reverse(v2.begin(),v2.end() );
    for(int i=0 ; i<v.size() ; i++){

         if(i==0) { xx=v[i]; continue; }
         if ( xx*v[i] <=9) { xx=xx*v[i];}
         else{
             s.pb(xx+48);
             xx=v[i];
         }
    }
    s.pb(xx+48);
    v=v2;
     for(int i=0 ; i<v.size() ; i++){

         if(i==0) { xx=v[i]; continue; }
         if ( xx*v[i] <=9) { xx=xx*v[i];}
         else{
             s2.pb(xx+48);
             xx=v[i];
         }
    }
    s2.pb(xx+48);
//    cout<<s<<" ---------- "<<s2<<endl;
    bool f=lexicographical_compare(s.begin() , s.end() , s2.begin() , s2.end() );
    if(f) cout<<s<<"\n";
    else cout<<s2<<"\n";



     return 0;
}
