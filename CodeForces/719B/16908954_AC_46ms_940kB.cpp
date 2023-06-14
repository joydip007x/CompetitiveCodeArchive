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
#define	lfl						long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

string creates( ll x, char c)
{
	string rett;
   switch(c){

   	case 'b': for(ll i=0 ; i<x ; i++)
   				{
   					if (  i%2) rett.pb('r');
   					else rett.pb('b');
   				}
   				break;
   	case 'r': for(ll i=0 ; i<x ; i++)
   				{
   					if ( i%2) rett.pb('b');
   					else rett.pb('r');
   				}
   				break;
   }
   ret rett;

}
ll lecompar(string a,string b)
{
     ll sp1=0,sp2=0;
     for(ll i=0 ; i<a.size() ; i++)
     {
     		if( a[i]!=b[i] && a[i]=='r' ) sp1++;
     		if( a[i]!=b[i] && a[i]=='b' ) sp2++;
     }
     ret min(sp1,sp2)+(max(sp1,sp2)-min(sp1,sp2) );

}
int main()
{
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
	ll x;
	cin>>x;
	string s, sx,sy;
	cin>>s;
	sx=creates( x,'r' );
	sy=creates( x,'b' );
	///cout<<sx<<" "<<sy<<"\n";
	ll ans1=lecompar(s,sx );
	ll ans2=lecompar(s,sy );
	cout<<min(ans1,ans2);
}