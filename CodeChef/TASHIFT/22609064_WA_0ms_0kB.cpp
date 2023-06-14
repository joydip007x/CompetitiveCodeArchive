#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ret return
#define pb push_back
#define v vector<ll>


ll n;
string a,b;
const int sz=1000000+100;
ll lps[sz],ans=0;
void lpscalc( string &pat){

      int i=1 , len=0, pq=pat.size();
      while(i<pat.size()){

          if(pat[i]==pat[len]){
             lps[i]=len+1;
             len++;
             i++;
          }
          else{
            if(len) len=lps[len-1];
            else lps[i]=0,i++;
          }

      }

}
int main(){


       cin>>n>>a>>b;
         ll ans=0, ind=0;
         string s=a+b;
       lpscalc(s);
       for(int i=0;i<s.size();i++){

            ans=max(ans,lps[i]);
      ///  cout<<lps[i]<<endl;
       }
       cout<<(ans+1)%n<<endl;

}
