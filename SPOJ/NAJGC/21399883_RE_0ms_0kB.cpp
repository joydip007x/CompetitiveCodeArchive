#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);
    ll q;
    cin>>q;
    for(int cas=1; cas<=q ; cas++){

          ll a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,pp,qq ;
          cin>>a>>b>>c>>d;
          e=a+b ;
          f=c+1 ; g=c+d+1 ;
          k= d+1 ;

          /// cout<<" e "<<e<<" g "<<g<<endl;
          pp=(a*f)+(b*k) ;
          qq=(e*g) ;
          o=__gcd(pp,qq);
         /// cout<<"GCD = "<<o<<" "<<pp<<" "<<qq<<endl;
          cout<<"Case "<<cas<<": "<<(pp/o)<<"/"<<(qq/o)<<"\n";

    }

}
