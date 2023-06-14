#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t;
string s;
int main()
{
   //freopen("input.txt", "r+", stdin);
   //freopen("output.txt", "w+", stdout);

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){

            cin>>n;
            map<string,ll>m; ll ans=0;
            for(int i=0; i<n; i++){

            	   cin>>s;
            	   m[s]++;
            }
            for(auto i:m){

            	   if(i.second<=1)continue;
                   ll pos=4;
            	   while(m[i.first]>1){ 

                       if(pos==0)pos=4;
                       --pos;
                       s=i.first;
                       for(int j=0 ; j<=9; j++){

                            s[pos]=j+48;
                            if(m[s]==0){
                            	
                            	 m[s]++;
                            	 ans++;
                            	 m[i.first]--;
                            	 break;
                            }
                       } 
            	   }

            }
            cout<<ans<<endl;
            for(auto i:m)if(i.second==1)cout<<i.first<<endl;



    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///
    	 	  		    	 			  		  		 		