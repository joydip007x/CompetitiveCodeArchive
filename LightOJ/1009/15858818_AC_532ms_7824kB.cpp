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

#define  sz                         20007
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)

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

vector < ll > graph[ sz] ;
map < ll , string > color ;
vector < ll >vis (sz,0);
ll bfs (     ll nod   )
{
    ll i,j,k,black=0 , violet=0 , secx  ;
    color[ nod ] ="BLK";
    queue< ll >Q;
    Q.push( nod );
    black++;
    while(!Q.empty())
    {
        ll Y=Q.front(); Q.pop();
            for(ll X=0 ; X<graph[Y].size() ; X++)
            {
                ll Z=graph[Y][X];
            if(color[Z]=="NOT")
            {
                Q.push(Z);
                if(color[Y]== "BLK"  )
                {
                    color[Z]="VIO";
                    violet++;
                }
                else
                {
                    color[Z]="BLK";
                    black++;
                }
            }
            }
    }
    return max(black, violet);

}
int main()
{
    ll tcase;
    fast;
    cin>>tcase;
    ll ple=0;
    while(tcase--)
    {
        ll maxxy=0, blak=0,violet=0;
        preflag;
        LOOP(i,0,sz)
        {
            graph[i].erase( graph[i].begin() , graph[i].end() );
           color[i]="NOT";
        }
        ll n;  cin>>n;
        LOOP(i,0,n)
        {
            cin>>j>>k;
            graph[ j  ].pb(k);  graph[k].pb(j);
        }
        LOOP(i , 0, sz)
        {
            if( !graph[i].empty()  && color[i]=="NOT"    )
            {
                  maxxy=maxxy+bfs(   i  );
            }
        }
        cout<<"Case "<<++ple<<": "<<maxxy<<endl;
    }
}

