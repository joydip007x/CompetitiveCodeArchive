#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define sz 1000000+3

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

  ll i=0 , j=0 ; cnt=0;
  lpscalc(s2);
  while(i<strlen(str)  ){
    if(str[i]==pat[j] ) {
            i++,j++;
     if(j==strlen(pat)) j=lps[j-1],cnt++;
    }
    else{
        if(j) j=lps[j-1];
        else i++;
    }
  }
  return cnt;
}
int main()
{
    scanf("%d",&t);
    ll cas=0;
    while( t-- )
    {
       scanf("%s %s",&s1,&s2);
       printf("Case %d: %d\n",++cas,kmp(s1,s2));
    }
}

///author-joydip007x         ///
///Time&Date-Whenever i submit///
