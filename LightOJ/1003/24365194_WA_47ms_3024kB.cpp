#include<bits/stdc++.h>
using namespace std;
typedef int  ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

#define D string 
#define PRINT printf("%s\n", xans.c_str());

const int N = 10000+2;
const int mod = 1e9 + 7;
ll n,t,cnt=0, fx;

#define sc(c) scanf("%d",&c);

map<D,vector<D> >adj;
set<D>Q,SQ;
unordered_map<D, D >U;
unordered_map<D, int>vis;

std::vector<D> v,qu;
void bfs(D s){
     
     vis[s]=1;
     for(int i=0; i<adj[s].size() ; i++){

             D t=adj[s][i];
             if( vis[t]) { fx=1; return;}
             bfs(t);
     }
     return;
}
int main()
{
   //freopen("input.txt", "r+", stdin);
  //// freopen("output.txt", "w+", stdout);
    /*ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */
    
    sc(t);
    while(t--){

         sc(n); 
         string start="",xans="No";
         int ff=0, tot=0;   fx=0;
         adj.clear(); U.clear(); v.clear(); qu.clear();
         vis.clear(); Q.clear(); SQ.clear();
         for(int i=0; i<n; i++){

                char x[505],y[660];
                string xx,yy;
         	    scanf("%s %s",&x,&y); xx=x; yy=y;
         	    if(xx==yy) ff=1;
                adj[xx].pb(yy);
         	   
         }
         printf("Case %d: ",++cnt);
         if( ff ){ PRINT; continue; }
         for(auto i: Q) { if (!vis[i]) { bfs(i); if(fx)break; }  }      
         if(!fx) {xans="Yes";PRINT;} 
         else { PRINT ; }
 
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///