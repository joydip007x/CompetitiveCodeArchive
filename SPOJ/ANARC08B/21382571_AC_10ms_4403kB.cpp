#include<bits/stdc++.h>
using namespace std ;

#define ll long long
#define pb push_back

const int sz=1000000;
char ab[sz+10];
string mybad[] ={ "063","010","093","079","106","103","119","011","127","107"};
ll se7en(string a){

   for(int i=0; i<10 ; i++){
      if(mybad[i]==a) return i;
   }
}
string  bal(ll a){
   return mybad[a];
}
ll retain(string a){

  vector<string>xx;
  string w;
  ll i,p ;
  for( i=0  ;i<a.size() ; i++ ){

        w.pb(a[i]);
    if(w.size()==3) {xx.pb(w);   /*cout<<"Push- "<<w<<endl;*/ w.clear(); }
  }
  if(w.size() ){ xx.pb(w);  /*cout<<xx.back()<<" "<<endl;*/}
 /// cout<<"trimming "<<a<<" - ";
  ll ret=0;
  for(int i=0 ; i<xx.size()  ; i++){

      ret=(ret*10)+se7en(xx[i]);
      ///cout<<xx[i]<<" "<<se7en(xx[i])<<endl;;
  }
  ///cout<<"RETT - "<<ret<<endl;
  return ret;
}
int main(){

   while( scanf("%s",&ab) &&  ab[0]!='B'){

       string s1="",s2="",s=ab,ans="";
       int i,j;
       for( i=0 ;    s[i]!='+' ; i++) s1.pb(s[i]);
      /// cout<<i<<" IIII "<<" ";
       for( j=i+1 ;  s[j]!='=' ; j++) s2.pb(s[j]);
       ///cout<<s1<<" "<<s2<<endl;

       ll ma=retain(s1);
       ll mb=retain(s2);
       ll mc=ma+mb;

      /// cout<<ma<<" "<<mb<<endl;
       while(mc){
           ans.pb( (mc%10)+48);
           mc=mc/10;
       }
       reverse(ans.begin(),ans.end());
      /// cout<<"\n FINALE "<<ans<<endl;
      printf("%s",ab);
       for(int i=0 ; i<ans.size() ; i++)
          printf("%s",bal(ans[i]-'0').c_str()  );
       printf("\n");
   }


}
