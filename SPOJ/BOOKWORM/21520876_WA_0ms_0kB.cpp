#include<bits/stdc++.h>
using namespace std ;

#define ll           long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz= 100001, mod= 1000000007;

ll t,fact[sz+2];

map<ll,ll>m;
map<ll,ll>::reverse_iterator ii;
vector< pair<ll,ll > >tak;

ll bigmod( ll a , ll b, ll m){

  if(b==0) return 1%m;
  ll x=bigmod(a,b/2, m);
  x=(x%m*x%m)%m;
  if(b%2) x=(x%m*a%m)%m;
  return x%m;
}
void factor( ){

   fact[0]=1;
   for(int i=1; i<=sz; i++){

        fact[i]= fact[i-1]*i;
        fact[i]%=mod;

   }
}
int main(){

      factor();
      sc(t);
      while(t--){

           ll n,b,x,y,ans=1LL;
           sc(n);sc(b);
           m.clear(); tak.clear();
           for(int i=0 ; i<n ; i++){

                sc(x);sc(y);
                if(y==0 ) continue;
                m[x]++;
           }
           ll need=b;
           for( ii= m.rbegin() ; ii!=m.rend() ; ii++){

                 if(need<=0 ) break;
                 if(need>= ii->second) {
                      tak.pb({ii->first,ii->second});
                      need-=ii->second;
                 }
                 else{
                    tak.pb({ii->first,need});
                    need=0;
                    break;
                 }

           }
           if(tak.size()==0) {  printf("0\n"); continue;}
           for(auto it:tak){

                  ll pag=it.first;
                  ll ined= it.second;
                  ll numof =m[pag];
                  ans=ans%mod;
                  ll pp=fact[numof] * bigmod(fact[numof-ined], mod-2, mod) ;
                  pp=pp%mod;
                  pp= pp*bigmod( (fact[ined]) ,mod-2,mod)%mod;
                  pp=pp%mod;
                  ans=ans*pp;
                  ans=(ans+mod)%mod;
           }
            printf("%lld\n",ans%mod);

      }

}
/*
2
5 3
10 0
5 1
2 1
2 1
2 1
*/
