#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define  sz                         1000000
#define ll                        long long

int nw,r,lmt;
char s[105][105],ru[1010];
ll backtrx(ll in, string cs){

  if(in==lmt) {  printf("%s\n",cs.c_str() ) ; return 0; }
  if( ru[in]=='#'){
    for(int i=0 ; i<nw ; i++)
    {
        backtrx(in+1, cs+s[i]   );
    }

  }
  else{
     for(int i=0 ; i<10 ; i++)
    {
        backtrx(in+1, cs+char(i+48)  );
    }

  }
  return 0;
}
int main()
{

    while(scanf("%d",&nw)){

       for(int i=0 ; i<nw ; i++){
          scanf("%s",s[i]);
       }
       scanf("%d",&r);
       for(int i=0 ; i<r ; i++){
        scanf("%s",ru); lmt=strlen(ru);
        backtrx( 0,"" );
       }

    }


}

















///joydip007x ///
///Date&Time: whenever i submit*///
