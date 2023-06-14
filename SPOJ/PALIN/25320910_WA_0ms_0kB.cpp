#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;

#define D ll
ll n,x,t,c;
string s;
vector<D>v;

string  pali(ll a, ll b,string g){

     ll f=0,d=0;
     for(int i=a,j=b; i>=0 ; i--,j++){

          if(g[i]!=g[j]){  

          	  d++;
              if(!f) g[i]=g[j]=max(g[i],g[j]),f=1;
              else g[i]=g[j]=min(g[i],g[j]);
          }
     }

     if(d)g.pb('1');
     else g.pb('0');
     return g;
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

       ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  cin>>t;
  while(t--){
       
          cin>>s;
          n=s.size();
          x=n/2;
          if(n&1){
               
		  		s=pali(x,x,s);
		  	    c=s.back()-48;s.pop_back();
		  	    if(!c) s[x]=s[x]+1;
          }
          else{

          	  s=pali(x-1,x,s);
          	  c=s.back()-48;s.pop_back();
          	  if(!c) s[x]=s[x-1]=(s[x]+1);

          }
          cout<<s<<endl;

     
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///