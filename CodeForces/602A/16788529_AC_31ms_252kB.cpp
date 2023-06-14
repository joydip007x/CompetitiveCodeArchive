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
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

vector<string>vx,vy;
ll calcl ( string s)
{
    if (s.size()==1)    {ret  s[0]-'0';}
    else  {   ll tt=( (s[0] -'0' )*10)+(s[1]-'0');          ret tt  ;}
}
ll fake( )
{
     ll nx,bx; string c;
    cin>>nx>>bx;
    ll finx=0,tnx=1;
     for(ll i=0 ; i<nx ; i++)
    {
        cin>>c; vx.pb(c);
    }
    reverse(all(vx));
    for(ll i=0 ; i<nx ; i++)
    {
         c=vx[i];
        ll rel=calcl( c);
         finx=(finx)+(rel*tnx);
        tnx=tnx*bx;
/*actually highest base is 40 , so expected highest number in one ghar is 39 and in a string 39 is inserted ans 3 and 9 simultaniously which is a problem in calculating (39*10)+next number becomes (3*10) +9 fuccccccccccccccc , so just get the real number from every  string , thats why i reverse and did this calcl func; 
  cout<< " : processing "<<c<<" and got "<<rel<<"  finx -> :"<<finx<< " & tnx "<<tnx <<endl;
*/
    }
   ret finx;
}
int main()
{
   ll cmp1=fake();
   ll cmp2=fake();
  if (cmp1>cmp2) cout<<">";
  else if(cmp1<cmp2) cout<<"<";
  else cout<<"=";
}
