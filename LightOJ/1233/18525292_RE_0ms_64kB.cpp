///////////////////////////////////////////////////////////////
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

#define  sz                       100009
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
#define ll                       int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///

#define MOD 100000007
#define sz2 101
#define sz3 999999
ll  n,ans,m,c[sz2],u[sz2], w[sz3],use[sz2][sz3];
ll CChan(ll ind , ll mon, ll us)
{
    for(ll i=1 ; i<=n ; i++)
    {
        if(w[c[i]] == 0){
            w[c[i]]++;
            use[i][c[i]]++;
        }
        for(ll t=1; t<=m ; t++)
        {
            if(w[t+c[i]]){
                continue;
            }
            if(use[i][t]>=u[i]  ) continue;
            w[t+c[i]] += w[t];
            use[i][t+c[i]] = use[i][t] + 1;
        }
    }
    ret 1;
}
int main()
{
    ll te,x;
    o(te);
    for(ll tc=1 ; tc<=te ; tc++)
    {
        memset(w,0,sizeof w);memset(u,0,sizeof u);
        memset(c,0,sizeof c);memset(use,0,sizeof use);
        o(n);  o(m);
        ans=0;
        for(ll i=1 ; i<=n ; i++)   o(c[i]);
        for(ll i=1 ; i<=n ; i++)   o(u[i]);
        CChan(1,0,0);
        for(ll i=1 ; i<=m ; i++) {
            if( w[i]>=1 ) ans++;
        }
        printf("Case %d: %d\n",tc, ans);
    }
}

/*
2
3 10
1 2 4 2 1 1
2 5
1 4 2 1
*/
