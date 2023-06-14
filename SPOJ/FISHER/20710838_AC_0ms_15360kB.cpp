#include<bits/stdc++.h>
using namespace std;
typedef int   ll;
typedef int64_t   lll;
#define pb push_back
const int sz =50+10;

lll lmt;
ll n,k;
ll tollx[sz][sz], timex[sz][sz] , visited[sz] ;
ll ans1,ans2;
void  makabhosda( ll u, ll tim, ll toll ){

   if(tim>k) return;
   if(u+1==n){
         if(ans1 >toll) {
            ans1=toll; ans2=tim;
         }
         return;
   }
   for(ll i=0 ; i<n; i++){

      if( i==u || visited[i] || tim+timex[u][i]>k || toll+tollx[u][i]>ans1 ) continue;
      visited[i]=1;
      makabhosda(i,tim+timex[u][i] , toll+tollx[u][i] );
      visited[i]=0;
   }
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
  while(scanf("%d %d" ,&n,&k )){
        if(!n and !k)  break;
        for(int i=0 ; i< n ; i++)
            for (int j=0; j<n ; j++)
                scanf("%d",&timex[i][j]), visited[i]=0;
        for(int i=0 ; i< n ; i++)
            for (int j=0; j<n ; j++)
                scanf("%d",&tollx[i][j]);
        visited[0]=1;
        ans1=ans2=INT_MAX;
        makabhosda(0,0,0);
        printf("%d %d\n", ans1, ans2 ) ;
    }

}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
