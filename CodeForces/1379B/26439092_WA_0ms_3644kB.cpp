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

ll div( ll h){
  
      for(int i=l ; i<=r; i++){

           if(h%i==0)return i;
      }
      return -1;

}
int main()
{
   //freopen("input.txt", "r+", stdin);
    // freopen("output.txt", "w+", stdout);

   ///ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

   cin>>t;
   while(t--){

        cin>>l>>r>>m;
        ll mn,mx,a,b,c,e,f=0,h;
        mx=abs(r-l),mn=-1*mx;
        for(int i=l ; i<=r && !f; i++){
         
              e=m%i;h=i-e;
              if(e<=mx && (m+e)%i==0){

                  cout<<i<<" "<<l+e<<" "<<l<<endl;
                  break;
              }
              if(h<=mx && (m+h)%i==0 ){

                  cout<<i<<" "<<l<<" "<<l+h<<endl;
                  break;
              }
           
        }



   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///