#include<iostream>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<pair<int,int>, nuint_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>

int main()
{
   //ios::sync_with_stdio(false);cin.tie(0);
   int n,x,m;
   while(scanf("%d %d %d",&n,&x,&m))
   {
       ordered_set  oo;
       int dd=0; m=min(x,m);
      for(int i=1 ; i<=n ; i++)
      {
          scanf("%d",&x);
          oo.insert({x,i});
          dd+= i-oo.order_of_key({x,-1})-1;

      }
      printf("%d\n",m*dd) ;
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
