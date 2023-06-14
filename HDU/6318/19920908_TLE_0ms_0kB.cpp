#include<iostream>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<pair<int,int>, null_type,less<pair<int,int>>, rb_tree_tag,tree_order_statistics_node_update>

int main()
{
   ios::sync_with_stdio(false);cin.tie(0);
   int n,x,m;
   while(scanf("%d %d %d",&n,&x,&m))
   {
       ordered_set  oo;
       vector<int>v(n+1);
       int dd=0; m=min(x,m);
      for(int i= 0; i<n ; i++)
          scanf("%d",&v[i]);
      for(int i=n-1 ; i!=-1 ; --i){

         dd+=oo.order_of_key({v[i],-1});
          oo.insert({v[i],i});
      }
      printf("%d\n",m*dd) ;
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
