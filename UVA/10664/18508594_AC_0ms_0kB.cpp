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

#define  sz                         250
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

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///

#define MOD 100000007
#define sz2 250
ll t ,a[sz] ,x,sum, dp[sz2][sz2] ,lmt, lmt2,j;
string s;
char c[sz2] ;
ll knasx(ll ind , ll mon)
{
    if(ind>lmt || mon>lmt2) ret 0;
    if(mon==lmt2) ret 1;
    if(dp[ind][mon]!=-1) ret dp[ind][mon];
    ret dp[ind][mon]=max( knasx(ind+1,mon+a[ind]), knasx(ind+1,mon)    );
}
int main()
{
   o(t);
   scanf("\n");
   while(t--)
   {
       fgets(c,200,stdin);
       for(ll i=0 ; i<strlen(c); i++)
       {s.pb(c[i]);}
      /// cout<<"String S= "<<s<<endl;
       j=1; sum=0;
       memset(dp,-1 ,sizeof dp);
       memset(a,0 ,sizeof a);
       stringstream ss(s);
       while(ss>>x)
       {
           a[j++]=x;
           sum+=x;
       }
       s.clear();
       if(sum%2) {printf("NO\n"); continue ;}
       lmt=j-1; lmt2=sum/2;
       ll ko=knasx(1,0);
       if(  ko ) printf("YES\n");
       else printf("NO\n");
   }



}






