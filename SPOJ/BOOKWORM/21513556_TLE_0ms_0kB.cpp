#include<bits/stdc++.h>
using namespace std ;

#define ll          long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz= 100000+10, mod= 1000000007;

ll t,fact[sz+100],invfact[sz+100];

map<ll,ll>m;
map<ll,ll>::reverse_iterator ii;
vector< pair<ll,ll > >tak;

ll bigmod( ll a , ll b, ll m){

  if(b==0) return 1%m;
  ll x=bigmod(a,b/2, m);
  x=(x*x)%m;
  if(b%2) x=(x*a)%m;
  return x%m;
}
void factor( ){

   fact[0]=1;
   invfact[0]=1;
   for(int i=1; i<=sz+3; i++){

        fact[i]=((((fact[i-1])%mod )*(i%mod))+mod)%mod;
        invfact[i]= (bigmod(fact[i],mod-2,mod)+mod )%mod;
   }
}
int main(){

      factor();
      sc(t);
      while(t--){

           ll n,b,x,y,ans=1LL;
           sc(n);sc(b);
           m.clear(); tak.clear();
           vector<int >v;
           map<int ,int >m2;
           m2.clear();v.clear();
           m.clear();
           for(int i=0 ; i<n ; i++){

                sc(x);sc(y);
                if(y==0 ) continue;
                m[x]++;
                v.pb(x);

           }
           if( v.size() < b) {  printf("0\n"); continue ; }
           sort(v.begin(),v.end(),greater<ll>()  ) ;
           for(int i=0 ; i<b; i++){
                 m2[ v[i] ]++;
            }
           for(auto it:m2){

                  ll pag=it.first;
                  ll ined= it.second;
                  ll numof =m[pag];
                  ans=ans%mod;
                  ll pp=((fact[numof]%mod)*(invfact[numof-ined]%mod) )%mod;
                  pp= (( pp%mod )*( invfact[ined]%mod))%mod;
                  ans=ans*pp;
                  ans=ans%mod;
           }
            printf("%lld\n",(ans+mod)%mod);

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
