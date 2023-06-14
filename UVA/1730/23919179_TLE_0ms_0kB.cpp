#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int sz = 20000001+100;
const int mod = 1e9 + 7;
ll n,x;
vector<ll>v ;
string s;
vector <ll> prime;
bool sv[sz+100];
ll money[sz+100];
void seive(){

	memset(sv,false,sizeof(sv));
	prime.push_back(2);
	for( int i=4 ; i <sz ; i=i+2) sv[i]=1 ;   
	for (int i = 3; i * i <= sz; i++) {
		if(sv[i] == 0) {
			for (int j = i * i; j <= sz; j += 2 * i) 
			{
				sv[j] = 1;
			}
		}
	}
	for (int i = 3; i <= sz; i += 2) {
		if(sv[i] == 0) {prime.push_back(i);   }
    }
}
ll  sumofFactors(ll n) 
{ 

	///cout<<n<<" "<<endl;
    ll res = 1, ff=n; 
    for (int i = 0; i<prime.size() && prime[i]*prime[i]<=n; i++) { 
        int curr_sum = 1; 
        int curr_term = 1;
        int wow=prime[i];
        while (n % wow == 0) { 
            n = n / wow; 
            curr_term *= wow; 
            curr_sum += curr_term; 
        } 
        res *= curr_sum; 
    } 
    if (n >= 2)   res*= (1 + n); 
  ///  money[ff]=res;
    return res; 
} 
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

    seive();
   /// money[2]=3;
   
    while( scanf("%lld",&n)&& n ){

         ll ans=0;
    	 for(int i=2;  i<=n;i++){
               ans+=sumofFactors(i);
    	      //// money[i]+=money[i-1];
        }
           printf("%lld\n",ans);
    }

   
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///