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
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return
int main()
{
    fast;
  ll n,c;cin>>n;
  ll mv[]={0,1,2,3};
  vector<ll>x,y,ans,ans2;
  LOOP(i,1,n)
  {cin>>c;x.pb(c);       }
  LOOP(i,1,n)
  {cin>>c;y.pb(c);          }

for( ll k=0 ; k<4 ; k++  )
{
    ans.pb( k );
     bool black=false,black2=false; ll cari,i;
   for( i=1 ; i<n  ; i++)
   {
       ll cmp=ans[i-1];
       for ( ll j=0 ; j<4 ; j++  )
       {   black=true;
           if ( (cmp| j )==x[i-1] && (cmp& j)==y[i-1] ) {  cari=j; black=false ; break;  }
       }
       if(black) break;
       ans.pb(cari);
   }
    if(i==n)
    {
        cout<<"YES\n";
        for(auto it:ans) cout<<it<<" ";
        ret 0;
    }
    ans.clear();
}
    cout<<"NO" ;
}