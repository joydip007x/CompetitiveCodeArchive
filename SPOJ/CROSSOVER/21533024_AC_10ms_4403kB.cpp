#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz=100010 ,mod=1000000007 ;
ll t,res,special,wo;
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

      if(up==low ) return getlow(up);
      res=0;
      if(up[0]==low[0]){

        for(int i=0 ;  i<low.size(); i++) {

               if( up[i]=='0' && low[i]=='1'){
                    up[i]='1';
                    for(int j=i; j<low.size() ; j++){
                        up[j]=low[j];
                    }
                  return getlow(up);
               }
        }
        return getlow(up);
     }
     else {

            for(int i=0 ;  i<low.size(); i++) {

               if( up[i]=='0' && low[i]=='1'){
                    up[i]='1';
                    for(int j=i; j<low.size() ; j++){
                        up[j]=low[j];
                    }
                  return getlow(up);
               }
           }
        swap(up.back(),low.back() );
        return getlow(up);

     }
}
int main(){

       sc(t);
       for(int cas=1; cas<=t ; cas++){
           scanf("%s%s",&u,&l);
           string f=u, g=l ;
           bool ff= lexicographical_compare( f.begin(),f.end() , g.begin(),g.end()  );
           if(ff)  wo=findans(g,f);
           else    wo=findans(f,g);
           printf("Case %d: %lld\n",cas, wo%mod);
       }
}
