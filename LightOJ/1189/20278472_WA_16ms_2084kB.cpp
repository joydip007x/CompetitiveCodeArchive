#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll n,x ,fact[25],used[25] ;
bool hoibona;
ll giv(ll x){

   for(int i=20 ; i>=0 ; --i){
     if(used[i]) continue;
     if(x-fact[i]>=0) {
        n=n-fact[i];
        used[i]=1;
        return i+48;
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
      string s;
      printf("Case %d: ",cas);
      for(int j=0 ; j<=100 ; j++){
        s.pb(giv(n));
        if(n<=0 || hoibona ) break;
      }
      if(n!=0 || hoibona ) { printf("impossible\n"); continue;    }
      reverse(s.begin(),s.end());
      char c=s.back(); s.pop_back();
      for(int i=0 ; i<s.size() ; i++){
         printf("%c!+",s[i]);
      }
      printf("%c!\n",c);
  }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
