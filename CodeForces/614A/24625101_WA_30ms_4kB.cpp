#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll l,r,k;

#define ld  long double 

ld lr,lh,lk,lx,rx, dl,dr,dk;

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
    cin>>l>>r>>k;
   
   ll i=floor(1.0*log10(l*1.00)/log10(k*1.00)*1.0);
   
   if(l==1) {cout<<1<<" "; f=1;}
   ll dod=1;
   for(int j=1; j<=i; j++) dod=dod*k;
   for(  i=max({i-1,i-2,i-3,i-4,0LL,i});   ; i++) {
          
         /// cout<<i<<" XXX ";
          dod=dod*k;
          if((i*1.00*log10(k*1.00))-(log10(r*1.00)*1.00)>0.000000000000000000000000000) break;
          if(dod>r) break;
          if( dod<l  ) continue; 
          std::cout << std::fixed;       
          cout<<dod<<" ";
          ta=1;
          f=1;
          
   }
   if(!f) cout<<-1;
   cout<<endl;

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///