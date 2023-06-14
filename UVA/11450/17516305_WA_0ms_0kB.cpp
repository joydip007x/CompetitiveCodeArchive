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

#define  sz                         210
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

ll x,y,dp[sz][sz],w1,v1,p[sz][sz],w[sz],t,co[sz];
ll wakeupNfux()
{

    for(ll i=1 ; i<=co[1] ; i++)
        for(ll k=1 ; k<=x ; k++)
          if(k>=p[1][i]) dp[1][k]=max(dp[1][k],p[1][i]); ////placing the  tk of p[First product] [ choices ] 
                                                          //// in dp[ product] [ tk ] logically by which is best for every k tk;(max price);

//    for(ll i=1 ; i<=y ; i++)
//    {
//        for(ll j=1 ; j<=x; j++)
//            cout<<dp[i][j]<<" ";
//        eee;
//    }
     for(ll i=2 ; i<=y ; i++)
     {
         for(ll j=1 ; j<=co[i]; j++)
         {
             for(ll k=1 ; k<=x ; k++)
             {
                 if( k<p[i][j] || dp[ i-1][k-p[i][j]]==-1 ) continue; // verfies if price is more than current dp or 
                                                                    /// if it was impossible to buy a previous product with this mmoney 
                                                                    // then abort this loop ( cz you cant escape a  prodcut , you can escape choices of that prodct; 
                 dp[i][k]=max(dp[i][k] , dp[i-1][k-p[i][j]]+p[i][j] ); /// so the choice is dp[ prev prod ] [ best of that money  for prev prod ] + price  or current 
             }
         }
     }
//    for(ll i=1 ; i<=y ; i++)
//    {
//          for(ll j=1 ; j<=x; j++)
//           cout<<dp[i][j]<<" ";
//        eee;
//    }
//    eee;eee;eee;
    if(dp[y][x]!=-1) ret dp[y][x];
    ret 0;
}
int main()
{
     cin>>t;
     loop(ZZZ,0,t)
     {
        loop(cc,0,sz) loop(cc1,0,25)   dp[cc][cc1]=-1;
        loop(cc,0,25) loop(cc1,0,25) p[cc][cc1]=0;
        mem(co,0);
        cin>>x>>y;
         loopeq(i,1,y)
         {
            cin>>co[i];
            loopeq(k,1,co[i])
            {
                cin>>p[i][k];
            }
            sort( p[i],p[i]+co[i]);
         }
         ll pppp=wakeupNfux();
         if(pppp) cout<<pppp<<endl;
         else cout<<"no solution"<<endl;
     }
}
