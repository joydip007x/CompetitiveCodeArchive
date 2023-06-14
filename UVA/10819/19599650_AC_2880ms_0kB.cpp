#include <bits/stdc++.h>
using namespace std;

#define MX 999
#define ll int
#define ret return

#define sz2 999999
///*/////////////////// /// *
/*//    author-joydip007x  ///  *
///     Date<^>XX/08/2018    *///

ll n,o,als, dp[109][sz2] ,v[109],mon,p[109];
#define inf INT_MIN
ll knapsx( ll ind, ll p1  )
{

    if(ind==n || p1>=mon+200  ) {
         if( p1<=mon || (p1>2000 and p1<=mon+200) ) return 0;
         return inf+999999 ;
    }
    if(dp[ind][p1]!=-1 ) ret dp[ind][p1];
    ll cal1=inf , cal2=inf ;
    cal1= v[ind]+ knapsx(ind+1 , p1+p[ind]);
    cal2= knapsx(ind+1 ,p1);
    return dp[ind][p1]=max(cal1,cal2);
}
int main()
{

  while( scanf("%d",&mon)!=EOF )
  {
      scanf("%d",&n);
      memset(dp,-1,sizeof dp);
     for (int i = 0; i < n; ++i)
     {
        scanf("%d %d",&p[i],&v[i]);
     }
     printf("%d\n",knapsx(0,0));
  }
}
