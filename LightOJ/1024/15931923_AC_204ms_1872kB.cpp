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

#define  sz                         100000
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
#define rev(v)                   reverse(v.begin(),v.end())


////////////////////////////////////////////////*https://github.com/hackerkid/LightOJ-Solutions/blob/master/1024-Eid.cpp*/
map < ll , ll > fac ;
map < ll , ll >::iterator it ;
string S;
void fact(   ll x    )
{

  ///  cout<<"LOOP for = " <<x <<endl;
    for(ll i=2 ; i*i<=x ; i++)
    {
       ll  cnt=0;
        while(x%i==0) {
                x=x/i; cnt++;

              ///cout <<  "fac [ "<<i <<" ]  max ( "<<fac[i]<<"    ,   "<<cnt<<endl;
            fac[i]=max(fac[i], cnt );
        }
    }
    if(x!=1) {     fac[x]= max(fac[x], 1LL );
        ///cout <<  "LOOO Ofac [ "<<x<<" ]  max ( "<<fac[x]<<"    ,   1"<<endl;
     }
}
///string
void multipli( ll Y)
{
     ll cari=0,i;
    for( i=0 ; i<S.size() ; i++)
    {
        cari=   ((S[i]-'0')*Y) +cari ;
        S[i]=    ( (cari%10 )+'0');
        cari=cari/10;
    }
    while(cari)
    {
        S.pb((cari%10 )+'0');
        cari=cari/10;
    }
   /// return S;
   /// cout<<S<<endl;
}
int main()
{
       ll tcas;
       cin>>tcas;
       LOOP(K,0,tcas)
       {
        fac.erase (all(fac));
           ll n; cin>>n;
           LOOP(oo,0,n)
           {
               ll O; cin>>O;
               fact(O);
           }
           S="1";
           for(  it=fac.begin() ; it!=fac.end() ; it++)
           {
               multipli (    pow ( it->first , it->second        )    );
               ///dcheck(it.first , it.second);
           }
           reverse ( all(S));
           cout<<"Case "<<K+1<<": ";
           cout<<S<<endl;
           S.clear();

       }
}

