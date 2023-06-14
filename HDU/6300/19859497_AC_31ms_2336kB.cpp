#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int n,x,y;
pair<pair<int ,int>,int> v[5*10009];
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
            v[i]={{x,y},i};
        }
        sort(v,v+3*n);
        for(int i=0; i<n; i++)
            printf("%d %d %d\n",v[3*i].second+1,v[3*i+1].second+1,v[3*i+2].second+1);
    }
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///
