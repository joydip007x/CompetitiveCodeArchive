#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;
const ll sz2=1000010;
ll prime[sz2+10];

ll pow5( ll a , ll p){
    ll b=p,cnt=0;
    while(a/b)cnt+=(a/b),b*=p;
    return cnt;
}
void seive(){

  for(ll i=1; i<sz2 ; i++){

       ll k=i,cnt2=0;
       while(k%2==0) k/=2;
       while(k%3==0) k/=3;
       while(k%5==0) k/=5;
       prime[i]=pow5(i,5);
  }

}
ll binary_suc( ll l, ll h, ll q){

    ll ret=-1;
    while(l<=h){

          ll mid=(l+h)>>1;
          if( prime[mid]<=q ){

             ret=mid;
             l=mid+1;
          }
          else h=mid-1;
    }
    if( ret==-1 ||  prime[ret]!=q  ) return -1;
    l=ret-6, h=ret+6 , ret=0;
    for(   ; l<=h ; l++ ){

        if(prime[l]==q) return l;
    }
    return -1;
}
int main()
{
  seive();
  ll q;
  scanf("%lld",&q);
  for(ll cas=1 ; cas<=q ; cas++){

       ll n,ans;
       scanf("%lld",&n);
       ans=binary_suc(1,sz2-5,n);
    if(ans==-1)printf("Case %lld: impossible\n",cas);
          else printf("Case %lld: %lld\n",cas,ans);
  }

}





///author-joydip005x         ///
///Time&Date-Whenever i submit///
