#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ret return
#define pb push_back
#define v vector<ll>


ll n;
string a,b;
const int sz=1000000+100;
ll lps[sz],ans=0;
void lpscalc( string &pat){

      int i=1 , len=0, pq=pat.size();
      while(i<pat.size()){

          if(pat[i]==pat[len]){
             lps[i]=len+1;
             len++;
             i++;
          }
          else{
            if(len) len=lps[len-1];
            else lps[i]=0,i++;
          }

      }

}
ll kmp(string &str, string &pat){

   int i=0, j=0;
   int strs=str.size() , pats=pat.size() ;
   while(i<strs && j<pats){


       if(str[i]==pat[j]) {
            i++,j++;

       }
       else{

         if(j) j=lps[j-1];
         else i++;
       }
   }
}
int main(){


       cin>>n>>a>>b;
         ll ans=0, ind=0;

         for(int i=0; i<a.size() ; i++){
             if(a[i]!=b[i]) break;
             ans++;

         }
       ///a=a+a;
      /// b=a+b;

      /// reverse(b.begin(),b.end() );
       string s=a+b;
       lpscalc(s);

       for(int i=n;i<s.size();i++){

             int y=i+1;
           // ans=max(ans,lps[i]);
            if(lps[i]>ans) { ans=lps[i]; ind=y%n; }
            else if( lps[i]==ans){

                ind=min(ind, y%n);
            }
      ///  cout<<lps[i]<<endl;
       }
       cout<<ind+1<<endl;
      // kmp(a,b);
}
