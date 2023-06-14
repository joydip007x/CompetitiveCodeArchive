#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;
typedef  double  lll;

lll q,n,a[120];
lll dp[120];

lll rec( ll ind ){

   if(ind==n) return 0.00;
   if(dp[ind]!=-1.00) return dp[ind]*1.00;
   lll s=0.00; ll cnt=0;;
   for(int i=1; i<=6; i++){
       if(ind+i>n) continue;
       lll p=rec(ind+i);
       s=s+p+a[ind+i];
       cnt++;
   }
   dp[ind]=s/(cnt*1.0);
   return dp[ind];

}
int main()
{
  cin>>q;
ll  gg=0;
  while(q--){
      cin>>n;
      for(int i=1 ; i<=n ; i++) cin>>a[i],dp[i]=-1.00;
      lll tot=a[1]+rec(1);
      cout<<"Case "<<++gg<<": ";
      cout<<setprecision(10)<<fixed<<tot<<endl;
  
} return 0;
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///
