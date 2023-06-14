#include<bits/stdc++.h>
using namespace std;
typedef int ll;

ll n,x  ,y=0,cas=0,m,ans=0;
string s;
map< string,ll>lmao;
ll dodo(string word ){

  for(int i=1 ; i<=word.size() ; i++){

      string tmp=word.substr(0,i);
      //cout<<tmp<<" :V \n";
      lmao[tmp]++;
  }
}
int main()
{
  ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
  int t;
  cin>>t;
  while(t--){
    cin>>n;
    ans=0;
    lmao.clear();
    for(int i=0 ; i<n ; i++){
            cin>>s;
            dodo(s);
      }
    for(auto it:lmao){
        ans=max(ans, (int)it.first.size()*(it.second) );
      }
    cout<<"Case "<<++cas<<": "<<ans<<"\n";
    }
    /// niga , i will not implement TRIE  because that's what exactly
    ///  LightOJ wants me to do :V :v :V

  return 0;
}
/*
1
8
baggers
beggars
in
the
blowed
bowled
barn
bran
1
beggars bowled in the barn
*/
///author-joydip007x         ///
///Time&Date-Whenever i submit///
