#include<bits/stdc++.h>
using namespace std ;

#define ll         int 
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const int sz=50+50+25 ;
#define pp pair< pair<ll ,ll >,ll >
ll l,w,h;
ll movx[]={1,0,-1, 0 };
ll movy[]={0,1, 0, -1};

ll  dis[ sz] [sz] [sz] , vis[sz][sz][sz] ;
ll er,eh,ec,sr,sc,sh;
char ass[sz][sz][sz]  ;

bool valid( ll a , ll b , ll c){

   if(a>=0 && a<l && b>=0 && b<w ) {

      if(c>=0 && c<h) return true;
      return false; 
   }
   return false;

}
int bal[]={+1, -1} ;
// pair< pair<int ,int >,int>
ll  bfs( ll h , ll r , ll c ){

  queue< pp > q;
   q.push({ {h,r} , c});
   dis[h][r][c]=0;
   vis[h][r][c]=1;
   while( q.size() ){

      pp a=q.front();
      q.pop();

       for(int i=0 ; i<=3 ; i++){
            ll ma=a.first.second+movx[i];
            ll mb=a.second+movy[i];
            ll mc=a.first.first ;
            if( !valid(ma,mb,mc)  || ass[mc][ma][mb]=='#' ) continue;

            if( !vis[mc][ma][mb]   ){

              dis[mc][ma][mb] = dis[a.first.first][a.first.second][a.second]+1;
              q.push( { {mc,ma} ,mb } );
              vis[mc][ma][mb] =1;
              if(   ass[mc][ma][mb]=='E') return dis[mc][ma][mb];
             }
        }

         for(int i=0 ; i<=1 ; i++){
            ll ma=a.first.second;
            ll mb=a.second;
            ll mc=a.first.first+ bal[i] ;

            if(   !valid(ma,mb,mc) ) continue;

            if(ass[mc][ma][mb]=='-' && ass[a.first.first][ma][mb] ){

               if( !vis[mc][ma][mb] ){

              dis[mc][ma][mb] = dis[a.first.first][a.first.second][a.second]+1;
              q.push( { {mc,ma} ,mb } );
               vis[mc][ma][mb] =1;
              if(   ass[mc][ma][mb]=='E') return dis[mc][ma][mb];
              }

            }

        }
   }
   return dis[eh][er][ec];
}
int main(){

     while( scanf("%d %d %d",&l,&w , &h ) &&  l!=0 ){

        for(int kk=0 ; kk<h; kk++){
         for(int i=0 ; i<l; i++){
            char s[8000];
            scanf("%s",&s);
            for(int j=0 ; j<strlen(s) ; j++) {

                ass[kk][i][j]=s[j];
                if(s[j]=='S') sh=kk,sr=i,sc=j ;
                if(s[j]=='E') eh=kk,er=i,ec=j ;
             
             dis[kk][i][j]=vis[kk][i][j]=0;


            }
         }
        }
  
    
       ll   res=bfs(sh,sr,sc);
         if(res==INT_MAX) printf("-1\n");
         else printf("%d\n",res);

     }
}
/*
4 4 3
S..-
#.##
..#-
-#E.

...-
.###
.#.-
-#..

.#.-
.#.#
.#.-
...#
2 4 2
.-..
....

S--E
####
*/
