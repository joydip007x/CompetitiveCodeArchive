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
    

   	 cin>>n>>s;
   	 ll stp='a'+n-1;
   	 for(int i=0; i<s.size(); i++)m[s[i]]++;

   	 for(int i='a';i<='z'&& i<=stp ;i++) if(!m[i]  )v.pb(i);

   	 ll cnt1=m[q];

   	 if(cnt1<v.size() )return cout<<"IMPOSSIBLE\n",0;
      
    //// cout<<cnt1<<" "<<v.size()<<" "<<endl;

   	 for(int i=0,j=s.size()-1; i<j && cnt1 ; i++,j--){

         if(s[i]!=q && s[j]!=q) continue;
         if((s[i]==q && s[j]!=q) || (s[i]!=q && s[j]==q)){

               if(s[i]==q) s[i]=s[j];  
               if(s[j]==q) s[j]=s[i];   
               auto ii=find(begin(v), end(v),s[i]);
               if(ii!=v.end() ) v.erase(ii);
               --cnt1;
         }
   	 }     

   	 ///cout<<cnt1<<" "<<v.size()<<" >> "<<s<<endl;

   	 ll mid=0;
   	 if(cnt1%2 ) {

   	 	   mid=1,cnt1--;
   	 	   if(!v.size() ){
                  s[s.size()/2]='a';
   	 	   }
   	 	   else{
           s[s.size()/2]=v.back();
           v.pop_back();
       }
   	 }

  //////   cout<<" C= "<<cnt1<<":"<<s<<endl;
   	 for(int i=0,j=s.size()-1; i<j && cnt1>0 ; i++,j--){

        if(s[i]!=q && s[j]!=q) continue;
        if( (cnt1/2) > v.size() ){

               s[i]=s[j]='a';--cnt1; --cnt1;
        }
        else if(v.size() ){
            s[i]=s[j]=*v.begin(); 
            v.erase(v.begin());
            --cnt1; --cnt1;
         }
           
   	 }
   	 set<ll>ss;
     for(int i=0; i<s.size(); i++) ss.insert(s[i]);
     if(*ss.begin()!='a' || *(prev(ss.end() ))!=stp)return cout<<"IMPOSSIBLE\n",0;
   	 for(int i=0; i<s.size(); i++){

   	 	    if(s[i]==q || s[i]>stp || v.size() ) return cout<<"IMPOSSIBLE\n",0;
            if(s[i]!=s[s.size()-1-i])return cout<<"IMPOSSIBLE\n",0;
   	 }
   	 cout<<s<<endl;
         
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///