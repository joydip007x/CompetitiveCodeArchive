#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,x,y;
pair<pair<int ,int>,int> p[9*10009];
int main()
{
    int cas;
    scanf("%d",&cas);
    while(cas--)
    {
        scanf("%d",&n);
        for(int i=0; i<3*n; i++)
        {
            scanf("%d%d",&x,&y);
            p[i]={{x,y},i};
        }
        sort(p,p+3*n);
        for(int i=0; i<n; i++)
            printf("%d %d %d\n",p[3*i].second+1,p[3*i+1].second+1,p[3*i+2].second+1);
    }
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///
