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

#define  sz                         2000099
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
#define ll                       unsigned  long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

#define F first
#define S second

ll n,k,mx=inf,lmt,mis;
ll rem[sz] , will[sz] , sed[sz] ,cr=0, d,t,s,ans=0LL;
ll cur=0LL , days , tr;
vector< pair<ll,ll > >p;
ll judge( )
{
    set<ll>ss;
    vector<ll>taken(tr+1);
    loopeq(i,1,days) ss.insert(i);
    for(auto it:p)
    {
        ll lec=will[it.S];
        loopeq(i,1,lec){
            auto ii=ss.lower_bound(rem[it.S]);
            if(ii==ss.end() )  break;
            else
            {
                ss.erase(ii) ;
                taken[ it.S]++;
            }

        }
    }
    loopeq(i,1,tr)
    ans=ans+ ((  will[i]-taken[i]   )*sed[i]);
    cout<<ans<<"\n";
}
int main()
{
///concept///https://s3.amazonaws.com/codechef_shared/download/Solutions/JULY17/Setter/IPCTRAIN.cpp
    ll tss;
   cin>>tss;
   while(tss--){
    ///mem(rem,-1);mem(sed,-1);mem(will,-1);
    ans=0LL;
    p.clear();
    cin>>tr>>days;
   loopeq(i,1,tr)
   {
       cin>>d>>t>>s;
       rem[i]=d;
       sed[i]=s;
       will[i]=t;
       p.pb({s,i});
   }
   sort( p.begin() , p.end()   );
   reverse(all(p));
    judge();
   }
}
