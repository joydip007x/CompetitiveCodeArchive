#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const ll sz=250000+10;
ll n,lps[sz];
string a,b,d;
char a2[sz],b2[sz];

ll lpscalc( string &pat){

   ll i=1, len=0;
   lps[0]=0;
   ll pp=pat.size() ;
   while(i<pp){
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
   return 0;
}
ll lpscalc2( string &pat, string &dd){

   ll i=0, len=0;
   ll pp=pat.size() , qq=dd.size() ;
   while(i<pp){
     if(pat[i]==dd[len]){
        len++;
        i++;
        if(len==qq ) return (i)%n;

     }
     else{
        if(len) len=lps[len-1];
        else i++;
     }
   }
   return -1;
}
int main(){

//       scanf("%d\n%s\n%s\n",&n,&a2,&b2);
//       a=a2;b=b2;
       cin>>n>>a>>b;
       d=b+b;
       lpscalc(a);
       printf("%d\n",lpscalc2(d,a));

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
