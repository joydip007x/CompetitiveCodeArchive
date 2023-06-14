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

#define  sz                         10000
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

vector<ll>v; bool f=false;
set<ll>s;
bool vis[sz],e[sz][sz];
ll p,n;
void dodo( ll par)
{
    if(v.size()==n+1 )
    {    f=true;
        //cout<<"(";
        printf("(");
        loop(i,0,v.size())
        {
           printf("%lld",v[i]);
            //cout<<v[i];
         if (i!=(v.size()-1) )printf(",");//cout<<",";
        }
        printf(")\n");
        //cout<<")";
        ///eee;
        ret;
    }
    for(ll i=1 ; i<=p ; i++)
    {
       if( !vis[i] && e[par][i] )
        {
            v.pb(i);
            vis[i]=true;
            dodo(i);
            vis[i]=false;
            v.pop_back();
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
   // freopen("output.txt","w", stdout);
   ll ppp;
   while( scanf("%lld",&p) ){
    if(p==-9999) continue;
    scanf("%lld",&n);
   mem(vis,false);
   mem(e,false);
   ll x;
   loop(i,0,p)
   {
       loop(j,0,p)
       {
           o(x);
           //cin>>x;
           if(x) e[i+1][j+1]=e[j+1][i+1]=true;
       }
   }
   v.pb(1);
   vis[1]=true;
   dodo(1);
   if(!f) printf("no walk of length %lld\n",n);
   //cout<<"no walk of length "<<n<<endl;
   //cin>>ppp;
   ///o(ppp);
   }
}
