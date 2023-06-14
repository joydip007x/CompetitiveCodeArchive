#include<bits/stdc++.h>
using namespace std;
typedef int ll;

ll n,cas=0,ans;
char s[52];
unordered_map< string,ll>lmao;
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
            for(int j=0 ; j<strlen(s);j++){
            ss.push_back(s[j]);
            lmao[ss]++;
            }
    }
    for(auto it:lmao){
        ans=max(ans, (int)it.first.size()*(it.second) );
      }
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
