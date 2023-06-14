#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define pb push_back

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
    
   int t,cnt=0;
   scanf("%d",&t);
   while(t--){

        scanf("%lld",&n);
        vector<ll>v,s;
        for(int i=1; i*i<=n; i++){
            
            if(n%i)continue;
            s.pb(i);
            if(i!=n/i) s.pb(n/i);
        }
        sort(begin(s), end(s));
        for(int i=0; i<(ll)s.size() ; i++)v.pb(phi(n/s[i])); 
        for(int i=1; i<(ll)v.size() ; i++)v[i]+=v[i-1];
        printf ( "Case %d\n", ++cnt );
        scanf("%d",&q);
        while(q>0){
            
            ll y;
            scanf("%lld",&y);
            ll pos = upper_bound(s.begin(),s.end(),y)-s.begin();
            --pos;
            ll ans=0;
            if(pos>v.size()-1 )ans=n-1;
            if(pos>=0 && pos<v.size() )ans=v[pos];
            printf ( "%lld\n", ans);
            --q;
        }


   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///