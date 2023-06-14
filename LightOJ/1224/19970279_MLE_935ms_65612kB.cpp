#include<bits/stdc++.h>
using namespace std;
typedef int ll;

ll n,x  ,y=0,cas=0,m,ans=0;
char s[444];
unordered_map< string,ll>lmao;
ll dodo(string word ){

  string tmp;
  for(int i=0 ; i<word.size() ; i++){
      tmp.push_back(word[i]);
      lmao[tmp]++;
  }
}
int main()
{
  int t;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    ans=0;
    lmao.clear();
    for(int i=0 ; i<n ; i++){
            string ss;
            scanf("%s",&s);
            ss=s;
            dodo(s);
      }
    for(auto it:lmao){
        ans=max(ans, (int)it.first.size()*(it.second) );
      }
//    cout<<"Case "<<++cas<<": "<<ans<<"\n";
     printf("Case %d: %d\n",++cas,ans);
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
