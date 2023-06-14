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
set<D>Q,SQ;
unordered_map<D, D >U;
unordered_map<D, int>vis;

std::vector<D> v,qu;
void bfs(D s){

   vis[s]=1;

   for(int i=0; i<adj[s].size() ; i++){

   	       if(!vis[ adj[s][i] ]) bfs( adj[s][i] );
   }
   v.pb(s);
}
int main()
{
   freopen("input.txt", "r+", stdin);
   freopen("output.txt", "w+", stdout);
    /*ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */
    
    sc(t);
    while(t--){

         sc(n); 
         U.clear();
         Q.clear();
         vis.clear();
         SQ.clear();
         qu.clear();
         v.clear();
         adj.clear();
         int ff=0, tot=0;;
         for(int i=0; i<n; i++){

                char x[505],y[660];
                string xx,yy;
         	    scanf("%s %s",&x,&y); xx=x; yy=y;
         	    U[xx]=yy; 
         	    if(xx==yy) ff=1;
         	    Q.insert(xx), Q.insert(yy); 
         	    qu.pb(xx); qu.pb(yy);	    
         }
         string start="",xans="No";
         for(auto i:Q) {
         	if(U[i].size()==0) { SQ.insert(i);  }
         	adj[i].clear();
         }
         printf("Case %d: ",++cnt);
         if(SQ.size()==0 || ff ){ PRINT; continue; }
         for(auto i:Q ){
         	 //if(Q.find(i)==Q.end() )
         	 	adj[ U[i] ].pb(i);
         }
         int fx=0;
         for(auto i: SQ){if(!vis[i])  bfs(i);}
         
         //for(auto i:v)cout<<i<<",";cout<<endl;
         for(int i=0,j=1 ; j<qu.size() ; i+=2,j+=2 ){

         	    string lo=qu[i]; string hi=qu[j];
         	    ll pos1=abs(distance(lower_bound( begin(v), end(v),lo),v.begin()));
         	    ll pos2=abs(distance(lower_bound( begin(v), end(v),hi),v.begin()));
         	    
         	    ///cout<<lo<< " : "<<hi <<endl;cout<<pos1<<" : "<<pos2<<endl;
         	    if( pos1>pos2){ fx=1;  break; }
         }
         if(!fx) {xans="Yes";PRINT;} 
         else { PRINT ; }
 
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///