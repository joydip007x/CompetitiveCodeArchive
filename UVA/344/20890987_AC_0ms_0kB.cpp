#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,x  ;
map<ll,ll>m[110],ans;
map<ll,ll>::iterator it;
void pre(){

    m[1]['I']=1,m[2]['I']=2,
    m[3]['I']=3,
    m[4]['I']=1,m[4]['V']=1,
    m[5]['V']=1,
    m[6]['V']=1,m[6]['I']=1,
    m[7]=m[6], m[7]['I']++,
    m[8]=m[7],m[8]['I']++,
    m[9]['X']++,m[9]['I']++,
    m[10]['X']++;
  for(int i=11; i<=39 ; i++) {
  	  m[i]=m[i-10];
  	  m[i]['X']++;
  }
  m[40]['X']++,m[40]['L']++;
  for(int i=41 ; i<=49; i++) {
  	m[i]=m[i-40];
  	m[i]['X']++; m[i]['L']++;
  }
  m[50]['L']++;
   for(int i=51; i<=89 ; i++) {
  	  m[i]=m[i-50];
  	  m[i]['L']++;
  }
  m[90]['X']++,m[90]['C']++;
   for(int i=91 ; i<100; i++) {
  	m[i]=m[i-90];
  	m[i]['X']++; m[i]['C']++;
  }
  m[100]['C']++;
}
void summap(ll a){

	for(int i=1; i<=n; i++){
      for(it=m[i].begin() ; it!=m[i].end() ; it++){

              ans[it->first]+=it->second;

	     }
      }

}
int main()
{

    pre();
    while( scanf("%d",&n) and n!=0){

     ans.clear();
     summap(n);
     printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,ans['I'],ans['V'],ans['X'],ans['L'],ans['C']);
    }
    return 0;
}




///author-joydip007x         ///
///Time&Date-Whenever i submit///

