///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
/*
     If opportunity doesn't knock, build a door.
    Success is how high you bounce when you hit bottom.
*/
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

#define  sz                         100000
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
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define   ret         return

ll bigmod ( ll no ,  ll power , ll mod )
{
    if(power==0) ret 1;

    if( power%2==0)  {
            ll x=bigmod (no , power/2 , mod) %mod ;
             ret   (x*x)%mod;
    }
    else ret     ( (no%mod)* (  bigmod(no,power-1 , mod ) %mod)   )%mod;
}

int main()
{
 ll tc;
 cin>>tc;
 fast;
 LOOP(i,0,tc)
 {
     ll n,k; cin>>n>>k;
    double XXX=k*log10(n);
    XXX=XXX- (ll)XXX;
    XXX=pow(10, XXX)*100;
 ///   cout<<"C
   cout<<"Case "<<i+1<<": ";
   cout<<fixed<<setprecision(3);
    cout<<(ll)XXX<<" ";
   /// cout<<"...";
      cout<<fixed<<setprecision(3);
    cout<<bigmod(n,k,1000)<<endl;
/////printf("%lld %03lld\n",(ll)XXX,bigmod(n,k,1000));
//////03lld  important


 }
}
