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

#define  sz                         30
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
#define ll                       int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return


#define valid(x,y)  x>=0 && y>=0 && x<ro && y<col
ll vis[sz][sz],graph[sz][sz];
ll ro,col,a,b;
ll mvx[]={0,1,0,-1} , mvy[]={1,0,-1,0},cnt=0,pp=-88;
int dfs(ll x,ll y )
{
    vis[x][y]=1;
    cnt++;
    for(int j=0 ; j<4 ; j++)
    {
        ll sux=x+mvx[j],suy=y+mvy[j];
        if(  valid(sux,suy) && !vis[sux][suy] )
             dfs(sux,suy);
    }
    ret cnt;
}
void clea()
{
    mem(vis,0);
    pp=-999;cnt=0;
}
int main()
{
 while (  bool(cin>>ro>>col)==true )
 {
     clea();
     for(int i=0 ; i<ro ; i++)
     {
         for(int j=0 ; j<col ; j++)
         {
             char c;cin>>c;
             if(c=='w'){  graph[i][j]=-1; vis[i][j]=-1; }
             else graph[i][j]=1;
         }
     }
     cin>>a>>b;
     dfs(a,b);
     cnt=0;
     for(int i=0 ; i<ro ; i++)
     {
         for(int j=0 ; j<col ; j++)
         {
           if(!vis[i][j])
           {
               cnt=0;
               pp=max(pp,dfs(i,j));
           }
         }
     }
     cout<<pp<<endl;
 }

}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
