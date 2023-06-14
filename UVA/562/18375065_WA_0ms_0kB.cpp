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

#define  sz                         98889
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
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return


#define sz2 105
///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
ll n,o,mw=0 ,wx,als, dp[sz] , lmt;
vector<ll>v;

ll  remains(ll tk)
{
    ret abs(als-tk);
}
ll knapsx( ll ind, ll p1  )
{
    if(ind>o) ret  abs(p1-remains(p1));
    if(dp[p1] !=-1 ) ret dp[p1];
    ll x,y,x1,y1;  x=y=x1=y1=0;
    x=p1+v[ind];
    x1=knapsx(ind+1, x);
    y1=knapsx(ind+1, p1);
    ret dp[p1]=min( { x1,y1   } );
}
int main()
{
   o(n);
    while(n--){
        v.clear();
        o(o);
        wx=als=mw=0LL;
        v.pb(0LL);
        memset(dp,-1,sizeof dp);
        for(ll i=1; i<=o ; i++) { o(mw) ;  v.pb(mw);als+=mw;    }
        lmt=v.size();
        printf("%lld\n",knapsx( 1,0 ));
    }
    ret 0;
}
/*
2
4
1 2 4 6
3
2 3 5
8
3 3 3 9 3 3 9 3
*/
