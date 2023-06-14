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

vector <map < ll , ll >> Fact(102);
vector <map < ll , ll >>::iterator it;
map < ll , ll > ::iterator im;

void fuck( void )
{
       for (  ll i=3 ; i<=101   ; i++ )
       {
           ll X=i;
           map < ll , ll > C ;
           C=Fact[i-1];
               ll j;
             for ( j=2 ; j<=sz ; j++)
             {
                 ll cnt=0;
                   while(X%j==0)
                   {
                       cnt++; X=X/j;
                   }
                   C[j]=C[j]+cnt;
                    if(X==1) { break;}
            }
             Fact[i]=C;
       }
        map < ll , ll > Z;
        Z=Fact[ 100];
//        for(auto it : Z)
//        {
//            if(it.second!=0)
//          {cout<<it.first <<" = " <<it.second <<endl;}
//
//        }
}
int main()
{
      map < ll , ll > M;
      M [2 ]=1 ;
     Fact[2]=M;
     fuck() ;
     ll tcas ;
      scanf("%lld",&tcas);
      for ( ll k=1 ; k<=tcas ; k++)
      {
           ll O; cin>>O;
           map < ll , ll > ZX;
           map<ll , ll >::iterator it;
           ZX=Fact[O];
           it=ZX.begin();
           printf ("Case %lld: %lld = %lld (%lld)",k,O,it->first,it->second);
           for(it=++ZX.begin(); it!=ZX.end() ; it++)
           {
               if(it->second>0)
                printf(" * %lld (%lld)",it->first,it->second);
           }
           printf("\n");
      }
}
