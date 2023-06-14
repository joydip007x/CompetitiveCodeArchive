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
#define  pii                       pair< int , int>
#define  pipii                       pair< int , pair< int , int > >
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
#define ll                        int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

vector<pair <int , int >>graph[101];
bool vis[101];
map < pair<int , int > , bool > visx;
float      cexy=0,cost=0;
void dfs ( int strt)
{
    ///vis[strt]=true;
    vector <pair <int , int > >Y=graph[strt];
    ////cout<<"visiting "<<strt<<endl;
    //for(int h=0 ; h<Y.size();h++)
  //  {cexy=cexy+Y[h].second;   }
    for(int j=0 ; j<Y.size();j++)
    {
       /// if(  vis[ Y[j].first ]==false  && vis[strt]==false  ) ///continue;
        pair <int , int > K(strt, Y[j].first) ,K2(Y[j].first , strt );
            if(  visx [  K  ]==false && visx[K2]==false )
       /// else
           {

               visx [  K  ]=true;visx[ K2]=true;
               dfs( Y[j].first );
               if(Y[j].second<0)
              {
                  cexy=cexy+Y[j].second;
              /// cout<<"adding "<<Y[j].second<<endl;
              }
           }
    }


}
int main()
{
   ll t; cin>>t;
   LOOP(lllll,0,t)
   {
       ll n,x,y,z,ivz,whatever;
       cin>>n;
       memset(vis,false,sizeof(vis));
       ///memset(visx,false);
       LOOP(j,0,n)
       {
           graph[j].erase ( all(graph[j]));
          /// visx[j].erase ( all(visx[j]));
       }
       LOOP(i,0,n)
       {
           cin>>x>>y>>z;
           cost+=z;
           ivz=-z ;
            pair< int , int >pls(y,z);
            pair< int , int > mins(x,ivz);
            visx [  pair<int,int>(x, y)  ]=false;
            visx[  pair<int,int>(y,x)  ]=false;
            ///pair< int , pair< int , int > >X(x,pls);
            ///pair< int , pair< int , int > >Y(y,mins);
            graph[x].pb(pls);
            graph[y].pb(mins);
       }
        cost=int(cost/2);
         dfs ( 1 );
         eee;
       ///  cout<<cexy<<"         "<<cost<<"   ";
    ///     eee;///<<cost<<endl;
        if(  abs(cost) >abs(cexy) ) {whatever=abs(cexy);}
      else   if (abs(cost)==abs(cexy) ) {whatever=abs(cexy);}
       else  if(  abs(cost) <abs(cexy) ) {whatever=abs(cexy)-cost;                     }
       cout<<"Case "<<lllll+1<<": "<<whatever<<endl;
      cost=cexy=whatever=0;
   }

}

/*
4
6

1 5 4

5 3 8

2 4 15

1 6 16

2 3 23

4 6 42

*/


















