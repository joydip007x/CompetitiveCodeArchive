

#include<bits/stdc++.h>

using namespace std;

#define ll                        int
#define  pb                          push_back
#define  o(c)                     scanf("%d",&c);
#define ret    return
#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)


#define  chk(x,y)         ( x>=1 && x<=m && y>=1 && y<=n )
#define  onEscap(x,y)      (x==1 || y==1 || x==m || y==n )

const ll sz=1100, inf=9999;
ll m,n,x1,yy,f1,f2,ansx; char x,gg[sz][sz];
ll g[ sz][sz],fvis[sz][sz]  ;
ll  vis[sz][sz],esc[sz][sz];
ll movx[ ]={ 1,0,-1,0 },movy[] ={0,-1,0,1};
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
     memset(g,-1,sizeof g); 
     memset(fvis,-1,sizeof fvis);
    bool ans=false;
     for ( ll i=1 ; i<=m ; i++)
     {
         for (ll j=1 ; j<=n ;j++)
         {
             cin>>x;
             gg[i][j]=x;
             if(x=='#') vis[i][j]=-1;
           else   if(x=='J') {x1=i; yy=j;}
           else   if(x=='F'){   xq.push(i) ;xq.push(j);  vis[i][j]=0; }
             else{
                vis[i][j]=inf;
             }

         }
     }
     firebfs();
    ll v= bfs(x1,yy);
   /// printf("Case %d: ",h+1);
    if(v!=-1){
   printf("%d\n",v+1);
     }
    else {  printf("IMPOSSIBLE\n"); }
    }

}



///*/////////////////// /// *
/*//    author-joydip007x  ///  */