#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll n,x,ass,ass2 , lasp,ass3,ass4,lasp2;
string a,b;
ll base= 73,  mod= 1000000007, bas;
ll base2=256, mod2= 100049, bas2;
unordered_map<ll,ll>u;
int main()
{

  cin>>n>>a>>b;
  bas=1; ass=0;
  bas2=1; ass3=0;
  for(int i=0 ; i<b.size() ; i++){

    bas=(bas*base)%mod;
    bas2=(bas2*base2)%mod2;
    ass=(ass+(b[i]*bas)%mod+mod )%mod;
    ass3=(ass3+(b[i]*bas2)%mod2+mod2)%mod2;
  }
  u[ass]=u[ass3]=1;
  bas=1; ass=0;
  bas2=1; ass3=0;
  for(int i=0 ; i<a.size() ; i++ ){

    bas=(bas*base)%mod;
    bas2=(bas2*base2)%mod2;
    ass=(ass+(a[i]*bas)%mod+mod)%mod;
    ass3=(ass3+(a[i]*bas2)%mod2+mod2)%mod2;
  }
  ass2=ass;
  ass4=ass3;
  ll ans=-1;
  for(int i=a.size()-1, j=1 ;  i>=0 ; i--,j++){

      if(u[ass2] && u[ass4]) { ans=j-1; break;}

      ass2=(((ass2-(a[i]*bas)%mod+a[i]+mod)%mod)*base)%mod;
      ass4=(((ass4-(a[i]*bas2)%mod2+a[i]+mod2)%mod2)*base2)%mod2;

  }
  cout<<ans<<endl;
  return 0;
}
/*
4
abce
ceab
//      ass2=((ass2%mod)+mod -(mi%mod)+ mod)%mod;
//      ass2= (ass2*base)%mod;
//      ass2=( ass2+ (a[i]*base)%mod+mod )%mod;
//
//      ass4=((ass4%mod2)+mod2 -(mi2%mod2)+ mod2)%mod2;
//      ass4= (ass4*base2)%mod2;
//      ass4=( ass4+ (a[i]*base2)%mod2+mod2 )%mod2;
*/




///author-joydip007x         ///
///Time&Date-Whenever i submit///
