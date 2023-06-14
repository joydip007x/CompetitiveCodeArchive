#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N =(100*100)+100;
const ll mod = 10000000000007;
ll n,x,m,l,t,y,z,p;
vector<ll>v ;
string s;
ll  fact[N+10000], mi[N+10000]; 
ll per(ll n) 
{ 
    fact[0] = 1; 

    for (int i = 1; i <= n; i++)  {

    	fact[i] = (i*fact[i-1])%mod;
        fact[i]=(fact[i]+mod)%mod;
        mi[i]=(modInv(fact[i],mod)+mod)%mod;
     }
    return 1;
} 
ll Powx(ll a,ll n,ll M){
    if (!n) return 1;
    ll x=Powx(a,n/2,M);
    x=(x*x)%M;
    return (n&1)? (x*a)%M : x;
}
ll modInv(ll n,ll M){return Powx(n,M-2,M);}

int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

        ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
     per(N);
     cin>>t;
     ll cnt=0,ans=0;
     while(t--){

     	 cin>>l>>m>>n;
         ans=0;
     	 l=l*l;
     	 for(int i=m; i<=n; i++){

     	 	 y=(fact[l]%mod);
     	 	 z=mi[l-i]%mod;
     	 	 p=((y*z))%mod;
     	 	 ans=(ans+p)%mod; 
     	 }
     	 cout<<"Case "<<++cnt<<": "<<(ans+mod)%mod<<endl;
     }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///