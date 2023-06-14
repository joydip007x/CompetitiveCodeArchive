
#include<bits/stdc++.h> 
using namespace std; 

#define ll long long 
#define int long long 
#define pb push_back

vector<int> capList[101]; 
int dp[35000][101]; 
int allmask,n,x,d,y,mx1; 

std::vector<ll> v;

ll countWaysUtil(int mask, int i, int mn, int mx, int tot) 
{ 
	
	if (mask == mx1) return (abs(mn-mx)<=d && tot>=x); 
	if (i > n) return 0; 
	if (dp[mask][i] != -1) return dp[mask][i]; 
	int ways =0; 
	if( (abs(mn-mx)<=d && tot>=x) && mask )ways++;
	for (int j = 0; j <n; j++) 
	{ 

		if (mask & (1 <<j)) continue; 
		else ways += countWaysUtil(mask | (1<<j), j+1,min(mn,v[j]),max(mx,v[j]),tot+v[j]); 
	} 
	return dp[mask][i] = ways; 
} 
int32_t main() 
{ 
      ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr);
	cin >> n>>x>>d;
	for(int i=0; i<n; i++){
		 cin>>y;
		 v.pb(y);
	} 
    mx1= (1LL<< n) - 1; 
	memset(dp, -1, sizeof dp); 
	cout << countWaysUtil(0, 0 , LLONG_MAX, LLONG_MIN,0) << endl; 
	return 0; 
} 
