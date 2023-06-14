#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 100000+1000

#define pb push_back

vector <ll> prime,ans;
bool vis[sz];
ll a[1000][1000],n,m;

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
         //  cout<<s3<<"<>"<<s4<<"<>\n";
           for(auto i:s3){if(isalpha(i)) s1.pb(i);}
           for(auto i:s4){if(isalpha(i)) s2.pb(i);}
           
    	   transform(s1.begin(), s1.end(), s1.begin(), ::tolower); 
    	   transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    	   cout<<"Case "<<++cnt<<": ";
    	   sort(s1.begin(),s1.end() );
    	   sort(s2.begin(),s2.end() );
    	   
    	  /// cout<<"S1="<<s1<<":::::S2="<<s2<<endl;

    	   (s1==s2)? cout<<"Yes\n":cout<<"No\n"; 
    }
   
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///