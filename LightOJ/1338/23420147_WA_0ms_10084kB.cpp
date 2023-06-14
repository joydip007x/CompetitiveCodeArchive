#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 100000+1000

#define pb push_back

vector <ll> prime,ans;
bool vis[sz];
ll a[1000][1000],n,m,lps[10000];

int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    cin>>n;
    ll cnt=0;
    getchar();
    while(n--){
           
           string s1,s2,s3,s4;

           getchar();
           getline(cin,s3);
           getchar();
           getline(cin,s4);

           for(int i=0; i<s3.size() ; i++){
                   
                   char c= s3[i];
                   c=tolower(c);
           	       if( c>=97 && c<=122) s1.pb(c);
           }
           for(int i=0; i<s4.size() ; i++){
                   
                   char c= s4[i];
                   c=tolower(c);
           	       if( c>=97 && c<=122) s2.pb(c);
           }
           sort(begin(s1), end(s1));
           sort(begin(s2), end(s2));

         /* cout<<"S3-:"<<s3<<"<<<:S4="<<s4<<endl;
          cout<<"S1-:"<<s1<<"<<<:S2="<<s2<<endl;
*/
          if(s1==s2) printf("Case %d: Yes",++cnt);
           else  printf("Case %d: No",++cnt);
    }
   
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///