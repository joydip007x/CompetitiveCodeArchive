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
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

long double x,n, stp=0, ris=0,lo=0,rt=0,sig=0,ff=0;
void docal(long double x)
{
    long double y=pow(x,0.500);
    if( ceil(y)==floor(y) )
    {
        lo++;
        docal(y);
        ret;
    }
    else
    {
        for(long long j=2 ; j<=x; j++)///j x cross korle  no lav, it wont make you full sqaure if it didnt earliers ..
            //like 12*12 ok..12*13 14 15  12*16 wont make it newly rootabl number
        {
            long double y=pow(x*j,0.500);
            if( ceil(y)==floor(y) )
            {
                if(x==j) {   cout<<j<<" "<<lo+rt; ret;}
                 x=x*j;
                if(ff==0){rt++;ff=1;}///this was triggrd only once
                ////because you cant change everythin by multiplwe becz Prime factore
                ////matters here..just find prime of  prim fac of primary n.
                //the ans is multiple of prime factors and (lo+rt)==such powers of prime factor where the res is rootable int
                //5184=2^x * 3^x , 1000=2^x * 5^x ;
                docal(x);
                ret;
            }
        }
    }
    ///if it isnt triggered into any of the loop means its a prime now ;
     cout<<n<<" "<<lo+rt;
     return;
}
int main()
{
    cin>>n;
    if(n==1) {cout<<"1 0";ret 0;}
    docal(n);

}