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
#define  lfl            long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

bool ok[sz];
ll n ;
vector<ll>v;
bool vis[10000];
void seive()
{
  mem(ok,false);
  for(ll j=2 ; j<10000 ; j=j+2)
    ok[j]=true;

 for(ll i=3 ; i<=100000 ; i++)
  {
      if(!ok[i])
      {
        for(ll j=i*i ; j<=10000 ; j=j+(2*i))
        {
          ok[j]=true;
        }
      }
  }
  ///ok[2]=false;
//  loop(i,1,16)
//  {
//      if(ok[i]) {cout<<i<<" is not prime \n"; }
//      else cout<<i<<" is prime\n";
//  }
}
void doo(ll las)
{
  if(v.size()==n and ok[ las+v.front() ]==false  )
  {
      bool f=0;
    for(ll i=0 ; i<v.size() ; i++) {
            cout<<v[i];

            if(i!=n-1) cout<<" ";
    }
      cout<<endl;
    ret;
  }
  for(ll i=1 ; i<=n ; i++)
    {
     if(!vis[i]  && ok[las+i]==false )
      {
          ///cout<<" las+i "<<las+i<<endl;
          ///cout<<" pushed "<<v.back()<<" + "<<i<<" :"<<ok[v.back()+i]<<"\n";
          vis[i]=true;
          v.pb(i);
          doo( i);
          vis[i]=false;
          v.pop_back();
      }
    }
    ///ret;
}
int main(int argc, char const *argv[])
{
   // freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    seive();
    ll p=1,f=0;
  while(  cin>>n ){

    ///f=1;
    if(f)   cout<<endl;

    cout<<"Case "<<p++<<":\n";

    ll k=1;
    ///for( k=1 ; k<n/2 ; k++)
    {
    v.clear();
    mem(vis,false);
    v.pb(k);
    vis[k]=true;
     doo(k);
    f=1;  f=1;
    }
  }
}
