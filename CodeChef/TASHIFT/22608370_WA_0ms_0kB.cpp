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
       ///a=a+a;
      /// b=a+b;
       a=a+b;
       lpscalc(a);

    cout<<1+lps[a.size()-1]<<endl;
       /*for(int i=0;i<b.size();i++){
        cout<<lps[i]<<endl;
       }*/
      // kmp(a,b);
}
