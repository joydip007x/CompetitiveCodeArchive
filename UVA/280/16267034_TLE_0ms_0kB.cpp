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
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

ll n;
vector<ll>g[sz];
ll vis[sz];
vector <ll>res;
map<ll , bool> dif;
set<ll> ::iterator it;
void bfs( ll x)
{
    vis[x]=1;
  ///  cout<<" vis "<<x<<endl;
    for ( ll j=0 ; j<g[x].size() ; j++  )
    {
        if(vis[ g[x][j] ]==-1)
            bfs( g[x][j] );
    }
}
void fuckall( ll x)
{
     LOOPeq(i,1,x){ g[i].clear() ; }
     res.clear();
     dif.clear();
}
void coutn( ll c)
{
    ///vector<ll>X=g[x];
    for( ll i=1 ; i<=n; i++)
    {
       /// cout<<X[i]<<" ";
        if( vis[ i ]==(-1 )     )
        {
        if ( i!=c)
        {res.pb(  i );
       ///cout<<" : push  "<<i<<endl;
        }
//        if(i==c)
//        {
//            if ( dif[c]!=true && vis[i]==1 ) res.pb(i);
//        }
        }
    }
    ///gaira;
    ///eee;
    ///cout<< " 1 "<<dif[1]<<"   :: "<<dif[2]<<endl;
    if( dif[c]==0) res.pb(c);
    srt(res);
}
int main()
{
   /// fast;
  while(scanf("%lld",&n) && n!=0)
  {
      fuckall(n );
      ll tc,l,k=0;
      for(  ;   ;)
      {
          char s[sz];
         // getchar();
         // gets(s);
          cin.getline(s,sz);
           if(s[0]=='0') {break;}
          for ( ll i=1 ; i<strlen(s) and s[i]!='0' ; i++ )
          {

             if (  s[i]>='0' && s[i]<='9' ) {
                    g[ int(s[0]) -48 ].pb( int(s[i]) -48 );
             /// cout<<" "<< int(s[0]) -48 <<" push "<<( int(s[i]) ) - 48<<endl;
             if(   s[i]==s[0] ) {   dif[ s[0]-48 ] =true;   }
             }
          }
      }
     // cin>>tc;
     o(tc);
      for(ll i=0 ;  i<tc; i++)
      {
         // cout<<" takin i/o "<<endl;
          //cin>>l;
          o(l);
          mem(vis,-1);
          bfs(l);
         /// if ( dif[l] ==false   ) vis[l]=1;
          ///if ( dif[l] ==true  ) vis[l]=1;
            coutn (l);
            //cout<<res.size()<<" ";
            printf("%lld ",res.size());
          for(auto it: res) cout<<it<<" ";
          res.clear();
          eee;
      }
      //eee;

  }

}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
