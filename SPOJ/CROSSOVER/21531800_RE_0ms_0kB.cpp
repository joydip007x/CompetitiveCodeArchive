#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const int sz=100000 ,mod=1000000009 ;
int t,res;
ll mans;
char u[sz],l[sz];
ll getlow( string a){

   ll bas=1,ans=0 ;
   reverse(a.begin() , a.end() ) ;
   for(int i=0 ; i<a.size() ; i++){

      ans=ans+  ((( a[i]-48 )*bas) )%mod ;
      ans%=mod;
      bas*=2;
      bas%=mod;
   }
   return ans;

}
ll findans( string up, string low){

    string ans;
    for(int i=0 ;  i<up.size(); i++)
    {
        if(u[i]=='1' && l[i]=='0'){res=i;break;}
        ans.pb(low[i]);
    }
    for(int i=res; i<up.size(); i++) ans.pb(u[i]);
    mans=max(  mans, getlow(ans) );
}
int main(){

       sc(t);
       for(int cas=1; cas<=t ; cas++){

            mans=-9999999 ;
           scanf("%s\n%s",&u,&l);
           string f=u, g=l ;
           findans(f,g);
           findans(g,f);
           printf("Case %d: %lld\n",cas,mans);

       }
}
