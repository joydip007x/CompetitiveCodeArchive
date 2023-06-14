#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x;
vector<string >v ;
string s;
unordered_map<string ,ll>m;
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

       ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

  cin>>n;

  for(int i=0; i<n; i++){

       cin>>s;
       if(s.size()<4) { continue;}
       m[s]++;
       if(m[s]==1) continue;
       else v.pb(s);
  }
  
  if(v.size()==0){
     
     cout<<"SAFO"<<endl;
     return 0;
  }
  cout<<v.size()<<endl;
  for(auto i:v) cout<<i<<endl;
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///