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

#define  sz                         40000
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
        if ( res>=lef[x])
            {
            righ[x]=lef[x];
            lef[x]=res;
            }
        else if (res>righ[x]) {righ[x]=res;}
       }
    }
    ma.pb(lef[x]+righ[x]);
    ///cout<<"return form "<<x<<" "<<lef[x]<<endl;
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
///    res=0;
}
int main()
{
    ll tc; cin>>tc;
    LOOP(i,1,tc+1)
    {
        ll n,x,y,z;
        cin>>n;
        fuckoff(n);
        for(ll j=1 ; j<n ; j++)
        {
            cin>>x>>y>>z;
            pair<ll,ll>X(x,z) , Y(y,z);
            grap[x].push_back(Y);
            grap[y].push_back(X);
        }
        dfs(0);
        cout<<"Case "<<i<<": "<<*max_element(all(ma))<<endl;
    }
}
//followed by -https://github.com/rafi-kamal/ACM-Solutions/blob/master/LightOj/Graph%20Theory/1094%20-%20Farthest%20Nodes%20in%20a%20Tree.cpp
// left right just imaginary , think like kun branch e highest and then kun branch e second gihest and 
/// also learn Least common ancestor (LCA) ,, and eikhane distance max mane max wieght in branches 


/// also "vector< pair<ll, ll > > ::iterator it " ei line ta 55 no line e dile 
// RTE asto , ba code balcAL  suru korto (reason:  you are in recursion , balcaler moto 
// ekbar ekta matro ITERATOR diye fulll grap er et onode visit kore 
 // asa jabeo na , ulta palta jayga point kora shuru korbe ;;;
/*
cout<<" called dfs "<<it->first<<" weight = "<<it->second<<endl;


I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
