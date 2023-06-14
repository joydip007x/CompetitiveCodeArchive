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

#define  sz                         1002
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
string etc;
char v[sz][sz];
ll len[sz],vis[sz][sz] , la_of[sz];
ll xa[]={ 0,1,0,-1 } , ya[]={1,0,-1,0 },iL=0;
ll fi_of , locx,locy,niga,k;
bool valid( ll x , ll y)
{
  if (x>=0 && x<k  and y>=0 and y<85 and  v[x][y]==' ' )    ret true;
  ret false;
}
bool sexy(ll x,ll y)
{
    ll xx,yy;
    for( ll i=0 ; i<4 ; i++)
    {
        xx=x+xa[i]; yy=y+ya[i];
        if(v[xx][yy]!='*' and v[xx][yy]!='_' and v[xx][yy]!=' ' ) ret true;
    }
    ret false;
}
void dfs(ll x, ll y )
{
    vis[x][y]=1;
    if (  sexy (x,y)) v[x][y]='#';
    for( ll i=0 ; i<4 ; i++)
    {
      ll topx=x+xa[i] , topy=y+ya[i];
      if (   valid(topx,topy ) and !vis[topx][topy]  )
        dfs(topx,topy);
    }
}
void fuc()
 {
     ///mem(v,0);
     LOOP(i,0,102)
     {
         LOOP(j,0,102)
         {
             v[i][j]=' ';
         }
     }
     mem(len,0);
     mem(vis,0);
     mem(la_of,0);
     mem(len,0);
     fi_of = locx=locy=niga=iL=0;
     k=0;
 }
int main()
{
     ll tcas; cin>>tcas;
     getchar();
     LOOP(aa,0,tcas)
     {
         fuc();
         ll sti,stj;
         k=0;
         while(1)
            {
                len[k ]=0;
               while(1)
               {
                 char  ch=getchar();
                   if(ch=='\n' || ch==EOF) break;
                   if(ch=='*' ) { sti=k ; stj=len[k ]  ;}
                   v[k ][ len[k]++  ]=ch;
               }
               if(v[k][0]=='_') break;
               k++;
            }
            k++;
            dfs(sti,stj);
            if(v[sti][stj]=='*') v[sti][stj]=' ';
            LOOP(i,0,k)
            {
                ll lm=-1,j;
                for(  j=83 ; j>=0 ; --j)
                {
                    if(  v[i][j]!=' ')
                    {
                        lm=j; break;
                    }
                }
                LOOPeq(j,0,lm)
                {
                    cout<<v[i][j];
                }
                 eee;
             }

     }
}
/*
//         LOOP(i,0,iL)
//         {
//             LOOP(j,0,30)
//             {
//                 cout<<v[i][j]<<" ";
//             }
//             eee;
//         }

I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
