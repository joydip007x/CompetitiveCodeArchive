
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

#define  sz                         109
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
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

ll g[sz][sz];
ll color[sz],out[sz];
ll nod,edg,ma=0;
void clea(ll x)
{
    mem(g,0);
    mem(color,0);
    ma=1;
    mem(out,0);
}
bool vald(ll k)
{
    for(ll j=1 ; j<=nod ; j++)//if any node with black color and adj of k node mean false;
    {
        if(color[j]==1 && g[k][j]==1) ret false;
    }
    ret true;
}
void dfs(ll a)
{
    if(a>ma)
    {
        ma=a;
        memcpy(out,color,sizeof(color));
    }
    if(a>nod) ret;
    for(ll j=1 ; j<=nod ; j++)
    {
        if(   vald(j)  and color[j]==0 )
        {
            ///cout<<" work - "<<j<<endl;
            color[j]=1;
            dfs(a+1);//this code is actually slow for undirected i/o means incompatiable
            //also many suggested Backtrack && the judge is weak :) this is a motherfuking problem you must hate
            ///specially your code will take TIME FOREVER _ just try "morass's" input from udebug
//check below
            color[j]=0;
        }
    }
    return;
}
int main()
{/////ispired -https://geniustanley.github.io/2017/02/22/UVa-193-Graph-Coloring/

    fast;
  ll tca;cin>>tca;
  while(tca--)
  {
      cin>>nod>>edg;
      clea(nod);
      LOOP(i,0,edg)
      {
          ll x,y; cin>>x>>y;
          g[x][y]=1;
          g[y][x]=1;
      }
      ma=1;
      dfs(1);
    ///  if(ma-1)
        {
            cout<<ma-1<<"\n";
      ll sx=0;
     for(ll k=1 ; k<=nod ; k++)
      {
          if(out[k])
          {
            if(sx) cout<<" ";
              cout<<k; sx=1;
          }

      }
      eee;
      }
//      for(ll k=1 ; k<=nod ; k++)
//      {
//          cout<<k<<"\v"<<out[k];
//      }
  }
//////////Hard to understand but good(BFS korse )>>https://github.com/marioyc/Online-Judge-Solutions/blob/master/UVA/Todavia/Graph%20Coloring%20-%20193.cpp

}
/*
morass
1
17 3
13 2
14 5
11 5
out-
15
1 3 4 6 7 8 9 10 11 12 13 14 15 16 17

*/
