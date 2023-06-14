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

#define  sz                         210
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

ll m,n,x1,yy,f1,f2,ansx; char x;

#define  chk(x,y)         (g[x][y]!=-1  && x>=1 && x<=m && y>=1 && y<=n )
ll g[ sz][sz],fvis[sz][sz],jvis[sz][sz],esc[sz][sz], tim=0;
ll movx[ ]={ 1,0,-1,0 },movy[] ={0,-1,0,1};
void dfs(ll x,ll y, ll vis[ ][sz] )
{
   queue<ll>q; q.push(x);q.push(y);
   while (!q.empty()){
        ll now1=q.front();q.pop();
    ll now2=q.front();q.pop();
   for ( ll xx=0; xx<4 ; xx++  )
   {
       ll tox=now1+movx[xx] , toy=now2+movy[xx];
       if (  chk(tox,toy ) and  vis[ tox][toy ] >vis[now1][now2]+1)
                  {
                      vis[tox][toy]=vis[now1][now2]+1;
                     q.push(tox);q.push(toy);
                }
   }
  /// tim++;
   }
}
ll orivs[sz][sz], cic=0;
queue<ll>xq;
void xdfs( ll vis[ ][sz] )
{
   queue<ll>q;
   q=xq;
   while (!q.empty()){
        ll now1=q.front();q.pop();
    ll now2=q.front();q.pop();
   for ( ll xx=0; xx<4 ; xx++  )
   {
       ll tox=now1+movx[xx] , toy=now2+movy[xx];
       if (  chk(tox,toy ) and vis[tox][toy]>vis[now1][now2]+1     )
                  {

                      vis[tox][toy]=vis[now1][now2]+1;
                     q.push(tox);q.push(toy);

                }
   }
  /// tim++;
   }
}
int main()
{
    fast;
 ll tcas; ///cin>>tcas;
 o(tcas);
 LOOP(h,0,tcas)
 {
     ///cin>>m>>n;

     xq=queue<ll>();
     o(m);o(n);
     mem(g,-1); mem(fvis,-1);
     mem(jvis,-1);
    mem(esc,-1);tim=0,ansx=0;
    bool ans=false;
     for ( ll i=1 ; i<=m ; i++)
     {
         for (ll j=1 ; j<=n ;j++)
         {
             cin>>x;
             //o(x);
           jvis[i][j]= fvis[i][j]=9999;
             if(x!='#') g[i][j]=1;
             if( (i==1 || i==m || j==1 || j==n )  && (x=='.' || x=='J' ) ){esc[i][j]=1;}
             if(x=='J') {x1=i; yy=j;}
             if(x=='F'){f1=i; f2=j; jvis[i][j]=esc[i][j]=-1;  fvis[i][j]=0; xq.push(i);xq.push(j);  }
         }
     }
     tim=1;
     jvis[x1][yy]=0; fvis[f1][f2]=0;
     if(  esc[x1][yy]==1 ) {  printf("Case %lld: 1\n",h+1);
                                     /*cout<<"Case "<<h+1<<": 1"<<endl; */continue;}
     dfs(x1,yy , jvis );
     tim=1;
    /// dfs(f1,f2,fvis );
    xdfs(fvis);

      vector< ll >pp;
       for ( ll i=1 ; i<=m and !ans ; i++)
     {
         for (ll j=1 ; j<=n && !ans ;j++)
         {
            if(esc[i][j]==1)
            {
                if (  jvis[i][j]==0 || (jvis[i][j] !=-1 && jvis[i][j]<fvis[i][j] )  || ( fvis[i][j]==-1 && jvis[i][j]>fvis[i][j] ) )   { pp.pb(jvis[i][j]);ansx=2;
                        ////ansx=jvis[i][j]; ans=true;
                      ///  if(jvis[i][j]==0) {ansx=-1;}
                }
//               cout<<"in - ["<<i<<"]["<<j<<"]   jane came at = "<<jvis[i][j]<<" second ";eee;
//                cout<<"in - ["<<i<9<"]["<<j<<"]  fire came at = "<<fvis[i][j]<<" second ";eee;
            }
            ///eee;
         }
        }

     //cout<<"Case "<<h+1<<": ";
     printf("Case %lld: ",h+1);
     if(ansx!=0) {

            printf("%lld\n",*min_element(all(pp))+1);
           // cout<<*min_element(all(pp))+1<<endl;
           }
     else{  printf("IMPOSSIBLE\n"); }
 }

}

/*
2
4 5
##J##
#.F.#
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
