#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 200009
ll n,x ,m,ans=0 ;
vector<ll> adj [sz] ;
vector<bool> visited;
vector<ll> tin, low;
ll timer;
void dfs(ll a,ll b) {

   ll start=0;
   while(b){

    if(!start) ans-=2, ++start ,--b;
    else --ans,--b;
   }

}
int main()
{
    int t;
   scanf("%d",&t);
   while(t--)
   {
       scanf("%d %d",&n,&m);
      if(m<n){ printf("%d\n",m);continue;}
      m=min( n-1+n-2,m-n+1);
      ans=n-1;
      dfs(n,m);
      printf("%d\n",max(0LL,ans)) ;
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
