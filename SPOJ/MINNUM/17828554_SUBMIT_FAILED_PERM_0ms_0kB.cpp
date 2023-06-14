///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<iostream>
#include<string>
#include<sstream>
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
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

#define z 48
string s,out;
ll so=0LL;

void additionstring( string a , ll b)
{
    ////cout<<" came here " <<endl;
    ll cari=1,tmp=0;
    string out2;
    for(ll i=a.size()-1 ; i!=-1; i--)
    {
        cari=cari+ ( a[i]-z);
        out2.pb( (cari%10)+z  );
        cari=cari/10;
    }
    if(cari) cout<<"1";
    for(ll i=out2.size() -1 ; i!=-1 ; i--) cout<<out2[i];
    cout<<"\n";
}
ll divide(string ss, ll a)
{
    ll cur=0, zer=0,start=0;
    string ans,cc;
    for(ll i=0; i!=ss.size() ; i++)
    {
       if(cur<a)cur=(cur*10) + (ss[i]-z);
       else
       {
           for(ll j=i ; j!=ss.size() ; j++)
           {
            out.pb( (cur/a)+z );
           cur=cur%a;
           cur=(cur*10) ;
           cur=cur+( ss[i]-z );
           }
       }
    }
    out.pb( (cur/a)+z );
    cur=cur%a;
    if(!cur ) ret cout<<out<<"\n",0;
    else additionstring(out,1);
    ret 0;
}
int main()
{
     while( cin>>s and s!="-1")
     {
         out.clear();
         if(s=="0") { cout<<"0\n"; continue ; }
         if( s=="1" || s=="2" || s=="3" || s=="4" || s=="5" || s=="6" || s=="7" || s=="8" || s=="9") {  cout<<"1\n"; continue;   }
         divide(s,9LL);
     }
}
