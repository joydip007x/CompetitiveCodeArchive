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
ll n,o,g, p[sz] ,mw=0 ,wx;
long long int sum=0;
vector<int>v;
ll knapsx(   )
{
    ll a,b;a=b=0;
    if(v.size()==2) ret abs(v.front()-v.back());
    for(ll i=0 ; i<v.size() ; i++)
    {
        if(i%2)
        {
            b=b+v[i] +v.back() ;
            v.pop_back();
            continue;
        }
        a=a+v[i] +v.back() ;
        v.pop_back();
    }
    ret abs(a-b);
}
int main()
{
    o(n);
    while(n--){

        o(o);wx=0;
        for(ll i=1; i<=o ; i++) { o(mw) ; v.pb(mw);    }
        sort(v.begin() , v.end() );
        if(o&1)
        {
            reverse(v.begin(), v.end() );
             wx=v.back();
            v.pop_back();
            reverse(v.begin(), v.end() );
        }
        sum=knapsx();
        if(!sum) { printf("%d\n",wx); continue; }
         printf("%lld\n",sum-wx);
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
