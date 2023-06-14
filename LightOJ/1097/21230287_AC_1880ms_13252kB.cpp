#include <bits/stdc++.h>
using namespace std;

const int MX = 1429432;
int tree[MX], Ans[MX];


void update(int x, int delta){ 
	for(; x < MX ; tree[x] += delta, x += x & -x); 
}

int query(int x){
	int sum = 0;
	for(; x > 0 ; sum += tree[x], x -= x & -x);
	return sum;
}

int kth(int x){
	int lo = 0, hi = MX, mid;
	for(; hi - lo > 1 ;){
		mid = (lo + hi) >> 1;
		int k = query(mid);
		(k >= x) ? hi = mid : lo = mid;
	}
	return hi;
}

void pre_process(){
	int cnt = 1;
	for(int i = 1; i < MX; update(i, 1), i += 2);
    Ans[0] = 1;
	for(int i = 2; i < MX; i++){
		int num = kth(i);
		Ans[cnt++] = num;

		int del = 0;
		for(int j = num; j < MX; j += num){
			int val = kth(j - del);
			update(val, -1);
			del++;
		}
	}
}

int main() {
	pre_process();
	int t, n;
	
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		scanf("%d", &n);
		printf("Case %d: %d\n", i, Ans[n - 1]);
	}
	return 0;
}