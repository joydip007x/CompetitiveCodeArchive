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
ll n,x,t;
vector<ll>v ;

void primeFactors(int n) 
{ 
    while (n%2 == 0) 
    { 
        v.pb(2);
        n = n/2; 
    }
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
            v.pb(i);
            n = n/i; 
        } 
    } 
    if (n > 2) v.pb(n);
} 
int32_t main()
{
   // freopen("input.txt", "r+", stdin);
   /// freopen("output.txt", "w+", stdout);

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */
  
  cin>>t;
  while(t--){

  	   cin>>n;
  	   v.clear();
  	   primeFactors(n);
  	   set<ll>s;
      /// cout<<" FOR "<<n<<": ";
  	  //// for(auto i:v) cout<<i<<" X ";cout<<"\nEND\n";
  	   if(v.size()<3) {cout<<"NO\n"; continue;}
         ll cnt=0;
  	   for(int i=2; cnt!=2 ;i++){

  	   	     if( n%i==0){

  	   	         s.insert(i);cnt++;
  	   	      }
  	   }
  	   s.insert(  n/(*s.begin()*(*next(s.begin())))     );
  	    if(s.size()!=3){
           	 cout<<"NO\n"; continue;
           }
  	   	   	cout<<"YES\n";
  	   	   	for(auto i:s) cout<<i<<" "; cout<<endl;
  	   
  }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///