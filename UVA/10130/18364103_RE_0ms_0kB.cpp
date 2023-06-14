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

#define  sz                         2002
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
ll n,o,g, p[sz] , w[sz] ,mw=0 ,we[sz] , dp[sz][sz];
long long int sum=0;
ll knapsx(ll no, ll wim)
{
    for(ll i=0; i<=no ;i ++)
    {
        for(ll j=0; j <=wim ; j++)
        {
            if(!i || !j) dp[i][j]=0;
            else if( w[i] > j  ) dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max( dp[i-1][j] , dp[i-1][ j-w[i] ] +p[i]   );
        }
    }
}
int main()
{
    o(n);
    while(n--){
         o(o);
         memset(dp,0,sizeof dp); mw=0;
         memset(we,0,sizeof we);memset(p,0,sizeof we);
         memset(w,0,sizeof we);
         for(ll i=1; i<=o ; i++) { o(p[i]); o(w[i]) ;   }
         o(g);
         for(ll i=1 ; i<=g ; i++) { o(we[i]) ;mw=max(mw,we[i]) ;}
         knapsx( o  , mw);
         sum=0LL;
         ///cout<<" DONT GIVE UP BITCH \n" ;
         for(ll i=1; i<=g; i++)
         {
             sum =sum+  dp[o][ we[i] ];
         }
         printf("%lld\n",sum);
    }
}
/*
2
3
72 17
44 23
31 24
1
26
6
64 26
85 22
52 4
99 18
39 13
54 9
4
23
20
20
26
*/
