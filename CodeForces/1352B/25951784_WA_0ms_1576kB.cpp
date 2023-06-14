#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll n,x,t,k;
ll a[100009],dp[100009];
string s;
vector<ll>ans;
ll fun(){ cout<<ans.size()<<" OK: ";for(auto i:ans)cout<<i<<" ";cout<<endl;}
ll fun2(){

    ll c=0;
    for(auto i:ans)c+=i%2;
    if(c==k || c==0)return 0;
    return 1;
}
int main()
{
  

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){
           

           cin>>n>>k;
           ans.clear();
           if((k%2==0 && n%2) || (n/k)<1 ){cout<<"NO\n"; continue;}
           if(n%k==0){ cout<<"YES\n";for(int i=0; i<(k);i++)cout<<(ll)n/k<<" ";cout<<endl; continue;}
           ll cnt=-1;
           if((k%2==1 && n%2==1) ) cnt=1;
           else if( k%2 && n%2==0) cnt=2;
           ll p,r;
           p=n/k; r=n%k;
           for(int i=0; i<k-1; i++)ans.pb(p);
           ans.pb(p+r);
          /// fun();
           if((p+r)%2==p%2 ){cout<<"YES\n";for(auto i:ans)cout<<i<<" ";cout<<endl;continue;}
           if(ans.size()==2){cout<<"NO\n";continue;}
           for(int i=0,j=1 ; j<k-1; j+=2,i+=2){--ans[i];++ans[j];}
         //  fun();
           if(fun2()){cout<<"NO\n"; continue;}
           cout<<"YES\n";for(auto i:ans)cout<<i<<" ";cout<<endl;
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///