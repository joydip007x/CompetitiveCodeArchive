#include <bits/stdc++.h>

#define endl '\n'
#define left jhghajkhja
#define right oauighgajk
#define prev aioghajga
#define next ioyhjhfajasj
#define y0 iuadoghasdgj
#define y1 taklahgjkla
#define remainder pogjuakllhga
#define pow pajklgaklha
#define pow10 iopuioadjlgkah
#define div aljghajkghak
#define distance gkuftgjasgfjh
#define uppercase ifyhasjkhakjfas
#define count sajhfkajfa

//#define floor hjakjhaja
//#define time ashjlahjka
//#define double_t double
//#define tm kahjflahaajk

using namespace std;

const int TO = 1429431;

int n;
int it[1500000];

void update(int pos, int val) {
	for(;pos<=TO;pos+=pos&(-pos)) it[pos]+=val;
}

int query(int pos) {
	int ans=0;
	for(;pos>=1;pos-=pos&(-pos)) ans+=it[pos];
	return ans;
}

int size() {
	return query(TO);
}

int kth(int k) {
	int left=0,right=TO,middle;
	while(right-left>1) {
		middle=(left+right)>>1;
		if(query(middle)>=k) right=middle;
		else left=middle;
	}
	return right;
}

void preprocess() {
	int i,j,curr=2,sz;
	vector < int > v;
	for(i=1;i<=TO;i=i+2) update(i,1);
	for(i=3;curr<=(sz=size());i+=2) {
		v.clear();
		for(j=curr;j<=sz;j+=curr) v.push_back(kth(j));
		for(j=0;j<(int)(v.size());j++) update(v[j],(-1));
		curr=kth(i);
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("test.txt","r",stdin);
	//freopen("IN.c_str()","r",stdin);
	//freopen("OUT.c_str()","w",stdin);
	int tests,current_case;
	
	preprocess();
	scanf("%d", &tests);
	for(current_case=1;current_case<=tests;current_case++) {
		scanf("%d", &n);
		printf("Case %d: %d\n", current_case, kth(n));
	}
	
	//fprintf(stderr, "Time: %d ms\n", (int)(clock()*1000.0/CLOCKS_PER_SEC));
	
	return 0;
}
