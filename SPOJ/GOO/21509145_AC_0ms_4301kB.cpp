#include<bits/stdc++.h>
using namespace std ;

#define ll            unsigned long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

ll n,t,ans,one ;

ll tothepow( ll bas, ll pow){

   ll ret=1;
   for(int i=0 ; i<pow ; i++) ret=ret*2;
   return ret;

}
int main(){


      sc(t);
      while(t--){

             sc(n);
             ans=tothepow(2,n-1);
            ll bar=ans/2 ;
            ll ghor= (ll)log2(ans);
             one= ans +(bar*ghor);
             printf("%lld %lld\n",ans,one);
      }

}
