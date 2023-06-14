#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<map>
#include<set>
#include<ctime>
using namespace std;
typedef long long ll;
#define INF 0x3f3f3f3f
#define maxn 1111
ll extend_gcd(ll a,ll b,ll &x,ll &y)
{ 
    ll d=a;
    if(b)d=extend_gcd(b,a%b,y,x),y-=(a/b)*x;
    else x=1,y=0;
    return d;
}
ll T,n,n1,n2,c1,c2;
bool linear(ll a,ll b,ll c)//求解一元线性同余方程ax=b(mod c)
{
    ll x,y;
    ll g=extend_gcd(a,c,x,y);
    if(b%g)return 0;
    x=x*(b/g);
    int mod=c/g;
  
    if(y<0)return 0;

    y=y*(b/g);
    ll ans=c1*x+c2*y,ansx=x,ansy=y;
    for(int i=1;i<mod;i++)
    {
        x+=mod,y-=a/g;
        if(y<0)break;
        if(c1*x+c2*y<ans)
            ans=c1*x+c2*y,ansx=x,ansy=y;
    }
    printf("%I64d %I64d\n",ansx,ansy);
    return 1;
}
int main()
{
    while(~scanf("%I64d",&n),n)
    {
        scanf("%I64d%I64d%I64d%I64d",&c1,&n1,&c2,&n2);
        if(!linear(n1,n,n2))printf("failed\n");
    }
    return 0;
}
————————————————
版权声明：本文为CSDN博主「v5zsq」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/V5ZSQ/article/details/62423055