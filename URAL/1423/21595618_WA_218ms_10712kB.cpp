#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll n,x,ass,ass2 , lasp,ass3,ass4,lasp2;
string a,b;
ll base=100043, mod= 1000000007, bas;
ll base2=47, mod2= 15485863, bas2;
unordered_map<ll,ll>u;
int main()
{

  cin>>n>>a>>b;
  bas=1; ass=0;
  bas2=1; ass3=0;
  for(int i=0 ; i<b.size() ; i++){

    bas=(bas*base)%mod;
    bas2=(bas2*base2)%mod2;
    ass=(ass+(b[i]*bas ) )%mod;
    ass3=(ass3+(b[i]*bas2 ) )%mod2;
  }
  u[ass]=u[ass3]=1;
  bas=1; ass=0;
  bas2=1; ass3=0;
  for(int i=0 ; i<a.size() ; i++ ){

    bas=(bas*base)%mod;
    bas2=(bas2*base2)%mod2;
    ass=(ass+(a[i]*bas ) )%mod;
    ass3=(ass3+(a[i]*bas2 ) )%mod2;
  }
  if( u[ass] && u[ass3] )  return cout<<0<<endl,0;
  ass2=ass;
  ass4=ass3;
  ///cout<<bas<<" : "<<bas2<<" :: \n";
  for(int i=a.size()-1, j=1 ;  i>=0 && j<=n ; i--,j++){

      ll mi= (a[i]*bas );
      ll mi2= (a[i]*bas2);

      ass2=((ass2%mod)+mod -(mi%mod)+ mod)%mod;
      ass2= (ass2*base)%mod;
      ass2=( ass2+ (a[i]*base)%mod )%mod;

      ass4=((ass4%mod2)+mod2 -(mi2%mod2)+ mod2)%mod2;
      ass4= (ass4*base2)%mod2;
      ass4=( ass4+ (a[i]*base2)%mod2 )%mod2;

      if(u[ass2] && u[ass4])  return cout<<j<<endl,0;
  }
  cout<<-1<<endl;
  return 0;
}
/*
4
abce
ceab

*/




///author-joydip007x         ///
///Time&Date-Whenever i submit///
