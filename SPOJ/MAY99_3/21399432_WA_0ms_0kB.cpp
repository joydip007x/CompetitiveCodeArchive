#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const ll sz=100+100;
ll a,b,c,x,y,z1,z2,vis[1000000],t,z;

int main(){

  nikal_laura;
  cin>>t;
  while(t--){

      cin>>a>>b>>c;
      if(a==b){

          if(b==c) cout<<"YES\n";
          else cout<<"NO\n";
      }
      else{

         if( a<c and b<c) { cout<<"NO\n"; continue; }
         if(b>a) swap(a,b);
         x=(c/b);
         y=c%b;
         z= ( (ll)((a+b-1)/b) *b )%a ;
         if(y==z) cout<<"YES\n";
         else cout<<"NO\n";
      }


  }
}
