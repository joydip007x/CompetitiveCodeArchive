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

int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

    cin>>t;
    while(t--){
         
         string s;
         char ok[1880]; ll q;
         cin>>s;
         for(int i='A' ; i<='Z'; i++)ok[i]=i;
         cin>>q;
         for(int i=0; i<q; i++){
            char c,d;
             cin>>c>>d;
             for(int i='A' ; i<='Z'; i++)if(ok[i]==d)ok[i]=c;
         }
         for(int i=0; i<s.size() ; i++) cout<<ok[s[i]];
         cout<<endl;
         
    }


  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///