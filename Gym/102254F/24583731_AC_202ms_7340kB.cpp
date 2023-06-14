#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,q,q1;
vector<ll>v ,v2;
string s;
unordered_map<string,string>par;
string find_par(string s){
     
     if(par[s]==s)return s;
     return par[s]=find_par(par[s]);

}
ll uni(string a,string b){

     string x=find_par(a);
     string y=find_par(b);

     if(q1){
          
          if(x!=y){

          	   par[x]=y;
          	   return 1;
          }
     }
     else return (x==y);
     
}
int main()
{
    //freopen("input.txt", "r+", stdin);
   /// freopen("output.txt", "w+", stdout);

        ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

   cin>>n>>q;
   for(int i=0; i<n; i++){
          
          cin>>s;
   	      par[s]=s;
   }
   for(int i=0; i<q; i++){
        
          q1=0; int a;
          string b,c;
   	      cin>>a>>b>>c;
          
   	      if(a==1){
   	      	 q1=1;
   	      	 uni(b,c);
   	      	 q1=0;
   	      }
   	      else{
            
            if(uni(b,c)) cout<<"yes\n";
            else cout<<"no\n";
   	      }
   }



   
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///