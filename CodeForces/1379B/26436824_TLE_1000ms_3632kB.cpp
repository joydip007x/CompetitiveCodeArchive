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
    // freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);

   ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

   cin>>t;
   while(t--){

        cin>>l>>r>>m;
        ll f=0, lmt1=abs(l-r),lmt2=-1*lmt1;
        
        ////cout<< "! "<<lmt2<<" "<<lmt1<<endl;
        for(int i=lmt2 ; i<=lmt1 && !f ; i++){
              
             ll p=m-i;
             ll b,c;
             if(i>=0){
                 c=r;
                 b=c-i;
             }
             else{
                b=r;
                c=b+i;
                swap(b,c);
             }
           ///  cout<<p<<" "<<b<<" "<<c<<" "<<i<<endl;
             for(int j=1 ; j*j<=p && !f ; j++){

                 if(p%j==0){
                    
                    if( j>=l && j<=r ){
                      
                       cout<<j<<" "<<b<<" "<<c<<endl; 
                       f=1;
                       break;
                    }
                    else if( p/j >=l && p/j <=r ){

                       cout<<p/j<<" "<<b<<" "<<c<<endl; 
                       f=1;
                       break;
                    }
                   
                 }
             }


        }
   }
  return 0;;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///