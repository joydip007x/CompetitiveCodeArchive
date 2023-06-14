#include<bits/stdc++.h>
#define pb push_back
#define mpr make_pair
#define mem(v,false) memset(v,false,sizeof(v))
#define f first
#define ss second
#define sf(n) scanf("%d",&n)
#define lli long long
#define debug(n) cout << n << endl;

using namespace std ;

pair<int,pair<int,int> >ar[1005];
int dp[1005][1005],par[1005];
int n;
int LIS(int i,int j)
{
    if(i==n )
        return 0;
    if(dp[i][j]!=-1)
        return dp[i][j];
    int x=0,y=0;
    if(ar[i].f>ar[j].f && ar[i].ss.f<ar[j].ss.f)
    {
        //par[ar[j].ss.ss] = ar[i].ss.ss;
        x=1+LIS(i+1,i);
    }
    y = LIS(i+1,j);
    return dp[i][j] = max(x,y);
}
void print(int i,int j)
{
    if(i==n)
    {
        return ;
    }
    int x=0,y=0;
    if(1+dp[i+1][i]==dp[i][j] && ar[i].f>ar[j].f && ar[i].ss.f<ar[j].ss.f)
    {
        cout << ar[i].ss.ss << endl; //<<" "<< ar[i].f << " " << ar[i].ss.f<< endl;
        print(i+1,i);
        return;
    }
    print(i+1,j);


}
int main()
{
    int i =1;
    while(cin >> ar[i].f)
    {
        cin >> ar[i].ss.f;
        ar[i].ss.ss = i;
        i++;
    }
    n=i;
    ar[0].f = INT_MIN;
    ar[0].ss.f = INT_MAX;
    sort(ar,ar+n);
    memset(dp,-1,sizeof(dp));
    mem(par,-1);
    int ans = LIS(1,0);
    cout << ans << endl;
    print(1,0);
    /*vector<int>v;
    for(int i=1;i<n;i++)
    {
        int st=i;
        while(par[st]!=-1)
        {
            v.pb(st);
            st = par[st];
        }
        v.pb(st);
        if(v.size()==ans)
        {
            break;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }*/
}
