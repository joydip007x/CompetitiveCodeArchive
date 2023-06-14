#include<bits/stdc++.h>
using namespace std;

///*/////////////////// /// *
/*//    author-joydip007x  ///  */
#define M 505
#define pb push_back
#define ll long long
#define  ret return
char sp=35;
ll n;
int main()
{
    ll x,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n); set<ll>s;
        for(ll o=1 ; o<=n; o++){scanf("%d",&x);s.insert(x);}
        printf("%d\n",s.size());
    }
}
/*

*/
