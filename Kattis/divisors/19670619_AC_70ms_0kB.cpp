#include <bits/stdc++.h>

using namespace std;

const int N = 5005;
vector < int > fact[N];

void solve(int u) {
	int curr = u;
	for(int i = 2 ; i*i <= u ; ++i) {
		if(u % i == 0) {
			while(u % i == 0) {
				fact[curr].push_back(i);
				u /= i;
			}
		}
	}
	if(u != 1) {
		fact[curr].push_back(u);
	}
}

int ara[N];

int main() {
    std :: ios :: sync_with_stdio(false);
    cin.tie(0);
	for(int i = 2 ; i < N ; ++i) {
		solve(i);
	}
	int n, r;
	for( ; (cin >> n >> r) ; ) {
		
		for(int i = 1 ; i <= 5000 ; ++i) {
			ara[i] = 0;
		}
		for(int i = n ; i >= (n - r + 1) ; --i) {
			for(int p : fact[i]) {
				ara[p]++;
			}
		}
		for(int i = r ; i > 1 ; --i) {
			for(int p : fact[i]) {
				ara[p]--;
			}
		}
		long long ans = 1;
		for(int i = n ; i > 1 ; --i) {
			if(ara[i]) {
				ans *= 1LL * (ara[i] + 1);
			}
		}
		cout << ans << endl;
	}
	return 0;
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///