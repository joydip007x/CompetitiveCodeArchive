#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);


#define pp pair< ll, pair<ll,ll > >
ll t ,o2,m,n,sx,sy,dx,dy;
string spa="   ";
ll a[110][110],vis[110][110];
void debugx();

ll movx[] ={ 1, -1, 0 , 0 , 1 , -1 , -1 , +1 };
ll movy[] ={ 0, 0, 1 ,-1 ,1 , 1 , -1, -1  };
bool valid( ll x, ll y){

   if( x>=0 && x<m && y>=0 && y<n) return true;
   return false;
}
string bfs( ll x, ll y , ll ex, ll ey,ll oxy){

//    cout<<" S "<<x<<","<<y<<" E= "<<ex<<","<<ey<<endl;
    vis[x][y]=1;
    queue< pp > q;
    q.push({  oxy, {x,y} });
    while(q.size() ){

         pp w=q.front();
         q.pop();
         ll ox=w.first;
         ll ux=w.second.first;
         ll uy=w.second.second;

         if(ox<1) continue;
         for(int i=0 ; i<=7 ; i++){

             ll nx=ux+movx[i];
             ll ny=uy+movy[i];
             if( !valid( nx,ny ) || vis[nx][ny]>0 || a[nx][ny]==-1  ) continue;

             q.push( { ox-1, { nx,ny } } );
             if( ox>=1 &&  nx==ex && ny==ey ) return "Possible";
             vis[nx][ny]=1;
         }
    }
    return "Impossible";

}
int main(){

    cin>>t;
    while(t--){
         cin>>o2>>m>>n;
         getchar();
         memset(a,-1,sizeof a);
         for(int i=0 ; i<m ; i++){

             string s;
             getline(cin,s);
             for(int j=0 ; j<s.size() ; j++){
                 if(s[j]=='S') { sx=i;sy=j; a[i][j]=1; }
                 if(s[j]=='T') { dx=i; dy=j; a[i][j]=1; }
                 if(s[j]=='#') a[i][j]=-1;
                 else if(s[j]==spa[0])a[i][j]=1;
                 vis[i][j]=0;
             }
         }
         printf("%s\n", bfs(sx,sy,dx,dy,o2).c_str() );

    }

}
void debugx(){

 cout<<" OUTPUT:\n";
         for(int i=0 ; i<m ; i++){

             for(int j=0 ; j<n ; j++){

                 cout<<a[i][j];

             }
             cout<<endl;

         }
}
