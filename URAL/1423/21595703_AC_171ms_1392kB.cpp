#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

ll n,x,ass,ass2 , lasp,ass3,ass4,lasp2;
string a,b;
ll base=100043, mod= 1000000007, bas;
ll base2=47, mod2= 15485863, bas2;
int main()
{

  cin>>n>>a>>b;
  bas=1; ass=0;
  bas2=1; ass3=0;
  for(int i=0 ; i<b.size() ; i++){

    bas=bas*base,bas%=mod;
    bas2=bas2*base2,bas2%=mod2;
    ass=(ass+(b[i]*bas)%mod +mod )%mod;
    ass3=(ass3+(b[i]*bas2)%mod2 +mod2)%mod2;
  }
  lasp=bas;
  lasp2=bas2;
  bas=1; ass2=0;
  bas2=1; ass4=0;
  for(int i=0 ; i<a.size() ; i++ ){

    bas=bas*base,bas%=mod;
    bas2=bas2*base2,bas2%=mod2;
    ass2=(ass2+(a[i]*bas )%mod  +mod  )%mod;
    ass4=(ass4+(a[i]*bas2)%mod2 +mod2 )%mod2;
  }
  if(ass==ass2 && ass3==ass4 )  return cout<<0<<endl,0;
  for(int i=a.size()-1, j=1 ;  i>=0 ; i--,j++){

      ll mi= a[i]*lasp ;
      ll mi2= a[i]*lasp2 ;
      ass2=((ass2%mod)-(mi%mod)+ mod)%mod;
      ass2= (ass2*base  )%mod;
      ass2=( ass2+ (a[i]*base)%mod  )%mod;

      ass4=((ass4%mod2)-(mi2%mod2)+ mod2)%mod2;
      ass4= (ass4*base2   )%mod2;
      ass4=( ass4+ (a[i]*base2)%mod2  )%mod2;

      if(ass==ass2 && ass3==ass4)  return cout<<j<<endl,0;
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
