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

#define  sz                         1099
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

ll x,y,dp[sz][sz],w1,v1,p[sz],w[sz],t;
ll wakeupNfux()
{
    for(ll i=0 ; i<=y ; i++)
    {
        for(ll j=0; j<=x ; j++)
        {
            if(!i || !j) dp[i][j]=0;
            else if( j<w[i]) dp[i][j]=dp[i-1][j];
            else
                dp[i][j]=max(dp[i-1][j], p[i]+dp[i-1][j-w[i]] );
        }
    }
    ret dp[y][x];
}

int main()
{

     cin>>t;
     loop(ZZZ,0,t)
     {
        loop(cc,0,sz) loop(cc2,0,sz) dp[cc][cc2]=0;  
        mem(w,0) ; mem(p,0);
         cin>>x>>y;
         loop(i,1,y+1)
         {
             cin>>w1>>v1;
             w[i]=w1 , p[i]=v1;
         }
         cout<<"Hey stupid robber, you can get "<<wakeupNfux()<<"."<<endl;
     }
}
