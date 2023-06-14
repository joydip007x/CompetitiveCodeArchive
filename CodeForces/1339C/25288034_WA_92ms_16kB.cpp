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
string s;
ll tim=1,god=0,bon=0;
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

   cin>>t;
   while(t--){

   	    cin>>n;
   	    v.clear();
   	    tim=1;
   	    god=bon=0;
   	    vector< ll >w;
   	    ll cur=0; ll ok=0,last=-1;
   	    for(int i=0; i<n; i++){

   	    	 cin>>x;
   	    	 v.pb(x);
   	    	 if(!i)continue;
   	    	 if(v[i-1]>v[i]){
                 
                 w.pb(1);
   	    	     if(last==-1){

   	    	     	   last=i;
   	    	     	   ok=v[i-1]-v[i];
   	    	     }
   	    	     else {
                       last=i;
                       ok+=(v[i-1]-v[i]);
   	    	     }
   	    	 }
   	    	 else {
   	    	 	    last=-1;
   	    	 	    cur=max(cur,ok); 
   	    	 	    ok=0;
   	    	 }
   	    }
   	    cur=max(cur,ok); 
   	    if(w.size()==0){ cout<<0<<endl; continue;}
   	    ll ans=log2(cur)+1;
   	    cout<<ans<<endl;
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///