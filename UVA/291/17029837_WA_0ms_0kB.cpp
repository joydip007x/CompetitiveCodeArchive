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

vector<ll>v;
set<ll>s;
bool vis[sz][sz],exi[sz][sz];
void dodo( ll par)
{
    if(v.size()==9 )
    {
        loop(i,0,v.size())
        {
            cout<<v[i];
        }
        eee;
        ret;
    }
    for(ll i=1 ; i<=5 ; i++)
    {
        if( par!=i and (exi[par][i]||exi[i][par]) and !vis[par][i] and !vis[i][par] )
        {
            v.pb(i);
            vis[par][i]=vis[i][par]=true;
            dodo(i);
            vis[par][i]=vis[i][par]=false;
            v.pop_back();
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
   mem(vis,false);
   mem(exi,false);
   exi[1][2]=exi[1][5]=exi[2][3]=exi[2][5]=exi[1][3]=exi[5][3]=exi[3][4]=exi[5][4]=true;
   exi[2][1]=exi[5][1]=exi[3][2]=exi[5][2]=exi[3][1]=exi[3][5]=exi[4][3]=exi[4][5]=true;

   v.pb(1);s.insert(1);
   dodo(1);
}
