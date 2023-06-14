#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 #define int ll 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t;
 vector<ll> v;
  map<ll,ll>m;

  string s;
  queue<ll>R,D,q;
void primeFactors(int n) 
{ 
    while (n%2 == 0) 
    { 
        v.pb(2);
        n = n/2; 
    }
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            v.pb(i);
            n = n/i; 
        } 
    } 
    if (n > 2) v.pb(n);
} 
int32_t main()
{
   // freopen("input.txt", "r+", stdin);
   /// freopen("output.txt", "w+", stdout);

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr);

    cin>>t;
    cin>>s;

    ll mod=t;

    for(int i=0; i<t; i++) {

    	if(s[i]=='D') D.push(i);
        else R.push(i);
    }

    while(  D.size() && R.size() ){

        ll a=D.front();D.pop();
        ll b=R.front(); R.pop();
        ll c=(a<b);

        if(c)D.push(a+mod);
        else R.push(b+mod);
    }

    if(!R.size() ) cout<<"D\n";
    else cout<<"R\n";

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///