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

#define  sz                         10099
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

vector<  pair<ll, ll > >grap[sz] ;

vector<ll >ma;
bool vis[sz];
ll  lef[sz],righ[sz];
ll dfs(ll x)
{
    vis[x]=true;
    ll res ;
    for(  vector< pair<ll, ll > > ::iterator it=grap[x].begin() ; it!=grap[x].end() ; it++  )
    {
       /// cout<<" X = "<<x<<" "<<it->first<<" wieght "<<it->second<<endl;
      if ( vis[ it->first ]==false   )
       {
       ///cout<< dfs( it->first )<<endl;;
       res=(it->second) +dfs(it->first);
        if ( res>lef[x])
            {
            righ[x]=lef[x];
            lef[x]=res;
            }
        else if (res>righ[x]) {righ[x]=res;}
       }
    }
    ma.pb(lef[x]+righ[x]);
    return lef[x];
}
void fuckoff(ll n)
{
    mem(vis,0);
    mem(lef,0);
    mem(righ,0);
    LOOP(i,0,sz)
    {
        grap[i].clear();
    }
    ma.clear();

}
int main()
{
    ll tc; tc=1;
    LOOP(i,1,tc+1)
    {
        ll n,x,y,z;
        cin>>n;
        fuckoff(n);
        for(ll j=1 ; j<n ; j++)
        {
            cin>>x>>y;z=1;
            pair<ll,ll>X(x,z) , Y(y,z);
            grap[x].push_back(Y);
            grap[y].push_back(X);
        }
        dfs(1);
        cout<<*max_element(all(ma))<<endl;
    }
}
