#include<iostream>
#include<algorithm>
#define pb push_back
using namespace std;

int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    vector <int>g;
    for(i=1; i<n; i++)
    {
       scanf("%d",&x);
        g.pb(x);
    }
    sort (g.begin(),g.end());
    if(n%2==0)
    {
        printf("%d",g[(n/2)+1]);
    }
    else
    {
        printf("%d",g[n/2]);
    }
}
