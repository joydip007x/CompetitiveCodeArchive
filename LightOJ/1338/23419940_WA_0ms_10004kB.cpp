#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz 100000+1000

#define pb push_back

vector <ll> prime,ans;
bool vis[sz];
ll a[1000][1000],n,m;


bool isalpha( char a){

	 if( a>='a'  && a<='z') return true;
	 return false;
}
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
    	   transform(s3.begin(), s3.end(), s3.begin(), ::tolower); 
    	   transform(s4.begin(), s4.end(), s4.begin(), ::tolower);
           for(auto i:s3){if(isalpha(i)) s1.pb(i);}
           for(auto i:s4){if(isalpha(i)) s2.pb(i);}
           

    	   cout<<"Case "<<++cnt<<": ";
    	   sort(s1.begin(),s1.end() );
    	   sort(s2.begin(),s2.end() );
    	   
    	  /// cout<<"S1="<<s1<<":::::S2="<<s2<<endl;

    	   (s1==s2)? cout<<"Yes\n":cout<<"No\n"; 
    }
   
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///