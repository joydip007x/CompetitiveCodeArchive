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
ll n,k,t,a[25] ,st,en,ans=0;

ll chk(ll p)
{
    ////ll nobit=log2(p);
    //cout<<p<<" :::::::::::::: \n ";
    ll rett=0, cnt=0;
    for(ll i=0 ; i<n ; i++)
    {
        if( (p>>i) &1   ) rett=rett^a[i];
    }
    ret rett;
}
int main()
{
    o(t);
    while(t--)
    {
        ans=0;
        memset(a,0,sizeof a) ;
        o(n); o(k);
        for(ll i=0 ; i!=n ; i++)  o(a[i]);
     
        ///cout<<" st "<<st<<" en "<<en<<endl;
        for( ll i=0 ; i<(1<<n); i++  )
        {
            if (  __builtin_popcount (i) !=k ) continue;
             ans=max(  ans, chk(i)    );
        }
        printf("%d\n",ans);
    }

}
