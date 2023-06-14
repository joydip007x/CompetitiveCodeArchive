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
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

   //  ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

   cin>>l>>r>>k;
   
   dl=(ld)l;
   dr=(ld)r;
   dk=(ld)k;
   
   lr=ceil(log10(dr*1.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000));
   lh=floor(log10(dl*1.00000000000000000000000000000000000000000000000000000000000000000000000000000));
   lk=(log10(dk*1.0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000));

   lr=lr*1.0000000;
   lh=lh*1.00000;
   lk=lk*1.00000;

   rx= ceil((1.000*lr/lk*1.00) )*1.00;
   lx= floor((1.000*lh/lk*1.0000))*1.00;

   
  //  cout<<lx<<" : "<<rx<<endl;
   ll f=0, ta=0;
 ///  std::cout << std::fixed;
    
    ll i=max({0*1LL,(ll)(lx-1),(ll)(lx-2)});
    ll j=max((ll)(rx+1),(ll)rx);
 ////  cout<<max((ll)0,(ll)(lx-1)) <<" : "<<(ll)(rx+1 )<<endl;
    
   /// cout<<i<<" "<<j<<endl;

     for( ; i<=j; i++) {
          
         /// cout<<i<<" XXX ";
          ll dod=power(k,i);
          if(ta) cout<<" "; ta=0;
          if( !(dod>=l && dod<=r)   || !(l<=k && k<=r )) continue;
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