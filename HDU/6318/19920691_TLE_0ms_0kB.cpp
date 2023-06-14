#include<iostream>
using namespace std;
typedef long long ll;
#define sz 200009
ll n,x ,m,ans=0LL ;

ll timer;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>

int main()
{
   ios::sync_with_stdio(false);cin.tie(0);
   while(cin>>n>>x>>m)
   {
       ordered_set  oo;
       ll dd=0;
      for(int i=1 ; i<=n ; i++)
      {
          cin>>timer;
          oo.insert({timer,i});
          dd+= i-oo.order_of_key({timer,-1})-1;

      }
      printf("%lld\n",min(x,m)*dd) ;
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
