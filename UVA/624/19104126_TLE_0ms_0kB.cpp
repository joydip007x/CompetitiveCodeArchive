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
#define ll                         int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
int n,x,a[500];
int dp[104857699 ],mx=-99,ans;
ll callmedad( ll val,ll cur ){
    if(  cur>n ) ret mx;
    if(  cur>mx  ) mx=cur,ans=val;
    if(dp[val]!=-1) ret dp[val];
    for( int i=1 ; i<=x ; i++){
      if(  val& 1<<i ) continue;
      dp[val]=max( dp[val] , callmedad( val| 1<<i ,cur+a[i]  ) );
   }
   ret dp[val];
}
int main()
{
   while( scanf("%d",&n) !=EOF){
       scanf("%d",&x);
       mx=-1;
       memset(dp,-1,sizeof dp);
       a[0]=0;
       for(int i=1; i<=x ; i++)
       {
           scanf("%d",&a[i]);
       }
       callmedad(1,0);
       for(ll i=1; i<=x ; i++)
       {
           if(  ans& 1<<i ) cout<<a[i]<<" ";
       }
       cout<<"sum:"<<mx<<"\n";
    }
    ret 0;

}
/*
5  3  1  3  4
10  4  9  8  4  2
20  4  10  5  7  4
90  8  10  23  1  2  3  4  5  7
45  8  4  10  44  43  12  9  8  2
*/
