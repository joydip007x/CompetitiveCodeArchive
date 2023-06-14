#include<bits/stdc++.h>
using namespace std ;

#define ll          long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz=100000+10, mod= 1000000007;

ll t,fact[sz+100],invfact[sz+100];

map<ll,ll>m;
map<ll,ll>::reverse_iterator ii;
vector< pair<ll,ll > >tak;
ll bigmod( ll a , ll b, ll m){

  if(b==0) return 1%m;
  ll x=bigmod(a,b/2, m);
  x=(x*x)%m;
  if(b%2) x=(x*a)%m;
  return x;
}
void factor( ){

   fact[0]=1;
   invfact[0]=1;
   for(int i=1; i<=sz; i++){

        fact[i]=((fact[i-1]*i)+mod)%mod;
        invfact[i]= (bigmod(fact[i],mod-2,mod)+mod )%mod;
       /////// if(i<=100 ) cout<<"fact ["<<i<<"]= "<<fact[i]<<endl;
   }
}
int main(){

      factor();
      sc(t);
      while(t--){

           ll n,b,x,y,ans=1;
           sc(n);sc(b);
           m.clear(); tak.clear();
           for(int i=0 ; i<n ; i++){

                sc(x);sc(y);
                if(y==0 ) continue;
                m[x]++;
           }
           ll need=b;
           for( ii= m.rbegin() ; ii!=m.rend() ; ii++){

            ///  cout<<ii->first<<" "<<ii->second<<endl;
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
//           cout<<"-------------------------\n";
//           for(auto it:tak) cout<<" PAGE "<<it.first<<" needed "<<it.second<<endl;
//           cout<<" ------------------------ \n";
           for(auto it:tak){

                  ll pag=it.first;
                  ll ined= it.second;
                  ll numof =m[pag];
//                  cout<<" page "<<pag<<" ineed "<<ined<<" ace "<<numof<<endl;
                  if(numof<=ined) continue;

                  ans=((ans)%mod* (  fact[numof]*invfact[numof-ined]*invfact[ined])%mod)%mod ;
           }
            printf("%d\n",ans);

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
