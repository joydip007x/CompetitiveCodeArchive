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

        ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  
    cin>>n;

    if(n<=4){

    	for(int i='a',j=0; j<n; j++,i++)cout<<i;
    	cout<<endl; return 0;
    }

    s.resize(n,'0');
   
   // cout<<s<<endl;
    ll j=0;
    for(int k='a';  k<='z'; k++) {

        for(int i=j; i<n; i+=4) {
          
            if(s[i]!='0') continue;
        	s[i]=k;

        }
       j++;
    }
    
    cout<<s<<endl;

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///