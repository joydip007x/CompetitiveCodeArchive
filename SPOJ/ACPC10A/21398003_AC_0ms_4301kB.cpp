#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);

  while(1){


      ll a,b,c,x,y,z1,z2;
      cin>>a>>b>>c;
      if(!a and !b and !c) return 0;
      x=b/a; y=c/b;
      z1=b-a , z2=c-b;

      if(z1==z2) cout<<"AP "<<c+(b-a)<<endl;
      else cout<<"GP "<<c*x<<endl;
  }
}
