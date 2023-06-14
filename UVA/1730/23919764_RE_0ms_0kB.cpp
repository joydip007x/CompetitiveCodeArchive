#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int sz = 20000001+1;
const int mod = 1e9 + 7;
ll n,x;
vector<ll>v ;
string s;
vector <ll> prime;
bool sv[sz+100];
ll money[sz+100],ans[sz+100];

ll  sumofFac(ll n) 
{ 

    for (ll i = 1; i <= sz; i++){
           for (ll j = i; j <= sz; j += i)
                  { 
                  	money[j] += i;

                  }
    }
    ans[2] = 3;
    for (ll i = 3; i <= sz; i++)
     { 
       	ans[i] = ans[i-1] + money[i];

       }
} 
int main()
{
   

  ////  ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
     sumofFac(1);
    while( cin>>n && n ){

         cout<<ans[n]<<endl;
    }

}



///author-joydip007x         ///
///Time&Date-Whenever i submit///