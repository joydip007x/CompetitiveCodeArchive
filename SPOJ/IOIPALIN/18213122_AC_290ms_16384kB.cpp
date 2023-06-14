
#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define memo(a,b) memset(a,b,sizeof(a))
#define INF 1e9
#define EPS 1e-8
#define PI 3.14159265358979323846

typedef long long ll ;
typedef unsigned long long ull ;

/* int dx[] = {1,-1,0,0} , dy[] = {0,0,1,-1}; */ // 4 Direction
/* int dx[] = {1,-1,0,0,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1,1,-1}; */ // 8 Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1}; */ // Knight Direction
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1}; */ // Hexagonal Direction

int N ;
char A[5000+10] , B[5000+10];
int dp[2][5000+10] ;

int solve()
{
    int state = 0 ;
    for(int i=0;i<=N;i++)
    {
        for(int j=0;j<=N;j++)
        {
            if(i==0||j==0) dp[state][j]=0;
            else if(A[i-1]==B[j-1]) dp[state][j]=dp[state^1][j-1]+1;
            else dp[state][j]=max(dp[state][j-1] , dp[state^1][j] );
        }
        state^=1;
    }

    return N-dp[state^1][N] ;
}

int main()
{
///TESTING CODE :https://github.com/rajonaust/SPOJ/blob/master/IOIPALIN%20-%20Palindrome%202000
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    scanf("%d%s",&N,&A);

    strcpy(B,A);
    reverse(B,B+N);

    printf("%d\n",solve());
    return 0;
}
