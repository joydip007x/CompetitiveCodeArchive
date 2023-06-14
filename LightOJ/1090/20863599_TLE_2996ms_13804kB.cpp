#include<bits/stdc++.h>
using namespace std;
typedef int  ll;

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

   for(ll i=0; prime[i]*prime[i]<=a; i++){
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
  int q;
  scanf("%d",&q);
  for(int cas=1 ; cas<=q ; cas++){

       int n,r,p,q,sn;
       scanf("%d %d %d %d",&n,&r,&p,&q);
       sn=n-r;
       factorize(p,q);
      for(int i=0 ; prime[i]<=n ; i++){
          int cur=prime[i],cnt=0,p=prime[i];
          while(n/p)cnt+=(n/p),p=p*cur;
          m[prime[i]]+=cnt;
      }
      for(int i=0 ; prime[i]<=r ; i++){
          int cur=prime[i],cnt=0,p=prime[i];
          while(r/p)cnt+=(r/p),p=p*cur;
          m[prime[i]]-=cnt;
      }
      for(int i=0 ; prime[i]<=sn ; i++){
          int cur=prime[i],cnt=0,p=prime[i];
          while(sn/p)cnt+=(sn/p),p=p*cur;
          m[prime[i]]-=cnt;
      }
      printf("Case %d: %d\n",cas,min(m[2],m[5]));
  }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
