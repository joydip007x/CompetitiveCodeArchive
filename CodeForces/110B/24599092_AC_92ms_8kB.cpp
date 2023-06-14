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

   
    
    for(int i=1; i<=n; i++){

         if(i%4==1) cout<<'a';
         if(i%4==2) cout<<'b';
         if(i%4==3) cout<<'c';
         if(i%4==0) cout<<'d';
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///