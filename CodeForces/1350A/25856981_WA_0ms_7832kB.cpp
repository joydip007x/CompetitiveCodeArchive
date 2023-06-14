#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll n,x,t,m,k;
ll divx[1000100];

ll f(int j){

   if(divx[j])return divx[j];
   if(j%2==0)return divx[j]=2;
   ll o=3;
   while(j%o)o=o+2;
   return divx[j]=o;
}
int main()
{
  

        ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){

          cin>>n>>k;
          if(k%2==0)n+=(2*k);
          else n+=(2* k-1 )+f(n);
          cout<<n<<endl;
          

    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///