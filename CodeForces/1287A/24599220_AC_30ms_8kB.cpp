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
vector<ll>v ;
string s;

int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

        ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr);  ll t;
    cin>>t;
    while(t--){


          cin>>n>>s;
          ll cnt=150+1; ll c=0, f=0;
          while(cnt--){

               f=0; vector<ll>tm;
               for(int i=0; i<n; i++){

               	   if(s[i]=='A' && i+1<n && s[i+1]!='A'){
               	       	      f=1;
               	       	      tm.pb(i+1);
               	     }
               }   
             for(auto i:tm)s[i]='A';
             if(f) c++;
          } 
          cout<<c<<endl;


    }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///