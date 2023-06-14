#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz=250000+10;
ll n,lps[sz],lps2[sz];
string a,b,c,d,e;
void lpscalc( string pat){

   ll i=1, len=0;
   lps[0]=0;
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
ll lpscalc2( string pat, string dd){

   ll i=0, len=0;
   lps2[0]=0;
   //cout << dd.size() << endl;
   while(i<pat.size() && len<dd.size() ){
     if(pat[i]==dd[len]){
        lps2[i]=len+1;
       // cout << i << " " << pat[i] << " " <<  len<<" " << dd[len] << endl;
        len++;
        i++;
        if(len==dd.size() ) return (i)%n;

     }
     else{
        if(len) len=lps[len-1];
        else lps2[i]=0,i++;
     }
   }
   return -1;
}
int main(){
       cin>>n>>a>>b;
      // d=a+b;
       d=b+b;
       lpscalc(a);

       cout<<lpscalc2(d,a)<<endl;

}
/*
11
abracadabra
cadabraabra
11
abracadabra
racadabraab
6
ababab
bababa
*/
