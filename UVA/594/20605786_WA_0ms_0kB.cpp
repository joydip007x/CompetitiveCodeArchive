#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back
ll n,x  ;
string s;
ll signx=1; // positive number hole signx=1 else signx=-1
string onescompliemnt( string a){

    for(int it=0 ; it<a.size() ; it++)
    {
        if(a[it]=='0') a[it]='1' ;
        else a[it]='0';
    }
    return a;
}
string Binary_add_one(string a){

     auto it=a.find_last_of('0');
     if(it==string::npos ) {
           int siz=a.size(); a.clear();
           a.pb('1');
           for(int i=0; i<siz; i++) a.pb('0');
           return a;
     }
     a[it]='1';
     for(int i=it+1 ; i<a.size() ; i++) a[i]='0';
     return a;
}
int main()
{

  while( scanf("%lld",&n) !=EOF ){
  ///cin>>n;
  signx=1;
  ll starting=n;
  if(n<0) {
    signx=-1;
    n=abs(n);
  }
  while(n) {

     if(n&1) s.pb('1' );
     else s.pb('0');  /// n ke binary te nicci
     n=n/2;
  }
  while( s.size()!=32) {  // size 32 na hole 32 bit int banaitesi samne 0 add kore .
        s.pb('0');
  }
  reverse(s.begin() , s.end() );
  if(signx==-1){

    s=onescompliemnt(s);
    s=Binary_add_one(s);
  }
  string sub[5], w;
  ll j=-1;
  for(int i=0 ; i<=32; i++){

     if(i and i%8==0) {
         j++;
         sub[j]=w;w.clear();
     }
     w.pb(s[i]);
  }
  // j=3 hobe always, [0,1,2,3 indexes] = 4*8 (bit in every index)  =32 bit integer dibe ;
  swap(sub[0],sub[3]) ;
  swap(sub[1],sub[2]);
  s.clear();
  for(int i=0 ; i<=3; i++) for(int j=0; j<sub[i].size() ; j++) s.pb(sub[i][j]);
  ll out=stoll(s,nullptr,2LL);
  if(signx==-1 || s[0]=='1') out=out-(ll)pow(2,s.size());
  printf("%lld converts to %lld\n",starting,out);
  //cout<<out<<"\n";
  s.clear();
  }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
