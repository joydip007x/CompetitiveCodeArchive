#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;
#define sz 1000000+1000

//string s1 ,s2;
char s1[sz] , s2[sz] ;
ll lps[sz] ,t,cnt;
void lpscalc( char pat[]){
   ll i=1, len=0;
   lps[0]=0;
   while(i<strlen(pat)){
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
ll kmp(char str[],char pat[] ){

  ll i=0 , j=0 ;
  while(i<strlen(str)  ){

    if(str[i]==pat[j] ) i++,j++;
    else{
        if(j) j=lps[j-1];
        else i++;
    }
    if(j==strlen(pat)) j=0,cnt++,i=i-strlen(pat)+1;
  }
  return j;
}
int main()
{
    scanf("%lld",&t);
    ll cas=0;
    while( t-- )
    {
       scanf("%s %s",&s1,&s2);
       ///cout<<s1<<" : "<<s2<<endl;
       cnt=0;
       lpscalc(s2);
      /// for(int i=0 ; i<strlen(s2) ; i++ ) cout<<lps[i]<<"<";cout<<endl;
       kmp(s1,s2);
//        cout<<"Case "<<++cas<<": "<<cnt<<"\n";
       printf("Case %lld: %lld\n",++cas, cnt);
    }
}

///author-joydip007x         ///
///Time&Date-Whenever i submit///
