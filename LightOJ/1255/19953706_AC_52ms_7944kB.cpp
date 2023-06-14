#include<bits/stdc++.h>
using namespace std;
#define sz 1000007

//string s1 ,s2;
char s1[sz] , s2[sz] ;
int lps[sz] ,t,cnt;
void lpscalc( char pat[]){
   int i=1, len=0;
   lps[0]=0;
    const int sz2=strlen(pat);
   while(i<sz2){
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
int kmp(char str[],char pat[] ){

  int i=0 , j=0 ; cnt=0;
  lpscalc(pat);
  const int sz1=strlen(str);
  const int sz2=strlen(pat);
    while(i< sz1 )
    {
        if(str[i]==pat[j] )
        {
            i++,j++;
            if(j==sz2  )
                j=lps[j-1],cnt++;
        }
        else
        {
            if(j)
                j=lps[j-1];
            else
                i++;
        }
    }
    return cnt;
}
int main()
{
    scanf("%d",&t);
    int cas=0;
    while( t-- )
    {
       scanf("%s %s",&s1,&s2);
       printf("Case %d: %d\n",++cas,kmp(s1,s2));
    }
}

///author-joydip007x         ///
///Time&Date-Whenever i submit///
