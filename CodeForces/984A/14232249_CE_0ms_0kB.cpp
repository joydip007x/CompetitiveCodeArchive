#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i,j,x,p,q;
    scanf("%d",&n);
    vector <int>g;
    for(i=0; i<n; i++)
    {
       scanf("%d",&x);
        g.push_back(x);
    }
    sort (g.begin(),g.end());
    ///for(auto i=g.begin(); i!=g.end() ;i++){cout<<*i <<" "  ;}
    p=((n+2)/2);
    q=((n+1)/2);
    if(n%2==1)
    {
        printf("%d",g[ n-q ]);
    }
    else
    {
        printf("%d",g[n-p ]);
    }
}