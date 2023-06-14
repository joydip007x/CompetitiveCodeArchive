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
ll n,t,cnt=0;

map<D,vector<D> >adj;
#define sc(c) scanf("%d",&c);
set<D>Q;
unordered_map<D, D >U;
unordered_map<D, int>vis;

ll bfs(D s){

    queue<D>pq;
	pq.push(s);
    vis[s]=1;

	while(pq.size() ){
         
         D x=pq.front(); pq.pop();

         for(int i=0; i<adj[x].size() ; i++){

         	  D tmp=adj[x][i];
         	  if( vis[tmp] ) { return 0;}
         	  vis[tmp]=1;
         	  pq.push(tmp);
         }

	}
    return 1;
}
int main()
{
   // freopen("input.txt", "r+", stdin);
    //freopen("output.txt", "w+", stdout);
    /*ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */
    
    sc(t);
    while(t--){

         sc(n); 
         U.clear();
         Q.clear();
         vis.clear();
         int ff=0;
         for(int i=0; i<n; i++){

                char x[505],y[660];
                string xx,yy;
         	    scanf("%s %s",&x,&y);
         	    xx=x; yy=y;
         	    ///cout<<" IO "<<xx<<" : "<<yy<<endl;
         	    U[xx]=yy; 
         	    if(xx==yy) ff=1;
         	    Q.insert(xx), Q.insert(yy);  	    
         }
         string start="",xans="No";
         for(auto i:Q) {
         	///cout<<" WOW "<<i<<" "<<U[i]<<" ><><> "<<U[i].size()<<endl;
         	if(U[i].size()==0) {start=i;  }
         	adj[i].clear();
         }
         ///cout<<" OK "<<start<<endl;
         printf("Case %d: ",++cnt);
         if(start.size()==0 || ff ){ PRINT; continue; }
         for(auto i:Q ){
         	 if(i!=start) adj[ U[i] ].pb(i);
         }
         if(bfs(start)) {xans="Yes"; PRINT; } 
         else { PRINT ; }
 
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///