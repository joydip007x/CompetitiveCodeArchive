#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t,l ,p1,p2;
vector<ll>v1,v2 ;
string s;
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

        ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    for(int i=0; i<t; i++){

            cin>>x;
            if(x<0) l=2,p2+=x,v1.pb(abs(x));
            else l=1,p1+=x,v2.pb(x);     
    }
    p1=abs(p1); p2=abs(p2);

    if(p1>p2) return cout<<"first",0;
    if(p1<p2) return cout<<"second",0;

    for(int i=0; i<v1.size(); i++){

          if(i<v2.size() ){
             if(v1[i]>v2[i]){
                 
               ///  cout<<"1 ";
                 return cout<<"first",0;
             }
             else if( v1[i]<v2[i]){
                return cout<<"second",0;
             }
          }
    }
    if(v1==v2){

          if(l==2)cout<<"second";
          else cout<<"first";
          return 0;
    }
    if(v1.size()<v2.size() ) cout<<"second";
    else cout<<"first";
    

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///