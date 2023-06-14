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
#define  LOOP(i,L,U)        for(int i=( int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(int i=( int)L;i<=U;i++)
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

#define  sz                         10001
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
#define ll                        int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

vector< ll > graph[ sz+1 ];
bool vis[sz+4];
map< ll ,ll > cost;
ll cnt=0;
void dfs ( ll start )
{
   vis[ start ]=true;
   for( ll j=0 ; j< graph[start].size() ; j++)
   {
       if ( ! vis [ graph [start ][ j ] ] )
                dfs (  graph [ start ] [ j ] );
   }
}
int main()
{
  ll n,x,m,y;
  scanf("%d %d",&n,&m);
  LOOPeq(i,1,n)
  {
    scanf("%d",&x);
     cost[ i ]=x;
  }
  LOOPeq(i,1,m)
  {
     scanf("%d %d",&x,&y);
     graph[x ].pb(y);
     graph[y ].pb(x);
  }
  for ( ll i=1 ; i<=n ; i++)
  {
      if (  !vis [ i ]   )
      {
          cnt=cnt+cost[i];
          dfs ( i  );
      }
  }
  printf("%d",cnt);
}
