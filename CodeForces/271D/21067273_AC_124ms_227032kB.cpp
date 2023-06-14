#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define pb push_back

ll n,k,ans=0;
string s,s2;
ll tre[2000000][29];
ll numb(char a){ return a-'a';}
int main()
{
  cin>>s>>s2>>k;
  ll nod=1;
  for(int i=0 ; i<s.size() ; i++){

      int current=0, bad=0;
      for(int j=i ; j<s.size() ; j++) {

         int c=numb(s[j]);
         if( s2[c]=='0') bad++;
         if(bad>k) break;
         if(tre[current][c]==0){
            ans++; tre[current][c]=nod++;
         }
         current=tre[current][c];
      }

  }
  cout<<ans<<endl;
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
