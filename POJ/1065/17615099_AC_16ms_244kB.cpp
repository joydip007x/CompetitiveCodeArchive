///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<iostream>
#include<algorithm>

using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  ll long long
#define  o(c)                     scanf("%lld",&c);


#define  fs                       first
#define  sc                      second

ll x,cmp,ans,vis[5999],n;
pair<ll,ll>p[5999];
int main()
{
    scanf("%lld",&x);
    while(x--)
    {
        o(n);ans=0LL;
        loopeq(i,1,n)
        {
            o(p[i].fs);
            o(p[i].sc);
            vis[i]=false;
        }
        sort(p,p+n+1);
        loopeq(i,1,n)
        {
            if(vis[i]) continue;
            vis[i]=true;
            ans++;
            cmp=p[i].sc;
            loopeq(j,1,n)
            {
              if(!vis[j] and cmp<=p[j].sc )   vis[j]=true,  cmp=p[j].sc;

            }
        }
        printf("%lld\n",ans);
    }
}
