#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long

int n;
ll a,x,odd;
ll raisepow(ll a)
{
    ll rett=1, bas=2;
    while(a)
    {
        if(a&1) rett=bas*rett;
        a=a>>1;
        bas=bas*bas;
        ///cout<<rett<<" : \n";
    }
    return rett;
}
int main()
{
   scanf("%d",&n);
   while(n--)
   {
       scanf("%lld",&x);
       a=__builtin_popcountll(x);
       odd=raisepow(a);
       printf("%lld %lld\n",x+1-odd,odd);
   }

}

///author-joydip007x         ///
///Time&Date-Whenever i submit///
