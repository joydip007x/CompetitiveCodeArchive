
///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
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

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return
ll tcase,n;

 long long  sum[sz];
void ad()
{
    ll i=0,k=2;
    sum[1]=1;
    sum[0]=0;
    for(long long j=2 ; j<=1073741824 ; j=j+i)
    {
        sum[k]=sum[k-1]+j;
        i=j;
        k++;
     ///   cout<<" sum[ "<<k<<"] "<<sum[k-1]<<" j --"<<j<<endl;
    }
}
void fk()
{
  ll j=2;
   long long ok=0;
    ll xxxx=(n*(n+1))/2;
     ll kx=1,cc=0;
   {
       while(kx<n)
       {
           kx=kx<<1;
           cc++;
       }
       if(  (n&(n-1) )!=0)  ok=2*sum[cc];
       else ok=2*sum[cc+1];
       ///cout<<cc<<" sum "<<sum[cc+1]<<"   "<<sum[cc]<<"  "<<sum[cc-1]<<endl;
   }

     printf("%lld\n",xxxx-ok);
}
int main()
{
    ad();
 o(tcase);
 while(tcase--)
 {
     o(n);
    fk();
 }

}
