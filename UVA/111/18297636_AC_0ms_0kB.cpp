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
#define ll                      int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///

#define sz1 120
char s[sz1*3];
string s1;
map<ll,ll>m;
ll con,x,y,z , dp[sz1][sz1], lmt;
vector<ll>v,v2;
ll LIS( ll a1 , ll b1 )
{
    if( a1>lmt || b1>lmt ) ret 0;
    if(  dp[a1][b1 ] !=-1) ret dp[a1 ][b1 ];
    if( v[a1]==v2[b1]   ) ret dp[a1][b1]=1+LIS(a1+1,b1+1);
    ret dp[a1][ b1 ]= max( LIS( a1+1,b1 ), LIS( a1,b1+1 ) );
}
int main()
{
   ll st=0;
   v.resize(sz1);
   v2.resize(sz1);
   while(  gets(s)  )
   {
      //cout<<s<<" \"::\" "<<strlen( s)<<endl;
      memset(dp,-1,sizeof dp);
      con=1;
      if(strlen(s)>2)
      {
          s1=s;
          stringstream ss(s1);
          while(ss>>x) v[x]=con++;
          printf("%d\n", LIS(1,1 ));
      }
      else
      {
          lmt=stoi(s);
          gets(s);
          s1=s;
          stringstream ss(s1);
          while(ss>>x) {  v2[x]=con++;    }
         
      }
   }
  
}
/*
10
3  1  2  4  9  5  10  6  8  7
1  2  3  4  5  6  7  8  9  10
2  10  1  3  8  4  9  5  7  6

*/
