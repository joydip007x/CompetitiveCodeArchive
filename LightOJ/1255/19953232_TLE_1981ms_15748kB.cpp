#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define sz 1000000+1000

string s1 ,s2;
ll lps[sz] ,t,cnt;
void lpscalc( string &pat){
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
ll kmp(string &str,string  &pat ){

  ll i=0 , j=0 ;
  while(i<str.size()  ){

    if(str[i]==pat[j]) i++,j++;
    else{
        if(j) j=lps[j-1];
        else i++;
    }
    if(j==pat.size()) j=0,cnt++,i=i-pat.size()+1;
  }
  return j;
}
int main()
{
    cin>>t;
    ll cas=0;
    while( t-- )
    {
        cin>>s1>>s2;
        cnt=0;
        lpscalc(s2);
        ll r=kmp(s1,s2);
        cout<<"Case "<<++cas<<": "<<cnt<<"\n";
    }
}

///author-joydip007x         ///
///Time&Date-Whenever i submit///
