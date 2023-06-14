#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int sz = 20000001+1;
ll n,x;
vector<ll>v ;
string s;
vector <ll> prime;
bool sv[sz+100];
ll money[sz+10000],ans[sz+10000];

ll  sumofFac(ll n) 
{ 

    for (ll i = 1; i <= 20000001; i++){
           for (ll j = i; j <= 20000001; j += i){ 
                money[j] += i;
         }
    }
    ans[2] = 3;
    for (ll i = 3; i <= 20000001; i++){ 
       	ans[i] = ans[i-1] + money[i];
    }
  return 1;
} 
int main()
{
   
  ////  ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
     sumofFac(1);
    while( cin>>n && n>0 ){

         cout<<ans[n]<<endl;
    }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///