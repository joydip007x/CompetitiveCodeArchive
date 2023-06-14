#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define sz 100000+100
#define o(x)  scanf("%d",&x);
ll n,x,y,t,d[sz], col[sz];
vector<ll>adj[sz];
unsigned long long tmpx, tmpy ;
bool st1,st2;
ll bfs(ll s, ll rgb){

  col[s]=rgb;
  queue<int>q;
  q.push(s);q.push(rgb);
  while(!q.empty()){
    int u=q.front();q.pop();
    int color=q.front(); q.pop();
    for(int i=0 ; i<adj[u].size() ; i++){
        if(col[adj[u][i]] !=-1) continue;
        q.push(adj[u][i]);
        if(color==0) q.push(1);
        else q.push(0);
    }

  }

}
int main()
{

  o(t);
  while(t--){
    o(n);
    st1=st2=false;
   // for(int i=0 ; i<=n+10; i++) adj[i].clear(),d[i]=col[i]=-1;
    for(int i=0 ; i<n; i++) {  o(d[i]);adj[i].clear() ;col[i]=-1;  }
    for(int i=0 ;i<n-1;i++) {
        o(x);o(y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    bfs(1,0);
    for(int i=0 ; i<n; i++) {

       if(col[i]==0) {
        if(st1) tmpx=tmpx^d[i];
        else st1=true, tmpx=d[i];
       }
       if(col[i]==1) {
        if(st2) tmpy=tmpy^d[i];
        else st2=true, tmpy=d[i];
       }
    }
    if(tmpx!=tmpy) printf("Q\n");
    else printf("D\n");
  }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
