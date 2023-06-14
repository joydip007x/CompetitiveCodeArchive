#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll n,x ,fact[25],used[25] ;
bool hoibona;
vector<ll>ans;
ll giv(ll x){

   for(int i=20 ; i>=0 ; --i){
     if(used[i]) continue;
     if(x-fact[i]>=0) {
        n=n-fact[i];
        used[i]=1;
        ans.pb(i);
        return i;
     }
   }
   hoibona=true;
   return (int)1e7;
}
int main()
{
  int t;
  scanf("%d",&t);
  fact[0]=1;
  for(ll i=1; i<=20 ; i++) fact[i]=i*fact[i-1]*1LL;
  for(int cas=1 ; cas<= t ; cas++){

      scanf("%lld",&n);
      hoibona=false;
      memset(used,0,sizeof used);
      printf("Case %d: ",cas);
      for(int j=0 ;  ; j++){
        giv(n);
        if(n<=0 || hoibona ) break;
      }
      if(n!=0 || hoibona || ans.size()==0 ) { printf("impossible\n"); continue;    }
      sort(ans.begin(),ans.end() );
      for(int i=0 ; i<ans.size()-1 ; i++) printf("%lld!+",ans[i]);
      printf("%d!\n",ans.back());
  }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
