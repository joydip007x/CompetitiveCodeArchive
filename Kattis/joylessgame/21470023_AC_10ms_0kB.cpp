#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

#define BOGCUD printf("Bash\n");
#define VOGCUD printf("Chikapu\n");
const ll szz=100000+100 ;
int main(){

    sc(t);
    char s[szz];
    while(t--){

         scanf("%s",&s);
         ll sz=strlen(s);
         if(s[0]==s[sz-1]){

             if(sz%2)  {  BOGCUD ; continue; }
             else {
                 VOGCUD; continue;
             }
         }
         else{
            if(sz%2)  {  VOGCUD ; continue; }
             else {
                 BOGCUD; continue;
             }
         }

    }
}
