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

#define  sz                         520
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
ll n,o,g, p[sz] ,mw=0 ,wx,als, dp[sz][sz][sz] , lmt;
 int sum=0;
vector<int>v;
ll knapsx( ll ind, ll p1, ll p2  )
{
    if(ind>lmt) ret  abs(p1-p2);
    if(dp[ind][p1][p2] !=-1 ) ret dp[ind][p1][p2];
    ll x,y,x1,y1,z1,z;
    x=y=x1=y1=z=z1=0;
    x=p1+v[ind];
    y=p2-v[ind];
    x1=knapsx(ind+1, x, y);
    y1=knapsx(ind+1, p1, p2);
    ret dp[ind][p1][p2]=min( { x1,y1   } );
}
int main()
{
    o(n);
    while(n--){

        v.clear();
        o(o);
        wx=als=sum=mw=0;
        v.pb(0);
        memset(dp,-1,sizeof dp);
        for(ll i=1; i<=o ; i++) { o(mw) ; v.pb(mw);    }
       /// for(auto it:v) cout<<it<<" ";eee;
        als=accumulate(v.begin(),v.end() ,0);
       //// cout<<"ALLSUM= "<<als<<endl;
        lmt=v.size();
        sum=knapsx( 1,0,als );
        printf("%d\n",sum);
    }
}
/*
2
4
1 2 4 6
3
2 3 5
*/
