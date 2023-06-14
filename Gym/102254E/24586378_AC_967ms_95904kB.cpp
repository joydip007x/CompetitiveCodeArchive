#include<bits/stdc++.h>
using namespace std;
typedef int ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;

ll n,x;
vector<string>v ;
string s;
unordered_map<string ,ll>m;
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/
    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

   scanf("%d\n",&n);
   char str[333333];
  for(int i=0; i<n; i++){

       gets(str);
       s=str;
       if(s.size()<4) { continue;}
       m[s]++;
       if(m[s]==1) continue;
       else v.pb(s);
  }
  if(v.size()==0){
     
     printf("SAFO\n");
     return 0;
  }
  printf("%lld\n",1LL*v.size());
  for(int i=0; i<v.size() ; i++)printf("%s\n",v[i].c_str());
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///