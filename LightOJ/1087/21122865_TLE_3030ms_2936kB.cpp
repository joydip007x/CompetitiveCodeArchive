#include<bits/stdc++.h>
using namespace std;
typedef int  ll;
#define pb push_back
ll n,x ,q,t;
string s;
vector<ll>a;
int main()
{

  cin>>t;
  for(int c=1; c<=t ; c++,a.clear()){
    cin>>n>>q;
    for(int i=0 ; i< n ; i++)cin>>x,a.push_back(x);
    cout<<"Case "<<c<<":\n";
    for(int i=0 ; i<q; i++){
       cin>>s>>x;
       if(s[0]=='c'){
            --x;
           if(x<a.size())cout<<a[x]<<"\n",a.erase(a.begin()+x);
           else cout<<"none\n";
       }
       else a.pb(x);
    }
  }
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///
