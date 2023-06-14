#include<bits/stdc++.h>
using namespace std;
typedef int   ll;

#define pb push_back
#define pii pair<ll, pair <ll,ll > >
const int sz =50+10;

ll n,k;
ll tollx[sz][sz],timex[sz][sz], d[sz][1111];

ll bfs(   ){

  priority_queue<pii, vector<pii>,greater<pii> >q;
  q.push({0,{0,0}} );
  d[0][0]=0;
  while(!q.empty()){

     pii u=q.top(); q.pop();
     ll nd=u.second.first , ndt=u.second.second;
     for(int i=0 ; i<n; i++){

        if(i==nd || k<timex[nd][i]+ndt || d[i][ ndt+timex[nd][i] ]<d[nd][ndt]+tollx[nd][i] ) continue;
        d[i][ ndt+timex[nd][i] ]=d[nd][ndt]+tollx[nd][i] ;
        q.push({ d[i][ ndt+timex[nd][i] ], {i, timex[nd][i]+ndt  }} );
     }

  }

}
int main()
{
  ios::sync_with_stdio(false);cin.tie(nullptr); cout.tie(nullptr);
  while(scanf("%d %d" ,&n,&k )){
        if(!n and !k)  break;
        for(int i=0 ; i <n+5; i++) for(int j=0 ; j<=1010; j++) d[i][j]=INT_MAX;
        for(int i=0 ; i< n ; i++)
            for (int j=0; j<n ; j++)
                scanf("%d",&timex[i][j]);
        for(int i=0 ; i< n ; i++)
            for (int j=0; j<n ; j++)
                scanf("%d",&tollx[i][j]);
        bfs();
        ll ans=1<<30,ans2=INT_MAX;
        for(int i=0; i<k; i++){
            if(ans>d[n-1][i]) ans=d[n-1][i],ans2=i;
        }
        printf("%d %d\n", ans,ans2 ) ;
    }

}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
