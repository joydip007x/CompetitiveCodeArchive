#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;

const ll sz2=1000010;
ll prime[sz2],vis[sz2+10],m[sz2+10];

void seive(){

   ll sqlmt=sqrt(sz2),ind=-1;
   for(ll i= 3; i<=sqlmt ; i=i+2){
        if(!vis[i]){
            for(ll j=i*i ;j<=sz2 ; j=j+(i*2) )
                vis[j]=1;
        }
   }
   prime[++ind]=2;
   for(ll i=3; i<=sz2 ; i=i+2){
       if(!vis[i]) prime[++ind]=i ;
   }
}
void factorize(ll a,ll b){

   for(ll i=0; prime[i]*prime[i]<=a and prime[i]<=5; i++){
        ll cnt=0;
        while(a%prime[i]==0) a=a/prime[i],cnt++;
        m[ prime[i] ]=cnt*b;
   }
   if(a!=1) m[a]=b;
   return;
}
int main()
{
  seive();
  ll q;
  scanf("%lld",&q);
  for(ll cas=1 ; cas<=q ; cas++){

       ll n,r,p,q,sn;
       scanf("%lld %lld %lld %lld",&n,&r,&p,&q);
       sn=n-r;
       factorize(p,q);
      for(ll i=0 ; prime[i]<=n and  prime[i]<=5 ; i++){
          ll cur=prime[i],cnt=0,p=prime[i];
          while(n/p)cnt+=(n/p),p=p*cur;
          m[prime[i]]+=cnt;
      }
      for(ll i=0 ; prime[i]<=r and prime[i]<=5 ; i++){
          ll cur=prime[i],cnt=0,p=prime[i];
          while(r/p)cnt+=(r/p),p=p*cur;
          m[prime[i]]-=cnt;
      }
      for(ll i=0 ; prime[i]<=sn and prime[i]<=5 ; i++){
          ll cur=prime[i],cnt=0,p=prime[i];
          while(sn/p)cnt+=(sn/p),p=p*cur;
          m[prime[i]]-=cnt;
      }
      printf("Case %lld: %lld\n",cas,min(m[2],m[5]));
  }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
