#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
#define P
ll n,x,k,t,y,m,tot=0;
vector < ll >v,v2;
int main()
{    
    
	 cin>>n>>m;
	 for(int i=0; i<n; i++) {cin>>x;v.pb(x);}
	 for(int i=0; i<m; i++){
	 	   cin>>x>>y;
	 	   if(x==3) cout<<v[y-1]+tot<<endl;
	 	   else if(x==2) tot+=y;
	 	   else{
	 	        cin>>x;
	 	        v[y-1]=x;
	 	   }
	 }
	 
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///