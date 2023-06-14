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

vector < string > fibonacci;
string addition (   string  X , string Y );
 void   trisa103( string a , string b )
 {
     fibonacci.pb(a); fibonacci.pb(b);
     for (  ll i=2 ; i<=5001 ;  i++)
     {
   ///      gaira;
         string ss=addition(  fibonacci[i-1] , fibonacci[i-2]    );
         fibonacci.pb(ss);
      ///   cout<<ss<<endl;
     }
 }

string addition (   string  X , string Y )
{
    string ans;
   //// ans.resize(max(X.size() , Y.size()  ) ,48  ) ;
    ll cari=0,i;
    X.resize(max(X.size() , Y.size()  ) ,48);
    Y.resize(max(X.size() , Y.size()  ) ,48);
    for( i=0  ;   i<max(X.size() , Y.size() )   ; i++)
    {
        cari = (X[i]-48) +(Y[i]-48) +cari;
        ///ans[i]=(cari   % 10 ) +48 ;
        ans.pb((cari   % 10 ) +48 );
        cari=cari/10;
    }
    while (cari)
    {
        ///ans[i++]=(cari%10)+48;
        ans.pb((cari%10)+48);
        cari=cari/10;
    }
    return ans;
}

int main()
{
     string a="0";
     string b="1";
      trisa103( a , b);
      ll n;
        while(  bool (cin>>n )==true )
        {
            cout<<"The Fibonacci number for "<<n<<" is ";
            string out=fibonacci[n] ;
            reverse ( all(out));
            cout<< out<<endl;
          ///  printf("%s",out);
           /// cout<<"394810887814999156320699623170776339";
        }
}

