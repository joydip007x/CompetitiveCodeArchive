#include<bits/stdc++.h>
using namespace std ;
 
#define ll            int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const int sz=20+20+2;

#define p pair<ll,ll>
int m,n,gold[sz*sz][sz*sz] ,dest,start,g[sz*sz][sz*sz],mxflw,par[sz*sz];

int dirX[]={1,-1,0,0};
int dirY[]={0,0,1,-1};
map<p,ll> mop;

ll revmop( ll x,ll y){
	return (n*m)+mop[{x,y}];
}
bool bfs(ll st, ll en){

   memset(par,-1,sizeof par);
   par[st]=st;
   queue<ll>q;
   q.push(st);
   while(q.size() ){

   	   ll u=q.front() ;  q.pop() ;
   	   for(int i=1; i<=dest;i++){

   	   	   if( par[i]!=-1 || g[u][i]<=0  ) continue;
   	   	   q.push(i);
   	   	   par[i]=u;
   	   	   if(i==dest) return true; 
   	   } 

   }
  return false;
}
int main(){
  
  /*  freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
     int t;
     sc(t);
     for(int cas=1; cas<=t ; cas++){

            sc(m);sc(n);
            memset(g,0,sizeof g);
            memset(gold,0,sizeof gold);
            mop.clear();
            int cnt=0;
            for(int i=0; i<m; i++){
                  
                  char s[n+323];
            	  scanf("%s",&s);
            	  for(int j=0; j<strlen(s);j++){

            	  	  if(s[j]=='*') {gold[i+1][j+1]=1; cnt++;}
            	  	  else gold[i+1][j+1]=0;
            	  }
            }
            for(int i=1; i<=m; i++){
            	if(i==1){
            		for(int j=1; j<=n; j++) {
            			mop[{i,j}]=j; 
            		}
            		continue; 
            	}
            	for(int j=1; j<=n; j++){
            		mop[{i,j}]=mop[{i-1,j}]+n;
            	}
            }
/*            cout<<" DEB \n";
*/            dest=(2*n*m)+2;
            start=0;
            for(int i=1; i<=m; i++){
            	 for(int j=1; j<=n; j++){
                     
                     if(!gold[i][j]) continue;
                     g[0][ mop[{i,j}] ]=1;
                     g[ revmop(i,j) ][ dest ]=1;
            	 	 for(int k=0 ; k<=3; k++){

            	 	 	ll nx=i+dirX[k];
            	 	 	ll ny=j+dirY[k];
            	 	 	if(!gold[nx][ny]) continue;
            	 	 	g[ mop[{i,j}] ][ revmop(nx,ny) ]=1;
            	 	    g[0][ mop[{nx,ny}] ]=1;
                        g[ revmop(nx,ny) ][ dest ]=1;
            	 	 }
            	 }
            }
            mxflw=0;
            while(bfs(start,dest)){

             for(int i=dest; par[i]!=i ; i=par[i]) --g[par[i]][i],++g[i][par[i]];
              mxflw++;
            }
/*            cout<<" SO BAL "<<mxflw<< " TG= "<<cnt<<endl;
*/            ll ans=(ll)mxflw/2; 
            ans+=abs(cnt-(2*ans));
            printf("Case %d: %d\n",cas, ans);
     }
}
        /*    cout<<" DEBUG  2 : \n";
            for(int i=1; i<=m ; i++){

                for(int j=1 ; j<=n ; j++){
                	/// cout<< i <<" : "<<j<<" = "<<g[i][j]<<endl;
                	 cout<< i <<" : "<<j<<" = "<<mop[{i,j}]<<endl;
                }
            }
            cout<<"------------------------------\n";*/
          /*  cout<<" DEBUG 1 : \n";
            for(int i=1; i<=m ; i++){

                for(int j=1 ; j<=n ; j++){
                	/// cout<< i <<" : "<<j<<" = "<<g[i][j]<<endl;
                	 cout<< i <<" : "<<j<<" = "<<gold[i][j]<<endl;
                }

            }
            cout<<" ----------------------------\n";*/