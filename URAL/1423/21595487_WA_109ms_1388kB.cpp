#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,x,ass,ass2 , lasp;
string a,b;
ll base=256, mod= 1000000007, bas;
ll power(ll x, ll y, ll p)
{

    ///cout<<x<<" "<<y<<" "<<p<<endl;
	ll res = 1;
	x=x%p;
	while (y > 0)
	{
		if (y & 1)res = (res*x) % p;
		y = y>>1;
		x = (x*x) % p;
		res=res%p;
	}
	return res%mod;

//   for(int i=0 ; i<y; i++){
//      res=res*x;
//      res%=mod;
//   }
//   return res;
}
int main()
{

  cin>>n>>a>>b;
  bas=1; ass=0;
  for(int i=0 ; i<b.size() ; i++){

    ass=ass+(b[i]*bas ) ;
    bas=bas*base;
   //// cout<<" last= "<<i<<" : "<<bas<<endl;
    bas%=mod;
    ass%=mod;
  }
  lasp=power(base,n-1,mod);

//  cout<< " SPECIAL - "<<bas/base<<" : ";
//  cout<<" LASTPOWER "<<base<<"^"<<n-1<<" = "<<lasp<<endl;
//  cout<<"HASHPAT= "<<ass<<" :: "<<endl;

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
      ass2=  (ass2-mi);
      ass2+=mod;
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
