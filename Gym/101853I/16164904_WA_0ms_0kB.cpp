
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
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return
#define d double
double dothe( double  h1, d m1 , d h2, d m2  )
{
    h1=((h1*60)+m1 ) ;
    h2=((h2*60)+m2 );

   ///  cout<<" return = "<<h1<<" "<<h2<<endl;
    ret abs(h1-h2);

}
vector<ll >v;
map< ll , ll> ma;
map<ll ,ll >::iterator it,it2;
int main()
{
 ll t; cin>>t;
 LOOP(pp,0,t)
 {
     ll req, no; cin>>no;
      LOOP(j,0,no)
      {
          ll x;cin>>x;
          ma[x ]++;
      }
      it2=ma.begin(); it2++;
      for( it=ma.begin () ;    it2!=ma.end()     ; it++,it2++ )
      {
          if(abs(it->first-it2->first)==1) {
                v.push_back(  it->second+it2->second    );
          }
          else
          {
              v.pb(it->second); v.pb(it2->second);
          }
      }

     if(ma.size()>1) {cout<<*max_element(all(v));eee;}
     else
     {
         auto it3=ma.begin();
         cout<<it3->second<<endl;
     }
      v.erase(all(v));
      ma.erase(all(ma));
///////////

 }

}

