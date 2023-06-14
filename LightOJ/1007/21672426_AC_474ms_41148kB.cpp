#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll  long long
#define dbg puts("Viva la vida")
#define CHECK(x) cout << (#x) << " is " << (x) << endl;
#define endl printf("\n")
typedef map<int,int> mii;
typedef map<string,int> msi;
typedef pair<int,int> pii;
typedef vector <int> VI;
typedef vector<ll> VL;
typedef set<int> SI;
#define mp make_pair
#define pb push_back
#define in(x) scanf("%lld",&x)
#define Lin(x) scanf("%lld",&x)
#define out(x) printf("%d",x)
#define Lout(x) printf("%lld",x)
#define sps printf(" ")
#define X first
#define Y second
#define SZ(_a) (int)_a.size()
#define EPS 1e-9
#define PI acos(-1.0)
#define MAX 5000009
#define MOD 1000000007
#define INF 1<<32
#define dou(x) cout<<fixed<<setprecision(6)<<x
unsigned long long pi[MAX];
void phi()
{
    ll i,j;
    for(i=2; i<MAX;i++)
    {
        if(pi[i]==0)
        {
            pi[i]=i-1;
            for(j=i*2;j<MAX; j+=i)
            {
                if(pi[j]==0) pi[j]=j;
                pi[j]-=(pi[j]/i);
            }
        }
    }
}
int main()
{
    phi();
    ll i,j,t,a,b;
    unsigned long long  sum=0;
    for(i=2; i<=MAX; i++)
    {
        sum+=(pi[i]*pi[i]);
        pi[i]=sum;
    }
    j=1;
    in(t);
    while(t--)
    {
        in(a);
        in(b);
        printf("Case %lld: ",j++);
        sum=pi[b]-pi[a-1];
        printf("%llu",sum);
        endl;
    }
    return 0;
}
