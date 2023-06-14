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

#define  sz                         102
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%d",&c);
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
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

ll n;
vector<ll>g[sz];
bool vis[sz];
void bfs( ll x)
{
    mem(vis,false);
    queue<ll>q;
    q.push(x);
    while(!q.empty()){
    ll ns=q.front();q.pop();
    for ( ll j=0 ; j<g[ns].size() ; j++  )
    {
        if( !vis[ g[ns][j] ]){
                vis[  g[ns][j] ]=true;
            q.push( g[ns][j] );  }
    }
    }
    ll cont=0;
    for(ll i=1;i<=n;i++) {if(!vis[i]) cont++;   }
    printf("%d",cont);
   for(ll i=1;i<=n;i++) {if(!vis[i]) printf(" %d",i);  }
   printf("\n");
}
void fuckall( ll x)
{
     LOOPeq(i,1,x){ g[i].clear() ;}
    mem(vis,false);
}
int main()
{
    ///fast;
  while( scanf("%d",&n) && n!=0)
  {
      //fuckall(n );
      ll tc,l,k=0;
    //  for(  ;   ;)
          ll a,b;
          while(1){
            scanf("%d",&a);
            if(a==0) {break;}
            while(1){
                scanf("%d",&b);
                if(b==0) {break;}
                g[a].push_back(b);
            }
         }
     //cin>>tc;
     o(tc);
      for(ll i=0 ;  i<tc; i++)
      {
         // cin>>l;
         o(l);
          bfs(l);
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
