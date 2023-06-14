#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

#define oi(x) scanf("%lld",&x)
#define os(x) scanf("%s",&x)
#define sz 10000+100
ll n,lvl[sz],d=0,par[sz][1000] ,len[sz];
vector<pair<ll,ll>>adj[sz];
void dfs(ll root){

   for(auto it:adj[root]){
     if(lvl[it.first]!=-1) continue;
     par[it.first][0]=root; // 2^0== 1st parent set
     lvl[it.first]=1+lvl[root]; // level , needed for LCA
     len[it.first]=it.second+len[root]; // to answer DIST
     dfs(it.first);
   }

}
ll getLCA( ll na,ll nb){

  ll log,i;
  if(lvl[na] < lvl[nb ] ) swap(na,nb);  // rest of our calculation holds that lvl[na>=lvl nb ;
  for( log=0; (1<<log)<=lvl[na] ; log++);// how much of 2^x you can go ..
  --log;
  for( i=log ;i>=0  ;i--){
    if( lvl[na] - (1<<i)>=lvl[nb] ) na=par[na][i];}
  if(na==nb) return na;
  for( i=log ;i>=0  ;i--){
    if( par[na][i]!=-1 and par[na][i]!= par[nb][i] )
           na=par[na][i],nb=par[nb][i];
  }
  return par[na][0];
}
void getKth(){

    ll na,nb,nc,dd;
    oi(na);oi(nb);oi(nc);
    ll aa=getLCA(na,nb);
    if(aa==nb || aa==na){
    if(aa==nb) {} // we want to use par[][ 2^i] , means nb is upper, na is lower , thats ok ;
    else if(aa==na){
      dd=abs(lvl[na]-lvl[nb])+1;
      nc=abs(nc-dd)+1;
      swap(na,nb);
      }
    }
    else{
        if(nc> lvl[na]-lvl[aa]+1 ){
            dd=lvl[na]+lvl[nb]- (2*lvl[aa]) +1;
            nc=dd-nc+1;
            swap(na,nb);
        }
    }
   ll log,i;
  for( log=0; (1<<log)<=lvl[na] ; log++);
  --log;--nc;
  for( i=log ;i>=0  ;i--){
      if( (1<<i)<=nc ) {
             nc=nc- (1<<i);
             na=par[na][i];
        }
  }
  printf("%lld\n",na);
  return;
}
void getDist(){

    ll na,nb;
    oi(na);oi(nb);
    ll aa=getLCA(na,nb);
    printf("%lld\n",len[na]+len[nb]- 2*len[aa]);
    return;
}
int main()
{
  //https://github.com/rezwan4029/SPOJ-solutions/blob/master/913%20Query%20on%20a%20tree%20II%20%5BQTREE2%5D.cpp
  //http://one-problem-a-day.blogspot.com/2010/12/spoj-qtree2.html
  ll t,ccc=0;
  oi(t);
  while(t--){
    oi(n);
    for(ll i=0 ; i<=n+10; i++){
            lvl[i]=-1;adj[i].clear();
            len[i]=-1;
            for(ll j=0 ; (1<<j)<=n+10 ; j++) par[i][j]=-1;
    }
    for(ll i=1 ; i<n; i++){
        ll x,y,z;
        oi(x);oi(y);oi(z);
        adj[x].push_back({y,z});
        adj[y].push_back({x,z});
    }
    lvl[1]=len[1]=0;
    dfs(1);
    /* preprocess table */
    for(ll j=1; (1<<j)<=n ;j++){
        for(ll i=1  ; i<=n ; i++){
          if(par[i][j-1]!=-1)
              par[i][j]=par[par[i][j-1]] [j-1];
          }
    }
   
    for(ll i=0;  ;i++){
        char s[1000];
        scanf("%s",&s);
        if(s[1]=='T') getKth();
        else if(s[1]=='I') getDist();
        else break;
    }
     printf("\n");
  }
  return 0;
}
/*
1
14
9 2 1
2 10 2
2 5 3
5 3 4
3 11 6
12 3 5
5 7 7
7 4 8
4 8 10
4 1 9
1 13 12
1 14 11
7 6 15
KTH 11 6 4
DIST 9 12
DIST 9 11
KTH 8 1 3
KTH 6 14 1
DIST 12 2
KTH 12 12 1
DIST 12 12
DIST 12 6
KTH 10 3 3
DONE
*/
/*
7
13
14
1
6
12
12
0
31
5
*/


///author-joydip007x         ///
///Time&Date-Whenever i submit///
