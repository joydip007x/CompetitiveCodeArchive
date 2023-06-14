#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 100000+1000

#define pb push_back

vector <ll> prime,ans;
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

    for(int i=0; i<n ; i++){
         
         ll cnt=0;
    	 for(int j=0; j<m; j++){

    	 	   cin>>a[i][j];

    	 	   ll x=*lower_bound( prime.begin() , prime.end() , a[i][j]);
    	 	   cnt+=( x-a[i][j]);
    	 	   //cout<<ans.back()<<" :) \n";
    	 }
    	 ans.pb(cnt);
    }

    for(int j=0; j<m ; j++){
         ll cnt=0;
    	  for(int i=0; i<n; i++){
                
               ll x=*lower_bound( prime.begin() , prime.end() , a[i][j]);
    	 	   cnt+=( x-a[i][j]);
    	  }
    	 ans.pb(cnt);
    }
    cout<<*min_element(ans.begin(),ans.end())<<endl;

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///