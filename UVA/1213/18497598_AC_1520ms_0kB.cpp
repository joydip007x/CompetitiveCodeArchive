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

#define  sz                         50009
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


#define sz2 1121
///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
ll n,o,als, dp[200][1200][16] ,v[1122],prime[250],lmt;
ll q;
void seive()
{
    prime[0]=0;prime[1]=2;
    for(ll i=4; i<=sz2 ; i=i+2) v[i]=1;
    for(ll i=3; i*i<=sz2 ; i++)
    {
        if(v[i]) continue;
        for(ll j=i*i ; j<=sz2 ; j=j+(2*i))
        {
         v[j]=1;
        }
    }
    ll k=1;
    for(ll j=3; j<=sz2 ; j=j+2)
    {
        if(!v[j]) {
            k++;
            prime[k]=j;
           // cout<<j<<" x ";
        }
    }
    prime[1]=2;
   // cout<<" \n "<<k<< " prime\n";
    lmt=k;
    return;
}
ll knapsx( ll ind, ll p1, ll us  )
{
    ///if(!n || !q) ret 0;
/////////////////////////////
    //if(us==q)cout<<p1<<endl;
    ///////////////////////
     if(us==q and p1==n) ret 1;
    if( prime[ind]>n || ind>lmt || us>q || p1>n) ret  0;
    if(dp[ind][p1][us] !=-1 ) ret dp[ind][p1][us];
    ll x=0,y=0;
   ///cout<<"taking "<<prime[ind]<<" + "<<p1<<endl;
    x=knapsx( ind+1, p1+prime[ind], us+1);
    y=knapsx(ind+1, p1, us);
    ret dp[ind][p1][us]=x+y;
}
int main()
{
    memset(prime,0,sizeof prime);
    memset(v,0,sizeof v);
    seive();
//    for(ll i=1; i<=lmt ; i++)
//    {
//        cout<<prime[i]<<" ";
//    } eee;
    while(1){
        o(n) ; o(q);
        if(n==0  ) ret 0;
        if(n==1 and q==1) {  printf("0\n"); continue; }
        memset(dp,-1,sizeof dp);
        printf("%lld\n",knapsx( 1,0,0 ));
    }
    ret 0;
}
/*
2
4
1 2 4 6
3
2 3 5
8
3 3 3 9 3 3 9 3
*/
