#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;

const ll sz2=1000010;
ll prime[sz2][3];
void seive(){

  memset(prime,0,sizeof prime);
  for(ll i=1; i<=sz2 ; i++){

       ll k=i,cnt1=0,cnt2=0;
       while(k%2==0) k/=2,cnt1++;
       while(k%3==0) k/=3;
       while(k%5==0) k/=5,cnt2++;
       prime[i][0]=cnt1;
       prime[i][1]=cnt2;

  }
}

ll sp( ll a , ll p){

    ll b=p,cnt=0;
    while(a/b)cnt+=(a/b),b*=p;
    return cnt;
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
       ll cnt1=prime[p][0]*q ,cnt2=prime[p][1]*q;
       cnt1+=sp(n,2)-sp(r,2)-sp(n-r,2);
       cnt2+=sp(n,5)-sp(r,5)-sp(n-r,5);
       printf("Case %lld: %lld\n",cas,min( cnt1,cnt2));
  }

}





///author-joydip005x         ///
///Time&Date-Whenever i submit///
