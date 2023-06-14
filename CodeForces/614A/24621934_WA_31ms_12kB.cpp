#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,y, l,r,k;
vector<ll>v ;
string s;

#define ld  long double 

ld lr,lh,lk;
map< pair<ll,ll> , ll >m;
ll mx=INT_MIN;
 ld lx,rx;

ll powerLL(ll x, ll n) { 
    ll result = 1; 
    while (n) { 
        if (n & 1) 
            result = result * x ; 
        n = n / 2; 
        x = x * x ; 
    } 
    return result; 
} 
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

     ///   ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

   cin>>l>>r>>k;
   
   if(k>r) return cout<<-1<<endl,0;
   if(k==r) return cout<<k<<endl,0;
   lr=log10(r*1.0000000000000000000000000000000000000000);
   lh=log10(l*1.0000000000000000000000000000000000000000000);
   lk=log10(k*1.00000000000000000000000000000000000000000000);


   rx= lr/lk ;
   lx= lh/lk;
   
   ll f=0, ta=0;
   std::cout << std::fixed;
   for(ll i=max((ll)0,(ll)(lx-1)) ; i<=(ll)rx+1  ; i++) {
          
          ll dod=powerLL(k,i);
          if(ta) cout<<" "; ta=0;
          if( !(dod>=l && dod<=r)) continue;
          cout<<dod;
          ta=1;
          f=1;
   }
   if(!f) cout<<"-1";
   cout<<endl;


  
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///