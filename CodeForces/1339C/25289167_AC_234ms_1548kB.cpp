#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t;
vector<ll>v ;
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

   cin>>t;
   while(t--){

   	    cin>>n;
   	    v.clear();
        ll cur=0,god=0,ans=0,cnt=0;
   	    for(int i=0; i<n; i++) cin>>x,v.pb(x);
   	    for(int i=1; i<v.size(); i++){
                    
              if(v[i]>=v[i-1]) { cnt++; continue; }
              ll dif=log2(v[i-1]-v[i]);
            ///  cout<< i <<" "<<dif<<endl;
              v[i]=v[i-1];
              cur=max(cur,dif);
   	    }
   	    if(cnt==n-1) { cout<<0<<endl; continue; }
   	  ///  cout<<" CUR "<<cur<<" ";
   	    cout<<cur+1<<endl;
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///