#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

ll n,x,ass,ass2 , lasp;
string a,b;
ll base=256, mod= 1000000007, bas;
int main()
{

  cin>>n>>a>>b;
  bas=1; ass=0;
  for(int i=0 ; i<b.size() ; i++){

    ass=ass+(b[i]*bas ) ;
    if(i+1<b.size() )bas=bas*base,bas%=mod;
    ass%=mod;
  }
  lasp=bas;
  bas=1 ; ass2=0;
  for(int i=0 ; i<a.size() ; i++ ){

       ass2=ass2+(a[i]*bas);
       bas=bas*base;
       bas%=mod;
       ass2%=mod;
  }
  if(ass==ass2)  return cout<<0<<endl,0;
  for(int i=a.size()-1, j=1 ;  i>=0 ; i--,j++){

      ll mi= a[i]*lasp ;
      mi%=mod;
      ass2=((ass2%mod)-(mi%mod)+ mod)%mod;
      ass2= ass2*base;
      ass2+=mod;
      ass2%=mod;
      ass2=ass2+ a[i];
      ass2%=mod;
      if(ass==ass2)  return cout<<j<<endl,0;
  }
  cout<<"-1\n";
  return 0;
}
/*
4
abce
ceab

*/




///author-joydip007x         ///
///Time&Date-Whenever i submit///
