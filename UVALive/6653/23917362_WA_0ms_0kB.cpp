#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const ll mod = 10000000000007;
ll n,x,m,l,t,y;
vector<ll>v ;
string s;
ll  fact[110*112]; 
ll per(ll n) 
{ 
    fact[0] = 1; 
    for (int i = 1; i <= n; i++)  {fact[i] = i * fact[i - 1];
               
                fact[i]=(fact[i]+mod)%mod;

     }
    return 1;
} 

int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

     /*   ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

     per(110*111);
     cin>>t;
     ll cnt=0,ans=0;
     while(t--){

     	 cin>>l>>m>>n;
         ans=0;
     	 l=l*l;
     	 for(int i=m; i<=n; i++){

     	 	  y=fact[l] / fact[l-i];
     	 	 ans+=y;
     	 	 ans=(ans+mod)%mod; 
     	 }
     	 cout<<"Case "<<++cnt<<": "<<ans<<endl;
     }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///