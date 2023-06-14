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

vector<pair <int , int > > graph[200];
bool vis[101];
map < pair<int , int > , bool > visxy,visx;
int      cexy=0,cost=0,cexy2=0;
void dfs ( int strt)
{
    vector <pair <int , int > >Y=graph[strt];
    for(int j=0 ; j<Y.size();j++)
    {
        pair <int , int > K(strt, Y[j].first) ,K2(Y[j].first , strt );
            if(  visx [  K  ]==false && visx[K2]==false )
           {

               visx [  K  ]=true;visx[ K2]=true;
               dfs( Y[j].first );
               if(Y[j].second<0)
              {cexy=cexy+Y[j].second;}
           }
    }
}
/*
make a graph ... and as said 1 2 5 means 1->2 cost 5 ..and jehetu cost 1 theke 2 e 5 sehetu 2 theke1 -5 hiseb  korbo :)
and  visited array to bal sal cz 1 theke 6 visit holo and 3->6 er cost 5 eita ar use hobe na cz vis[6]==true;
abar vis[ pair (1,6)]==true /false ei type use korlm again 
 vis [ 1,6 ] mane vis [ 6,1 ] bujay na ..mane hudai loop e dukhbe and 1->6 = 5 val hole oi je second time dukbe loop e
 so 6->1= -5 ...+5-5=0;;;so 
 >>> pair <int , int > K(strt, Y[j].first) ,K2(Y[j].first , strt );
            if(  visx [  K  ]==false && visx[K2]==false ) <<<<<<<<
 ar 60 no line niye adjatet analized : v ; if u are reading these line you better know " i dont give a fk to my  english ,neither to yours";
 bakita nije bujar kotha ,,last line s;

 */
int main()
{
   ll t; cin>>t;
   LOOP(lllll,0,t)
   {
       ll n,x,y,z,ivz,whatever;
       cin>>n;
       memset(vis,false,sizeof(vis));
       LOOP(j,0,200)
       {graph[j].erase ( all(graph[j]));}
       LOOP(i,0,n)
       {
           cin>>x>>y>>z;
           cost+=z;
           ivz=-z ;
            pair< int , int >pls(y,z);
            pair< int , int > mins(x,ivz);
            visx [  pair<int,int>(x, y)  ]=false;
            visx[  pair<int,int>(y,x)  ]=false;
            graph[x].pb(pls);
            graph[y].pb(mins);
       }
         dfs ( 1 );
       cout<<"Case "<<lllll+1<<": "<<min (abs(cexy) ,cost-abs(cexy) )<<endl;
       ///divide by 2 is own fuking logic; fuk u ismama:v ///
        cost=cexy=whatever=cexy2=0;
   }
}