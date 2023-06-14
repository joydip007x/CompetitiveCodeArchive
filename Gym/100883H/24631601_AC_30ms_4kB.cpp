#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

#define int ll 
 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,c1,n1,c2,n2;
vector<ll>v ;
string s;

ll a1=0,a2=0;

ll bcd(ll a , ll b ,ll &x,ll &y)
{
   if(!b )
   {
      x=1;y=0;
       return a;
   }
  ll gcd=bcd( max(b,a%b),min(b,a%b),x,y);
  ll z=x;x=y;
  y=z-(a/b)*y;
  return gcd;
}
int32_t main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

  ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  
  int x0,y0,g;
  while(  cin>>n && n!=0){


        cin>>c1>>n1;
        cin>>c2>>n2;

        g=__gcd(n1,n2);
        bool f= (n%g!=0);
        if(f) {  cout<<"failed\n"; continue;}
        
        ll x0,y0,xg,yg,x,y;

        bcd(n1,n2,x,y);
       /// cout<<x<<" "<<y<<endl;
        x0= x*(n/g);
        ll mod=n2/g ,mod2= n1/g;
        x0=(x0%mod +mod)%mod;
        y0=(n-(n1*x0))/n2;

        ll ans= c1*x0 +  c2*y0 , ax=x0, ay=y0;
        
        for(int i=0; i<mod; i++){

                 x0=x0+mod;
                 y0=y0-mod2;

                 if(y0<0)break;

                 if( c1*x0 + c2*y0 <ans)
                        ans=c1*x0 + c2*y0, ax=x0,ay=y0;
                 
        }
        cout<<ax<<" "<<ay<<endl;

      //  cout<<h<<endl;

  }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///