#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long
#define sz2 650
vector < ll > prime ;
bool vis[sz2+2];
ll x,y,ans1;
void seive (  )
{
    ll sz=500;
    memset(vis , false , sizeof(vis) );
    const ll SQ=sqrt(sz)+1;
    for(ll i=3 ; i<=sz ; i++)
    {
        if(!vis[i])
        {
            for(ll j=i*i ; j<=sz ; j=j+(2*i))
            {
                vis[j]=true;
            }
        }
    }
    prime.pb(2);
    for(ll i=3 ; i<=sz ; i=i+2)
    {
        if(!vis[i] ) prime.pb(i);
    }
}
ll corn( ll a , ll pp, ll val,ll i)
{
    if( pp>a  ) {   return val;
    }
    corn( a, pp*prime[i], val+(int)(a/pp) ,i );

}
int main(){

   seive();
   while(  scanf("%lld %lld",&x,&y)!=EOF){

       ans1=1LL;
       for(int i=0 ; prime[i]<=x ; i++)
       {
           ans1=ans1* ( corn(x,prime[i],0,i)- corn(y,prime[i],0,i ) -corn(x-y , prime[i],0,i) +1) ;
         ///  cout<< corn(x,prime[i],0)<<" - "<<corn(y,prime[i],0 )<<" - "<<corn(x-y , prime[i],0)+1<<endl;
       }
      printf("%lld\n",ans1);
   }

}
///author-joydip007x         ///
///Time&Date-Whenever i submit///
