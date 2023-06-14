#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t,y,vis[1100],tot=0;
vector<ll>v,ans;
map<ll,ll>m,nm;

set<ll>ms,s;
#define q '?'

int main(){
   
   	 cin>>n;
   	 for(int i=0; i<n; i++){

   	 	   for(int j=0; j<n; j++){

   	 	   	       cin>>x;
   	 	   	       m[x]++;
   	 	   	      v.pb(x);
   	 	   }
   	 }
   	 if(m.size()==1){
           
           auto ii=m.begin();
   	 	   for(int i=0;i<n; i++)cout<<ii->first<<" ";cout<<endl;
   	 	   return 0;
   	 }
     sort(begin(v), end(v));
     reverse(begin(v), end(v));
     for(int i=0; i<n; i++) {
     	
     	if(s.find(v[i])==s.end() ){

     			 cout<<v[i]<<" ";
     			 s.insert(v[i]);

     }
     }
     cout<<endl;

}



///author-joydip007x         ///
///Time&Date-Whenever i submit///