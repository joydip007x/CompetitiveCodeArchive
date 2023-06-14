#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz=250000+10;
ll n,lps[sz];
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
int main(){
       cin>>n>>a>>b;
       if(a==b) {  printf("0\n");return 0; }
       d=b+a;
       lpscalc(d);
      //// cout<<lps[d.size()-1]<<" LAURA "<<lps[d.size()]<<endl;
       if(lps[d.size()-1]!=0)cout<<lps[d.size()-1]<<"\n";
       else cout<<"-1\n";
}
/*
11
abracadabra
cadabraabra
*/
