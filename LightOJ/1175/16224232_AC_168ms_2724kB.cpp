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
#define  inf     0x3f3f3f3f
ll m,n,x1,yy,f1,f2,ansx; char x,gg[sz][sz];

#define  chk(x,y)         ( x>=1 && x<=m && y>=1 && y<=n )
#define  onEscap(x,y)      (x==1 || y==1 || x==m || y==n )
ll g[ sz][sz],fvis[sz][sz]  ;
ll  vis[sz][sz],esc[sz][sz];
ll movx[ ]={ 1,0,-1,0 },
movy[] ={0,-1,0,1};
queue<ll>xq;

int bfs(ll x,ll y )
{
    vis[x][y]=0;
    if(onEscap(x,y)) ret 0;
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
                      if(onEscap(tox,toy)) ret vis[tox][toy];
                     q.push(tox);q.push(toy);
                }
   }
   }
   ret -1;
}

void firebfs(  )
{
    ////////////////////
     for ( ll i=1 ; i<=m ; i++)
     {
         for (ll j=1 ; j<=n ;j++)
         {
             if(gg[i][j]=='F'){   xq.push(i) ;xq.push(j);  vis[i][j]=0; }
             }
     }
    /////////////
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
   }
}
int main()
{
 ///   fast;
 ll tcas;
 o(tcas);
 LOOP(h,0,tcas)
 {
     o(m);o(n);
     xq=queue<ll>();
     mem(g,-1); mem(fvis,-1);
    bool ans=false;
     for ( ll i=1 ; i<=m ; i++)
     {
         for (ll j=1 ; j<=n ;j++)
         {
             cin>>x;
             gg[i][j]=x;
             if(x=='#') vis[i][j]=-1;
           else   if(x=='J') {x1=i; yy=j;}
             else{
                vis[i][j]=inf;
             }

         }
     }
     firebfs();
    ll v= bfs(x1,yy);
    printf("Case %d: ",h+1);
    if(v!=-1){
   printf("%d\n",v+1);
     }
    else {  printf("IMPOSSIBLE\n"); }
    }

}

/*
 printf("Case %lld: ",h+1);
   printf("%lld\n",*min_element(all(pp))+1);
{  printf("IMPOSSIBLE\n"); }
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
