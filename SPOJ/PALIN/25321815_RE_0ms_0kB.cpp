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

ll fun(ll i,ll j){
    
    if( (i==n/2 || j==n/2) )return (s[i]==s[j]);
	return ( (s[i]==s[j] )&&fun(i+1,j-1)  );
}
string  pali(ll a, ll b){

     ll f=0,d=0;
     string g=s;
     for(int i=a,j=b; i>=0 ; i--,j++){

            if(s[i]!=s[j]){

            	 if(s[i]>=s[j]) s[i]=s[j]=max(s[i],s[j]);
            	 else s[i]=s[j]=min(s[i],s[j]);
            }
     }
      f=lexicographical_compare(begin(g), end(g), begin(s), end(s));
     if(!f){
         s[a]=s[b]=s[a]+1;
     }
     

}
int main()
{
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);

     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  cin>>t;
  while(t--){
       
          cin>>s;
          n=s.size();
          x=n/2;
          if(fun(0,n-1)==1){
              
              ///cout<<" PAL ";
          	  if(n&1) s[x]=s[x]+1;
          	  else s[x]=s[x-1]=(s[x]+1);
          	  cout<<s<<endl; continue;
          }
          if(n&1) pali(x,x);
          else pali(x-1,x);
          cout<<s<<endl;

     
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///