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

#define  sz                         200179
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
#define srt(v)                   sort(v.begin(),v.end()  )
#define  ret                     return 0

vector <ll > graph[ sz+2 ],path[sz+2];
bool vis[sz+2];
stack<ll >S;
set<ll>SS;
vector< ll >V;
ll stt,pos,n,qu;
ll st[sz],en[sz],cnt=0,RTN[sz];
int dfs(ll start)
{
    cnt++;
    RTN[cnt]=start;
    st[start]=cnt;
   vis[start]=true;
   for(ll j=0 ; j<graph[start].size() ; j++)
   {
        if (!vis [ graph[start] [j]  ]   && graph[start][j] >start      )
        {
            ///cout<< "here =  "<<graph[start][j]<<" :";
//         for(auto it: V) cout<<it<<",";
//          eee;
         dfs(graph[start] [j]   );
        }
   }
   en[start]=cnt;
}


int main()
{
    ///cin>>n>>qu;
    scanf("%lld %lld",&n,&qu);
    LOOPeq(I,2,n)
    {
        ll x; //cin>>x;
        scanf("%lld",&x);
        graph[x].pb(I);
       ///graph[I].pb(x);
    }
    LOOPeq(L,1,n)
    {
         srt(graph[L]);
//         cout<<L<<"      :   ";
//         for(auto yy:graph[L] ) cout<<yy<<" ";
//         eee;
    }

        dfs(1);
//         for(auto it: V)
//            cout<<it<<"  <<  ";
//          eee;
//    }

    LOOP(p,0,qu)
    {
        ///cin>>st>>pos;
        scanf("%lld %lld",&stt,&pos);
        ll cmp=abs(st [ stt ] - en [stt  ]  )+1;
       /// cout<<cmp<<"   ";
       if (pos>cmp) {cout<<"-1"<<endl; continue;}
       cout<< RTN [  st[stt] +pos-1] <<endl;
        
    }
}
/*
websittes-http://www.personal.kent.edu/~rmuhamma/Algorithms/MyAlgorithms/GraphAlgor/depthSearch.htm
idea-http://www.shafaetsplanet.com/planetcoding/?p=973
mention not_>>>>topological sort er moto ..just starting ar ending node er time dore rakha ....ekta noder..pore +1 -1 eigula nijei trick
*/
