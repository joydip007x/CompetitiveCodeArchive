#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 200009
ll n,x ,m,ans=0LL ;
vector<ll> adj [sz] ;
vector<bool> visited;
vector<ll> tin, low;
ll timer;
void dfs(ll a,ll b) {

   ll start=1;
   while(b>0){
    b=b-start;
    if(start==1) ans=ans-2;
    else ans=ans-1 ;
    ++start;
   /// cout<<"WOW MFKIN RUNS\n";
   }

}
int main()
{
    ll t;
   scanf("%lld",&t);
   while(t--)
   {
       scanf("%lld %lld",&n,&m);
      if(m<n){ printf("%lld\n",m);continue;}
      m=m-n+1;
      ans=n-1;
      dfs(n,m);
      printf("%lld\n",max(0LL,ans)) ;
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
