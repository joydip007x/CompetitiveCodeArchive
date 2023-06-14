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

#define  sz                         1000
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%d",&c);
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
#define ll                       int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

vector<ll>v;
bool f=false;
bool vis[sz],e[sz][sz];
ll p,n;
void dodo( ll par)
{
    if(v.size()==n+1 )
    {
        f=true;
        printf("(");
        loop(i,0,v.size())
        {
            printf("%d",v[i]);
            if (i!=(v.size()-1) )printf(",");
        }
        printf(")\n");
        ret;
    }
    for(ll i=1 ; i<=p ; i++)
    {
       if( par!=i and !vis[i] && e[par][i] )
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
   ll ppp;
   while( 1 ){
    ///if(p==-9999) continue;
    scanf("%d",&p);
    scanf("%d",&n);
   mem(vis,false);
   ll x;
   loop(i,0,p)
   {
       loop(j,0,p)
       {
           o(x);
           e[i+1][j+1]=x;
       }
   }
   v.clear();
   f=false;
   v.pb(1);
   vis[1]=true;
   dodo(1);
   if(!f) printf("no walk of length %d\n",n);

   //cout<<"no walk of length "<<n<<endl;
   if(cin>>ppp);
  else  break;
    puts("");
   ///o(ppp);
   }
}
