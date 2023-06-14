#include "cstdio"
#include "iostream"
#include "cstring"
#include "map"
#include "vector"
#include "cstdlib"

using namespace std;
typedef long long LL;
const int maxn=105;
LL a[maxn];
map<LL,int> cnt;
vector<LL> v;
int n;
bool DFS(LL x,int c)
{
    bool res=false;
    if(c==n)
    {
        v.push_back(x);
        return true;
    }
    if(x%3==0&&cnt[x/3])
    {
        if(DFS(x/3,c+1))
            v.push_back(x),res=true;
    }
    if(cnt[x*2])
    {
        if(DFS(x*2,c+1))
            v.push_back(x),res=true;
    }
    return res;
}

int main()
{
    //freopen("input.txt","r",stdin);

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        if(DFS(a[i],1))
        {
            for(int i=n-1;i>=0;i--)
            {
                cout<<v[i];
                if(i==0)
                    cout<<endl;
                else
                    cout<<' ';
            }
            return 0;
        }
    }
    return 0;
}

---------------------

//本文来自 青龙指引你 的CSDN 博客 ，全文地址请点击：https://blog.csdn.net/xp731574722///////article/details/80220329?utm_source=copy 