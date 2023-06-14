#include<bits/stdc++.h>
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

#define  sz                         1000000
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
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
#define ll                        int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
pair< ll, pair< ll, ll > >p[sz] ,qu;
ll ori[10009] ,w,q, lmt,dp[1009][1009], fori[10009];
vector<ll>v;
ll LIS(ll las, ll cu)
{
    if(cu==lmt) ret 0;
    if ( dp[las][cu]!=-1)  ret dp[las][cu];
    if( p[cu].sc.fs < p[las].sc.fs  and p[cu].fs>p[las].fs ) ret dp[las][cu]=max( 1+LIS(cu,cu+1) , LIS(las,cu+1)   );
    ret dp[las][cu]=LIS(las,cu+1);
}
bool cmo( const pair< ll, pair< ll, ll > >A , const pair< ll, pair< ll, ll > >B )
{
    if( A.fs==B.fs  ) ret  A.sc.fs>B.sc.fs;
    ret A.fs<B.fs;
}
int main()
{
    ll i=1; memset(dp,-1,sizeof dp);
    while( scanf("%d %d",&w,&q)!=EOF)
    {
        p[i]={  w, { q,i }    };
        i++;
    }
    sort(p+1 , p+i ,cmo);
    lmt=i;
    p[0]={  0  , { 9999999,0 } };
    printf("%d\n",LIS(0,1 ));
    for(ll las=0, cur=1 ; cur<i; cur++)
    {
        if( 1+dp[cur][cur+1] > dp[las][cur+1] and p[las].fs<p[cur].fs   )
        {
            printf("%d\n",p[cur].sc.sc);
            las=cur;
        }
    }

}
/*
6008 1300
6000 2100
500 2000
1000 4000
1100 3000
6000 2000
8000 1400
6000 1200
2000 1900
*/
