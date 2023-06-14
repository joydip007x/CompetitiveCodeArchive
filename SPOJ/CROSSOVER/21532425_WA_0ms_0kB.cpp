#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz=100010 ,mod=1000000007 ;
ll t,res,special;
char u[sz+333],l[sz+333];
vector<string>mybad;
ll getlow( string a){

   ll bas=1, ans=0 ;
   reverse(a.begin() , a.end() ) ;
   for(int i=0 ; i<a.size() ; i++){

      ans=ans+ ((( a[i]-48 )*bas) )%mod ;
      ans=(ans+mod)%mod;
      bas=bas*2 ;
      bas=bas%mod;
   }
   return (ans+mod)%mod;

}
ll findans( string up, string low){

    string ans; ll uz=0,lz=0;
    res=-1;
    for(int i=0 ;  i<low.size(); i++)
    {
        if(up[i]=='0') uz++;
        if(low[i]=='0') lz++;
        if( res==-1 && u[i]=='1' && l[i]=='0'){res=i;}
        if(res==-1) ans.pb(low[i]);
    }
    if(  uz!=up.size() && lz!=low.size()  ){
                 for(int i=res; i<up.size(); i++) ans.pb(up[i]);
                 mybad.pb(ans);
     return 1;
    }
    special=1;
    ans.clear();
    if(uz==up.size()) swap(low,up);
    string gg=up;
    up[up.size()-1]='0';
    gg[0]='0';
    mybad.pb(up);
    mybad.pb(gg);
    return 0;
}
int main(){

       sc(t);
       for(int cas=1; cas<=t ; cas++){

            mybad.clear();
            special=0;
           scanf("%s%s",&u,&l);
           string f=u, g=l ;
           findans(f,g);
           if(!special) findans(g,f);
           bool ff= lexicographical_compare(mybad[0].begin() , mybad[0].end() , mybad[1].begin() , mybad[1].end() );
           string ans2;
           if(ff) ans2=mybad[1];
           else ans2=mybad[0];
           printf("Case %d: %lld\n",cas,getlow(ans2)%mod);

       }
}
