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
ll a[100009];


int main()
{
  

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){

          cin>>n;
          for(int i=1; i<=n; i++)cin>>a[i];
          ll ans=1;
          for(int i=2; i<=n ;i++){
               ll cnt=1,prev=a[i];
               for(int j=2*i ; j<=n; j+=i){

                   if(a[j]>prev){ cnt++; prev=a[j];}
               }
               if(a[1]<a[i])cnt++;
               ans=max(ans,cnt);
             
          }
          cout<<ans<<endl;
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///