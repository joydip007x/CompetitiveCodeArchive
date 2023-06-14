#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t,l,r,m;
vector<ll>v ;
string s;

int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

         ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

    
   cin>>t;
   while(t--){

        cin>>l>>r>>m;
        ll f=0;
        for(int i=l ; i<=r && !f; i++ ){

            ll cnt=1,a=i,z,b,c;
            while( cnt<=50 ){
                 
                 z=cnt*a;
                 z=z-m;
                 c=r;
                 b=c-abs(z);
                 if(z<0) swap(c,b);
                 
                 if((cnt*a)+b-c==m && l<=a && a<=r && l<=b && b<=r && l<=c && c<=r  ){
                   f=1; 
                   cout<<a<<" "<<b<<" "<<c<<endl;
                   break;
                 }
                
                /// cout<<a<<"*"<<cnt<<" + "<<b<<" - "<<c<<" : "<<(cnt*a)+c-b<<endl;
                 cnt++;
            }
          ///  cout<<"END\n";


        }
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///