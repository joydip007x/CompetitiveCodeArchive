#include<bits/stdc++.h>
using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  pb                          push_back
#define  sz                         1000000
#define  o(c)                     scanf("%lld",&c);
#define ll                        long long
#define  ret                     return
///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
#define MOD 100000007
#define sz2 1000
#define sz3 5
vector<int>a ;
vector<ll>tmp;
int n,x;
ll dp[sz2][sz2], sum[sz2][sz2];
ll mcm( int s, int e  ){

  if(s==e) { return 0;     }
  if( dp[s][e]!=-1 ) return dp[s][e];
  ll mp=LLONG_MAX,ax,bx,tx,ty;
  for(int i=s ; i<e ; i++){
     ax=mcm(s,i);
     bx=mcm(i+1,e);
     mp=min(mp,  ax+bx+ (sum[s][i]*sum[i+1][e]  )  );
  }

  return dp[s][e]=mp;
}
int main()
{
     while(scanf("%d",&n)!=EOF){
            
            ///https://codinghangover.wordpress.com/2014/02/16/spojmixtures-mixtures-dynamic-programming/

      memset(dp,-1,sizeof dp);
      memset(sum,0,sizeof sum);
      a.clear(); a.pb(0);
      for (int i=1; i<=n  ; i++ )
      {
          scanf("%d",&x);
          a.pb(x);
      }
      for(int i=1; i<=n ;i++)
      {
          for(int j=i; j<=n ; j++){

            sum[i][j] = sum[i][j-1] +a[j];
            sum[i][j]=sum[i][j]%100;
            ///cout<<"sum["<<i<<"]["<<j<<"] = "<<sum[i][j]<<endl;
          }
      }
      ll ans=mcm(1,n);
      cout<<ans<<endl;

     }

}
