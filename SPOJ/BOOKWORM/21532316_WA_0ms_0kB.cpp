/*   --------------------
    |       MAGIC        |
    |       ~KIRI~       |
     --------------------
*/
#include <bits/stdc++.h>
#define inl(x) scanf("%lld",&x)
#define in(x) scanf("%d",&x)
#define ll long long
#define mp(x,y) make_pair(x,y)
#define mxx 100000000000000000
#define M  100005
#define pi 2*acos(0.0)
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
ll N,page,p,x,B;
ll facto[M+121] ;
ll P = 1000000007;
//ll mm[105];
vector<ll> v;
ll ans=0;
ll bigmod(ll n ,ll k, ll p)
{
    if(k==0) return 1%p;
    ll x = bigmod(n,k/2,p);
    x%=p;
    x = (x*x)%p;
    if(k&1) x*=n,x%=p;
    return x%p;
}
void pre()
{
    facto[0] = 1;
    for(ll i=1;i<=M;i++)
    {
        facto[i] = (facto[i-1]*i)%P;
    }
}
ll inv( ll a){

  return  bigmod( a,P-2,P)%P;

}
ll nCr(ll n,ll r)
{
    ll a = facto[n]%P;
    ll b = inv(r)%P;
    ll c = inv(n-r)%P;
    ll S = (a*b)%P;
    S = (S*c)%P;
    return S%P;
}
int main()
{
    int T;
    in(T);
    pre();
    int c=0;
    for(int t=1;t<=T;t++)
    {
        inl(N);
         ans=0;
        inl(B);
        c =0;
        vector<ll>bb;
        unordered_map<ll,ll>mu,mm;

        for(int i=0;i<N;i++)
        {
            inl(page);
            inl(x);
            if(x==1  ){
                mm[page]++;
                c++;
                bb.push_back(page);
            }
        }
        if(c<B)
        {
            puts("0");
            continue;
        }
        ans=0;
        sort(bb.begin(),bb.end() ,greater<ll>() );
        for(int i=0 ; i<B ; i++){
              mu[ bb[i] ]++;
        }
        for(auto it:mu )
        {
            ans=ans+ nCr(  mm[it.first] ,it.second );
            ans=ans%P;
        }
        printf("%lld\n",ans);
    }
    return 0;
}
