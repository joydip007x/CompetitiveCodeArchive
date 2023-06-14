#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t,y,vis[1100],tot=0;
vector<ll>v;
string s;
map<ll,ll>m,nm;

#define q '?'

int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */
   	 cin>>n>>s;
   	 ll stp='a'+n-1;
   	 for(int i=0; i<s.size(); i++)m[s[i]]++;
     tot=0;
   	 for(int i='a',cnt=1;i<='z'&& cnt<=n;i++,cnt++){
   	 	  if(!m[i]) {
   	 	  	v.pb(i);
   	 	    ////cout<<i<<" :)  "<<abs(n-m[i])<<nl;;
   	 	  /*	tot+=abs(n-m[i]);
   	 	  	nm[i]=abs(n-m[i]);*/
   	 	  }
   	 }
   	 ll cnt1=m[q];
   	 if(cnt1<v.size() )return cout<<"IMPOSSIBLE\n",0;
   ///	 cout<<cnt1<<" "<<tot<<" "<<v.size()<<":"<<stp<<endl;
   	 for(int i=0,j=s.size()-1; i<=j; i++,j--){

         if(s[i]!=q && s[j]!=q) continue;
         if((s[i]==q && s[j]!=q) || (s[i]!=q && s[j]==q)){

               if(s[i]==q) s[i]=s[j];  
               if(s[j]==q) s[j]=s[i];   
               auto ii=find(begin(v), end(v),s[i]);
               if(ii!=v.end() ) v.erase(ii);
               --cnt1;
         }
   	 }
   	 ll mid=0;
   	 if(cnt1&1) mid=1,cnt1--;
   	 for(int i=0,j=s.size()-1; i<=j; i++,j--){

         if(s[i]!=q && s[j]!=q) continue;

         if(cnt1==2 && v.size()==1){

         	   if(mid) {
         	    	 s[i]=s[j]='a';
         	    	 s[s.size()/2]=v[0];
         	    	 break;
         	   }
         }
         if(cnt1/2 >v.size() ){
               
               s[i]=s[j]='a';cnt1-=2;
         }
         if(cnt1/2 ==v.size() ){
            s[i]=s[j]=*v.begin(); 
            v.erase(v.begin());
            --cnt1; --cnt1;
         }
             
   	 }
   	 for(int i=0; i<s.size(); i++){

   	 	    if(s[i]==q || s[i]>stp) return cout<<"IMPOSSIBLE\n",0;
            if(s[i]!=s[s.size()-1-i])return cout<<"IMPOSSIBLE\n",0;
   	 }
   	 cout<<s<<endl;
         
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///