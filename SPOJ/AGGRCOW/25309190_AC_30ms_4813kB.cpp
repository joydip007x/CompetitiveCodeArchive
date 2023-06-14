#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;

#define D ll
ll n,x,t,c;

vector<D>v;

ll bin( ll l, ll h){

     ll ans=0,mid;

     while(l<=h){

          mid=(l+h)/2;
          ll cnt=0,last=0,f=1;
         
          while(f && cnt+1!=c  ){

              auto x=lower_bound(v.begin()+last,end(v), v[last]+mid);
              if(x==v.end() ){ f=0; break;} 
              last=abs(distance(x,v.begin()));
              cnt++;
          }
          if(f==0) {h=mid-1;}
          else  {ans=mid; l=mid+1;}

     }
     return ans; 
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

       ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  cin>>t;
  while(t--){
       
        cin>>n>>c;
        ll mn=LLONG_MAX,mx=LLONG_MIN; 
        v.clear();
        for(int i=0; i<n; i++){
           cin>>x;
           v.pb(x);
           mn=min(mn,x);
           mx=max(mx,x);
        }
        sort(begin(v), end(v));
        //cout<<" Mn "<<mn<<" : "<<mx<<endl;
        cout<<bin(mn,mx+1)<<endl;	       
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///