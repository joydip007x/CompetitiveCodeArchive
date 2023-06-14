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
ll cmp(ll a){

	ll f=1,cnt=0;
	if(a==1){

		  god+=1;
		  return 0;
	}
	////////////////////
	for(ll  i=1; (i+god)<a ;i=i*2){ f=i*2; cnt++; }
	if(cnt==0)return 1;
    god+=(f);
    bon+=abs(a-f);
    return god;
}
bool cmxp( const pair<ll,ll>&A , const pair<ll,ll>&B){
	   return (A.second<B.second);
}
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
   	    vector< pair<ll,ll> >w;
   	    ll cur=0; ll ok=0;
   	    for(int i=0; i<n; i++){

   	    	 cin>>x;
   	    	 v.pb(x);
   	    	 if(!i)continue;
   	    	 if(v[i-1]>v[i]){

   	    	 	  ll h=v[i-1]-v[i]+ok;
   	    	 	  h=log2(h);
   	    	 	  cur=max(cur,h);
   	    	 	  w.pb({0,0});
   	    	 	  ok+=v[i-1]-v[i];
   	    	 }
   	    }
   	    if(w.size()==0){ cout<<0<<endl; continue;}
   	    cout<<cur+1<<endl;
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///