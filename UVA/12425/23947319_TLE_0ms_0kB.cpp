#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl

ll  in() { ll a ; scanf("%lld",&a); return a; } 
 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,q;
ll phi(ll n) 
{ 
    ll result = n; 
    for (int p = 2; p * p <= n; ++p) { 
        if (n % p == 0) { 
            while (n % p == 0) n /= p; 
            result *= (1-(1/p)); 
        } 
    } 
    if (n > 1) result *= (1-(1/n)); 
    return result; 
} 
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/
     /////ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
   int t,cnt=0;
   scanf("%d",&t);
   while(t--){

        scanf("%lld %d",&n,&q);
        vector<ll>v,s;
        for(int i=1; i*i<=n; i++){
            
            if(n%i)continue;
            s.pb(i);
            if(i!=n/i) s.pb(n/i);
        }
        sort(begin(s), end(s));
        for(int i=0; i<s.size() ; i++)v.pb(phi(n/s[i])); 
        for(int i=1; i<v.size() ; i++)v[i]+=v[i-1];
         printf ( "Case %d\n", ++cnt );
        while(q--){
            
            int y;
            scanf("%d",&y);
            ll pos = upper_bound( begin(s), end(s), y)-s.begin();
            pos--;
            ll ans=0;
            if(pos>=v.size() )ans=n-1;
            if(pos>=0 && pos<v.size() )ans=v[pos];
             printf ( "%lld\n", ans);
        }

   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///