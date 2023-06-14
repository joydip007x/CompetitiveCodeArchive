#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main(){

    cin>>n;
    vector<ll>v;
    ll s=1,str=n;
     if(n==0){

         cout<<"-1\n";
         return 0;
     }
//     if(n<=9){
//
//           cout<<n<<"\n";
//           return 0;
//     }
      for( int i=9; i>1 ; i--){

         if(n%i !=0 ) continue;
         v.pb( i );
         n=n/i;
         i=10;
      }
//      cout<<n<<" n  =----- =  ";
      sort(v.begin(),v.end() );
//     for(auto it:v) cout<<it<<" ";cout<<endl;
//     for(int i=0 ; i<v.size() ; i++)  if( v[i]>9) return cout<<"-1\n",0;
     for(int i=0 ; i<v.size() ; i++) s=s*v[i];
      if(s==str) {
        for(int i=0 ; i<v.size() ; i++) cout<<v[i];
        cout<<endl;
        return 0;
      }
      else
        cout<<"-1\n";
      return 0;

}
