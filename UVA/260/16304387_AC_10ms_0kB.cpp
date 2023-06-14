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

#define  sz                         202
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
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

#define valid(x,y)    (x>=0 && x<cas && y>=0 && y<cas )
vector<char>g[sz];
ll vis[sz][sz];
ll movx[]={  -1, 1, 0, -1, 0, 1 },
movy[ ]=  {  -1, 1, -1, 0, 1, 0 };
ll cas;
bool bfs(ll x, ll y)
{
    vis[x][y]=1;
    queue<ll>S;
    S.push(x);S.push(y);
    while(!S.empty()){
            ll x=S.front();S.pop();
            ll y=S.front();S.pop();
    for(ll i=0 ; i<6 ; i++)
      {
        ll nx=x+movx[i], ny=y+movy[i];
         if (  valid(nx,ny) && vis[nx][ny]==0  &&  g[nx][ny]=='b'  )
         {
             if(nx==cas-1) ret true;
            vis[nx][ny]=1;
            S.push(nx);S.push(ny);
         }
      }
    }
   ret false;
}
void cle( ll m)
{
       for(int i=0 ; i<=m ; i++)
       {g[i].resize(m);}
}
int main()
{
    ///fast;
    int tes=1;
   while(   scanf("%d",&cas) and cas!=0 ){
        cle(cas);
        getchar();
   for(int z=0 ; z<cas ; z++)
     {
         string s; cin>>s;
         for(int c=0 ; c<s.size() ; c++)
         {
             g[z][c]=s[c];
             if(s[c]=='b')vis[z][c]=0;
             else vis[z][c]=-1;
         }
     }
     bool re=false;
     printf("%d ",tes++);
     for(int z=0 ; z<cas  ; z++)
     {
         if ( vis[0][z]==0 )
         {
             re=bfs( 0 ,z );
              if(re) {printf("B\n"); break;}
         }
     }
     if(!re) printf("W\n");
   }

}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
