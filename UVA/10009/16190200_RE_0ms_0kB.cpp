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

map<string , vector< string > >graph;
map<string , bool >vis;
map<string , string>cum;
ll m,q,popo;
string s1,s2,out;

void clearall()
{
  //  for(auto it:graph)
   // {graph[it.first].erase ( all(it.second ) );}
   graph.clear();

}
void inbe2inQUeries()
{
    vis.clear();
    cum.clear();
    out.clear();
}
int dfs(string st , string en)
{
       vis[ st ]=true;
      if(en==st) {return 0;}
     for (  ll k=0 ; k<graph[st ].size() ; k++ )
     {
         if ( !vis[  graph[st][k] ]  )
         {
             cum [ graph[st ][k] ]=st;
             dfs(  graph[st][k],en     );
         }
     }
}
void printres( string s ,string e )
{
    string now=e;
    out.pb(e[0]);
     while ( now!=s )
     {
         now=cum[now];
         out.pb(now[0]);
     }
     reverse(all(out));
     cout<<out;
     eee;
}
int main()
{
   ll tcas;
   cin>>tcas;
  getchar();
  popo=tcas;
   while(tcas--)
   {
       clearall();
       cin>>m>>q;
      getchar();
       while(m--)
       {
           cin>>s1>>s2;
           graph[s1].push_back(s2);
           graph[s2].push_back(s1);
           ///vis[s1]=vis[s2]=false;
       }
       while(q--)
       {
           inbe2inQUeries();
           cin>>s1>>s2;
           ll p=dfs(s1,s2);
           printres ( s1,s2) ;
       }
       if(tcas!=1) {cout<<endl;}
   }

}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
