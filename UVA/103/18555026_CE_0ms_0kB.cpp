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
ll n,k,x, dp[sz][sz], lmt, ori [sz ], ans;
vector<ll>v[  sz ];

multiset<pair<vector<ll >, ll> >S;
multiset<pair<vector<ll >, ll> >::iterator ip;
set<vector<ll>>SS;

bool ok(ll in1 , ll in2)
{

  for(ll i=0 ; i<v[ in1 ].size() ; i++)
    {
        if(v[in1][i]<=v[ in2][i])  ret 0;
    }
    ret 1;
}
ll LIS( ll a, ll b)
{
    if(a==n+1  ) ret 0;
    if(dp[a][b]!=-1) ret dp[a][b];
    int x=0,y=0;

    if(  ok(a,b) )   y=1+LIS(a+1, a);
    x=LIS(a+1,b);

    ret dp[a][b]=max(x,y);
}
void LISPRINT()
{
    ll pnt=0;
    for(  ll cur=1,las=0 ; cur<lmt ; cur++  )
    {
        if(  ok(cur,las)  and 1+dp[ cur+1 ][cur] >dp[cur+1][las]  )
        {
            printf("%d ",ori[cur] );

           las=cur;
           pnt++;
        }

}
int main()
{
   while( scanf("%d %d",&n,&k)!=EOF ){
   memset(dp,-1,sizeof dp);
   memset(ori,-1,sizeof ori);
   S.clear();SS.clear();
   loop(i,0,sz) v[i].clear();
   loop(i,0,n+1)
   {
    if(!i) {loop(j,0,k) v[i].pb(-100);    }
    else{loop(j,0,k)
    {
       o(x);v[i].pb(x);
    }
    }
     sort(all(v[i]) );
     S.insert( {v[i],  i  } );
   }
   loop(i,0,sz) v[i].clear();
   ll kk=0;
   for(ip=S.begin() ; ip!=S.end() ; ip++)
    {
        v[kk]=ip->fs;
        ori[kk]=ip->sc;
        ++kk;
    }
    S.clear();
   lmt=++n;
   printf("%d\n",ans=LIS(1,0)-1 );
    LISPRINT() ;
    eee;
   }
}