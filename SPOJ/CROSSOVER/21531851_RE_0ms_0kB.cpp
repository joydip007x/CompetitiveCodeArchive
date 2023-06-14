#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz=100000 ,mod=1000000009 ;
ll t,res;
ll mans;
char u[sz],l[sz];
vector<string>mybad;
ll getlow( string a){

   ll bas=1,ans=0 ;
   reverse(a.begin() , a.end() ) ;
   for(int i=0 ; i<a.size() ; i++){

      ans=ans+ ((( a[i]-48 )*bas) )%mod ;
      ans=(ans+mod)%mod;
      bas*=2;
      bas%=mod;
   }
   return ans%mod;

}
ll findans( string up, string low){

    string ans;
    for(int i=0 ;  i<up.size(); i++)
    {
        if(u[i]=='1' && l[i]=='0'){res=i;break;}
        ans.pb(low[i]);
    }
    for(int i=res; i<up.size(); i++) ans.pb(u[i]);
    mybad.pb(ans);
}
int main(){

       sc(t);
       for(int cas=1; cas<=t ; cas++){

            mans=-9999999 ;
            mybad.clear();
           scanf("%s\n%s",&u,&l);
           string f=u, g=l ;
           findans(f,g);
           findans(g,f);
           bool ff= lexicographical_compare(mybad[0].begin() , mybad[0].end() , mybad[1].begin() , mybad[1].end() );
           string ans2;
           if(ff) ans2=mybad[1];
           else ans2=mybad[0];
           printf("Case %d: %lld\n",cas,getlow(ans2)%mod);

       }
}
