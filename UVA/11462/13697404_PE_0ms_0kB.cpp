#include<vector>
#include<iostream>
#include<algorithm>
#include<cstdio>
#define pb push_back
using namespace std;
int main()
{
    int n,j,k,temp,z,i,x;
    while(scanf("%d",&x) && x!=0)
    {
        vector<int>h;
        for(i=0; i<x; i++)
        {
            cin>>z;
            h.pb(z);
        }
        sort(h.begin(),h.end());
        for(i=0; i<h.size(); i++)
        {
            printf("%d ",h[i]);

        }
        puts("");
    }
}
