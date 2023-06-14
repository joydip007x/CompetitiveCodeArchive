#include<bits/stdc++.h>
using namespace std;

#define  loop(i,L,U)        for( int i=(int)L;i<U;i++)
#define  loopeq(i,L,U)    for(int i=(int)L;i<=U;i++)
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

#define  sz                         9999
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%d",&c);
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
#define eee                         printf("\n");
#define ll                        int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return


#define sps printf(" ");
///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
ll n,k,x, dp[sz][sz], lmt , ori[sz] ,xxx;
vector<ll>v[  sz ];

set<pair<vector<ll >, ll> >S;
set<pair<vector<ll >, ll> >::iterator ip;
ll LIS( ll a, ll b)
{
    if(a>lmt || b>=lmt) ret 0;
    if(dp[a][b]!=-1) ret dp[a][b];
    int z=0,x=0,y=0;
    for(ll i=0 ; i<v[a].size() ; i++)
    {
        if(v[a][i]<=v[b][i]) {    z++;break;   }
    }
    if(!z)  y=1+LIS(a+1, a);
    x=LIS(a+1,b);

    ret dp[a][b]=max(x,y);
}
void LISPRINT()
{
    ll ptd=0;
    for(  ll cur=1,las=0 ; cur<lmt ; cur++  )
    {
        if(  1+dp[ cur+1 ][cur] >=dp[cur+1][las]  )
        {
           printf("%d ",ori[cur] );
           las=cur;
           ptd++;
        }
        if(ptd==xxx) break;
    }
}
int main()
{
   while( scanf("%d %d",&n,&k)!=EOF ){

   memset(dp,-1,sizeof dp);
   memset(ori,-1,sizeof ori);
   S.clear();
   loop(i,0,sz) v[i].clear();
    xxx=0;

   loop(i,0,n+1)
   {
    if(!i) {loop(j,0,k) v[i].pb(-10000);   /*S.insert( {v[i] , i} )*/  ; continue ;  }
    loop(j,0,k)
    {
       o(x);v[i].pb(x);
    }
    ///sort(all(v[i]) );
    S.insert({v[i] , i} );
   }
   ll i=1;
    for(ip=S.begin() ; ip!=S.end() ; ip++)
    {
//        printf("%d ",ip->sc);
        v[i]=ip->fs;
        ori[i]=ip->sc;
        i++;
    }
   lmt=n+1;
///   S.clear();
     xxx=LIS(1,0) ;
    printf("%d\n",xxx);
    LISPRINT() ;
//    for(ip=S.begin() ; ip!=S.end() ; ip++)
//    {
//        printf("%d ",ip->sc);
//    }
    eee;
   }
}
/*
5  2
3  7
8  10
5  2
9  11
21  18
8 6
5 2 20 1 30 10
23 15 7 9 11 3
40 50 34 24 14 4
9 10 11 12 13 14
31 4 18 8 27 17
44 32 13 19 41 19
1 2 3 4 5 6
80 37 47 18 21 9
3 1
3 1 1
*/
