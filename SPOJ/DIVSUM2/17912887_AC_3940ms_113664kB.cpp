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
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

#define MOD 1e8+9

bool vis[ (ll)MOD+12];
vector<ll>prime;
void seive()
{
    memset(vis,false, sizeof vis);
    ll L=sqrt(MOD)+1;
    ////prime.pb(2);
    for(ll i=3; i<L; i=i+2 )
    {
        if(!vis[i])
        {
            ///prime.pb(i);
            for(ll j=i*i ; j<MOD ; j=j+(2*i))
            {
                vis[j]=true;
            }
        }
    }
    prime.pb(2);
    for(ll i=3 ; i<MOD ; i=i+2)
    {
        if(!vis[i]) prime.pb(i);
    }
}
ll RtoN(  ll a, ll b)
{
    ll r=1LL;
    while(b--) r=r*a;
    ///cout<<" a= "<<a<<" RET"<<r<<endl;
    ret r;
}
ll find_divisor(ll x)
{
   ll cur,rett=1LL,Lmt=sqrt(x)+1, ok=x,tmp;
   for(ll i=0; (1LL*prime[i]*prime[i])<=ok and i<prime.size() ; i++)
   {
       if(ok%prime[i]==0 )
       {
           ///cout<<prime[i]<<":"<<endl;
           cur=0;
           while(ok%prime[i]==0)
           cur++,ok=ok/prime[i];
          rett= rett*(RtoN( prime[i],cur+1)-1) /(prime[i]-1) ;//GGeomertic progression
          cur=0;
       }
   }
   if(ok>1) rett*=( ok+1 );
   ///cout<<"\n ret- "<<rett<<endl;
   ret rett-x;
}
int main()
{
  ll t,q;
  fast;
  seive();
  cin>>t;
  //scanf("%llu",&t);
  while(t--)
  {
      cin>>q;
      ///scanf("%d",&q);
//      if(q==1) {printf("1\n"); continue;}
//      if( q==2 || (q<=MOD and q&1 and !vis[q]  ) ) {printf("1\n"); continue;}
      ll out=find_divisor(q);
      cout<<out<<"\n";
      ///printf("%llu\n",out);
  }
  ret 0;

}
