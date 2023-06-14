///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>
using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         19900
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  ot(c1,c2)                     scanf("%lld %lld",&c1,&c2);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)
#define TEST_CASE(t)      for(ll int z=1;z<=t;z++)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9
#define  inf                     0x7fffffff

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

#define mod 1000000007

ll n,k,wals[sz],wale[sz],rx=mod , ex=0LL,curmax=0LL, score, index,
out=0LL,x1,y1,x2,y2 , osum=0LL,removewal,t;
ll procesthewall(ll i)
{
    ll rett=0LL;
    loop(c,0,n)
    {
        if ( wals[c]<=i and wale[c]>=i  ) rett++;
    }
    ret rett;
}
void pre()
{
    memset(wale,-1,sizeof wale);
    memset(wals,-1,sizeof wals);
    rx=inf , ex=-1LL,curmax=-1LL,
    out=0LL, osum=-1LL;
}
int main()
{
  o(t);
  while(t--)
  {
       //// pre();
        ot(n,k);
        loop(i,0,n)
        {
            scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
            if(x1>x2) swap(x1,x2);
            wals[i]=x1;
            wale[i]=x2;
            rx=min(rx,x1);
            ex=max(ex,x2);
        }
        loopeq(i,rx,ex)
        {
            curmax=0;
            curmax=procesthewall(i);
            if(curmax-k<=0) continue;
            while(curmax!=k)
            {
                score=-1LL;
                index=-1LL;
                curmax--;
                loop(c,0,n)
                {
                    if ( wals[c]<=i and wale[c]>=i  and score<wale[c] )
                                    index=c , score=wale[c];
                }
                wale[index]=wals[index]=-1;
                out++;
            }
        }
        printf("%lld\n",out); out=0LL;
  }

}
