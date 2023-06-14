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

#define  sz                         10005
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
#define ll                        long long int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

vector<ll> g[sz];
bool vis[sz];
ll ds[sz];
map<ll, ll > ma;
map<ll, ll >::iterator it;
ll maxx, x,y,z,te,te2;
void dfs( ll ss)
{
    vis[ss]=true;
    ///if(g[ss].size()!=0)
    ma[ss]++;
    for ( ll k=0 ; k<g[ss].size() ; k++)
    {
        ///ma[ss]++;
        if ( !vis [ g[ss][k] ])
            dfs(  g[ss][k] );
    }
}
int main()
{
    ll t,cnt; cin>>t;
    LOOP(pp,0,t){
    set< ll> ::iterator it2;
    cin>>x>>y>>z;
    mem(ds,0);
    LOOPeq(i,1,x)
    {cin>>ds[i];}
    LOOPeq(i,1,z)
    {
        cin>>te>>te2;
      ///  S.insert(te); S.insert(te2);
        g[te].pb(te2);
    }
    ////////////
//    for(auto it:g)
//    { ///cout<<it-g.begin()
//        cout<<" paaaa ";
//        for(auto it2:it) {cout<<it2<<" : ";}
//        eee;
//    }
    ////////////
    LOOPeq(i,1,x)
    {
         mem(vis,false);
        // cout<<"sent "<<ds[i]<<endl;
         dfs( ds[i] );
    }
    maxx=0;
    for( it=ma.begin() ; it!=ma.end() ; it++)
    {
        if ( it->second>=x && it->second!=0 ) {
               /// cout<<it->first<<" : - "<<it->second<<endl;
                maxx++; }
    }
    cout<<"Case "<<pp+1<<": "<<maxx<<endl;
    maxx=0;
    for(ll i=0 ; i<sz ; i++)
    {
        g[i].erase ( all(g[i ]));
        ma[i]=0;
    }
    }

}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
