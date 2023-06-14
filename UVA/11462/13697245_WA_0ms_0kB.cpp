#include<bits/stdc++.h>
#define pb push_back
using namespace std;
vector<int>h;
int main()
{
    int n,j,k,temp,z,i,x;
   while(scanf("%d",&x) && x!=0)
    {
        for(i=0; i<x; i++)
        {
            cin>>z;
            h.pb(z);
        }
        sort(h.begin(),h.end());
        for(i=0; i<x; i++)
        {
            printf("%d ",h[i]);
        }
    }
}
