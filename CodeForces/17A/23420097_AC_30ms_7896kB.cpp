#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 10000

#define pb push_back

vector <ll> prime,ans, prime2;
bool vis[sz];
ll a[1000][1000],n,m;
void seive(){

	memset(vis,false,sizeof(vis));
	prime.push_back(2);
	for( int i=4 ; i <sz ; i=i+2) vis[i]=true ;   
	for (int i = 3; i * i <= sz; i++) {
		if(vis[i] == 0){
			for (int j = i * i; j <= sz; j += 2 * i) {
				vis[j] = 1;
			}
		}
	}
	for (int i = 3; i <= sz; i += 2) {
		if(vis[i] == 0) {prime.push_back(i);}
	}
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/
    seive();
    cin>>n>>m;
    ll k=m;
    ll cnt=0;

    for(int i=0; i+1<prime.size() ; i++){
         prime2.pb( prime[i]+prime[i+1]);
    }
    sort(prime2.begin(),prime2.end() );

    for(int i=0 ; i<prime.size() && prime[i]<=n ; i++){

           ll x=prime[i]-1;
           if(binary_search(prime2.begin() , prime2.end() , x)) {
            cnt++;
          //  cout<<x<<" WOW "<<i<<endl;
        }

    }

    if(cnt>=k) cout<<"YES\n";
    else cout<<"NO\n";
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///