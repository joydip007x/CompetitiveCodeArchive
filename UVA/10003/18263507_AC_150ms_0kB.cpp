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

#define  sz                         59
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
#define eee                     printf("\n");
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
ll n,x,c[sz],dp[sz][sz],lmt;
ll reorder( ll a, ll e)
{
    if(a+1==e ) ret 0;
    if(dp[a][e]!=INT_MAX) ret dp[a][e];
    for(ll i=a+1 ;  i<=e-1 ; i++)
    {
        dp[a][e]= min( dp[a][e] ,reorder(a,i)+reorder(i,e) + abs( c[a]-c[e] ) );
    }
    ret dp[a][e];
}
int main()
{
     bool f=0;
     while(3!=5 )
     {
         //if(f) eee;
         o(n); ///memset(dp,-1,sizeof dp);
         for(ll i=0 ; i<=sz ; i++) for(ll j=0 ; j<=sz; j++) dp[i][j]=INT_MAX;
         memset(c,0,sizeof c);
         if(!n) break;
         o(x);
         for(ll i=1 ; i<=x ; i++)
         {
             scanf("%d",&c[i]);
         }
         c[0]=0; c[x+1]=n;
         lmt=n;
         printf("The minimum cutting is %d.\n",reorder(0,x+1));
         f=1;
     }
}
/*
10
4
4 5 7 8
*/
