#include<bits/stdc++.h>
using namespace std;
int n ,s,x,sum,cc;
#define ll int
int LCS(  )
{


    return 0;
}
int main()
{
    int t;scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {
        sum=cc=0;
        scanf("\n%d",&n);
        for (ll j=1;j<=n  ;j++)
        {
            scanf( "%d",&x);
            if(x>=0) cc++;
            sum=sum+abs(x);
        }

        ll gc=__gcd(  sum,cc );
        ll b=sum/gc;
        if(!cc){ printf("Case %d: inf\n",i  );}
        else printf("Case %d: %d/%d\n",i,b,cc/gcd  );
    }
}
