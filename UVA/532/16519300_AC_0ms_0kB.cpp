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

#define  szz                        32
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


#define valid(z,x,y)  x>=0 and x<ro && y>=0 && y<col && z>=0 && z<lvl
char graph[szz][szz][szz]  ,en='E';
ll  vis[szz][szz][szz],lvl , ro, col ,sz,sx,sy;
//ll mvx[]={0,1,0,-1} ,
//    mvy[]={1,0,-1,0},
//    dx3[]={0,+1,-1};
 int mov[6][3] = { { 1, 0, 0 }, { 0, 1, 0 }, { 0, 0, 1 }, { -1, 0, 0 }, { 0, -1, 0 }, { 0, 0, -1 } };
int bfs( ll z, ll x,ll y )
{
   vis[z][x][y]=0;
   queue<int>q;
   q.push(z),q.push(x),q.push(y);
   int tpz,tpx,tpy;
   while(!q.empty())
   {
       tpz=q.front();q.pop();tpx=q.front();q.pop();tpy=q.front();q.pop();
     ////  for(int k=0 ;  k<=2 ; k++)
       {
            for (int i=0 ; i<6 ; i++)
            {
                int cz=tpz+(mov[i][ 0 ] ) ; int cx=tpx+ (mov[i][1]  ) ; int cy=tpy+mov[i][2];
                if(   valid(cz,cx,cy) and vis[cz][cx][cy]==-1  )
                {
                    q.push(cz),q.push(cx),q.push(cy);
                    vis[cz][cx][cy]=vis[tpz][tpx][tpy]+1;
                    if(graph[cz][cx][cy]=='E') ret  vis[cz][cx][cy];
                }
            }
       }
   }
   ret -1;
}
void clea()
{
    mem(vis,-1);
    mem(graph,0);
}
int main()
{
 while ( 1)
 {
     scanf("%d %d %d",&lvl,&ro,&col) ;
     if (!lvl || !ro || !col  ) break;
     clea();
    /// getchar();
      string f,rox;
        for(int k=0 ; k<lvl ; k++)
        {
            getline(cin,f);
            for(int i=0 ; i<ro ; i++)
            {
                 cin>>rox;
                for(int j=0 ; j<rox.size() ; j++)
                {
                    char c=rox[j];
                    ///scanf("%c",&c);
                    if(c=='S'){ sz=k;sx=i;sy=j;  }
                    if(c=='#') {vis[k][i][j]=-99;}
                    graph[k][i][j]=c;
                }
            }
            ///getchar();
        }
   int res=-1;
  /// cout<<"STARTING BFS "<<sz<<" "<<sx<<" "<<sy<<endl;
     res=bfs(sz,sx,sy);
    if(res<0) printf("Trapped!");
    else printf("Escaped in %d minute(s).",res);
    printf("\n");
 }

}
/*
3 4 5
S....
.###.
.##..
###.#

#####
#####
##.##
##...
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
