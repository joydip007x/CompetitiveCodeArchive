///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

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

#define  sz                         1010
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

ll q,L,lmt,x,y,s=0,p[sz],w[sz],dp[sz][sz];

ll dpx()
{
    for(ll i=0 ; i<=L ; i++)
    {
        for(ll j=0 ; j<=lmt ; j++)
        {
            if(!i || !j) dp[i][j]=0;
            else if( w[i]>j ) dp[i][j]=dp[i-1][j];
            else  dp[i][j]=max(dp[i-1][j] , w[i]+dp[i-1][j-w[i]]);
        }
    }
    ret dp[L][lmt];
}
int main()
{
    cin>>q;
    loop(i,0,q)
    {
        cin>>L>>lmt;
        loop(j,1,L+1)
        {
            cin>>x;
            s=0;
            loop(kb,0,x)
            {
                cin>>y;
                 s=s+y;
            }
            w[j]=s;
        }
        loop(z1,0,sz)loop(z2,0,sz) dp[z1][z2]=0;
         sort(w,w+x+1 );
         cout<<dpx()<<endl;
    }
}
