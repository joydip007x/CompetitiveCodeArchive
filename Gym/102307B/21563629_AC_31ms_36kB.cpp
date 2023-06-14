#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

string s;
ll hsh=1 , mod=179426333;
ll samne=0 , picone= 0,str=-1, i;

bool chk(ll a, ll b){

   for(int i=a, j=b; j>=i; i++,j--){

        if (s[i]!=s[j]) return false;
   }
   return true;
}
int main(){


    cin>>s;
    i=s.size()-1;
    for(  ; i>=0  ; i--){

         samne=(samne*256 )+s[i];
         picone=picone+ ( s[i]*hsh );
         hsh=(hsh*256)+mod;
         hsh%=mod;
         samne=(samne+mod)%mod;
         picone=(picone+mod)%mod;

         if(samne==picone){

          ///  if( chk(i,s.size()-1) ) 
                str=i;
         }
    }
    if(str==-1) { cout<<s; reverse(s.begin(),s.end() ); cout<<s; return 0;}
    i=str;
    cout<<s.substr(0,i)<<s.substr(i);
    string x=s.substr(0,i);
    reverse(x.begin(),x.end() );
    cout<<x<<endl;


}
