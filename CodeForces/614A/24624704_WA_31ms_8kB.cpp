#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

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
 ld lx,rx, dl,dr,dk;

ll power(ll x,  ll y) 
{ 
    if (y == 0) 
        return 1; 
    else if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    else
        return x * power(x, y / 2) * power(x, y / 2); 
} 
ll f=0,ta=0;
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
   
   ld l2k; 
   cin>>l>>r>>k;
   
   ll i=max((ll)floor(1.0*log10(l*1.00)/log10(k*1.00)*1.0),(ll)0);

   i=max({(ll)0,i-1,i-2,i-3,i-4,i-5});

   for( ;   ; i++) {
          
         /// cout<<i<<" XXX ";
          ll dod=power(k,i);
          if(dod>r || (k==1000000000 && i>2)) break;
          if(ta) cout<<" "; ta=0;
          if( !(dod>=l && dod<=r) ) continue;        
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