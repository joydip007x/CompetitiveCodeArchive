#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod=1000000007;
#define pb push_back
#define v vector<ll>
ll t,n,ans;
vector< v >base;
vector<v>matmulti( vector<v>a,vector<v>b ){

       vector< v>tmp;
        for(int k=0; k<=2;k++){
             vector<ll>tmp2(3,0);
             for(int l=0; l<=2; l++){

               	 for(int j=0; j<=2 ; j++){
               	 	
                       tmp2[l]+=((a[k][j]*b[j][l])+mod)%mod;
                       tmp2[l]%=mod;
               	  }
             }
             tmp.pb(tmp2);
        }
     return tmp;
}
vector<v>bigpow( vector<v>a, ll power, ll mod){
   
        if(power==1) return base;
        vector<v>tmp=bigpow(a, power/2, mod);
        tmp=matmulti(tmp,tmp);
        if(power&1) tmp=matmulti(tmp,a);
        return tmp;
}
int main()
{
    cin>>t;
    while(t--){

    	cin>>n;
        base={ {1,4,7},{2,5,8},{3,6,9} };
        ans=0;
    	if(n==1) {cout<<3<<endl;continue;}
    	vector<v>base2=bigpow(base,n-1, mod);
    	for(auto it:base2){
    		 for(auto it2:it) 
    		 	ans=(ans%mod +it2%mod)%mod;
    	}
        cout<<ans%mod<<endl;
        
    }
  
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///