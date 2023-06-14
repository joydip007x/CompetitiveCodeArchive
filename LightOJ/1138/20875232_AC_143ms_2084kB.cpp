#include<bits/stdc++.h>
using namespace std;
typedef  long long   ll;
ll pow5( ll a ){
    ll b=5,cnt=0;
    while(a/b)cnt+=(a/b),b*=5;
    return cnt;
}
ll binary_suc( ll l, ll h, ll q){

    ll ret=-1;
    while(l<=h){

          ll mid=(l+h)/2;
          if( pow5(mid)<=q ){

             ret=mid;
             l=mid+1;
          }
          else h=mid-1;
    }
    if( ret==-1   ) return 0;
    l=ret-10, h=ret+20 , ret=0;
    for(   ; l<=h ; l++ ){

          if(l>0){
               if(pow5(l)==q) return l;
          }
    }
    return 0;
}
int main()
{
  ll q;
  scanf("%lld",&q);
  for(ll cas=1 ; cas<=q ; cas++){

       ll n,ans;
       scanf("%lld",&n);
       ans=binary_suc(1,LLONG_MAX,n);
    if(ans==0)printf("Case %lld: impossible\n",cas);
          else printf("Case %lld: %lld\n",cas,ans);
  }

}





///author-joydip005x         ///
///Time&Date-Whenever i submit///
