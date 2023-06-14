#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  double a=0.00; ll divid=0;
  ll  n,x,t;
  scanf("%lld",&t);
  while(t--){
     scanf("%lld",&n);
     ll maxx=0,minx=200;
     while(n--){ cin>>x;  minx=min(minx,x);maxx=max(maxx,x);}
     printf("%lld\n",2*( maxx-minx) );
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
