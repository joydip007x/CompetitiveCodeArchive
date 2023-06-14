#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define  sz                         1000000
#define ll                        long long

int nw,r,lmt;
bool vis[12],dd=0;
ll backtrx(ll in, string p1, string p2){
  
  
  if(p2.size()==5) {
        ///cout<<p1<<":"<<p2<<endl;
        if( stoi(p2)*nw ==stoi(p1) )
        printf("%s / %s = %d\n",p1.c_str(),p2.c_str(),nw),dd=1;
        return 0;
  }
  if(in>1 and in<6 and !vis[0])
    { vis[0]=1;backtrx(in+1,p1+'0',p2) ; vis[0]=0;}
  if(in>5 and !vis[0])
    { vis[0]=1;backtrx(in+1,p1,p2+'0') ;  vis[0]=0;}
  for(int i=1; i<=9 ; i++){
    if(vis[i]) continue;
    vis[i]=1;
    if(in>=1 and in<6) backtrx(in+1,p1+char(i+48),p2);
    else              backtrx(in+1,p1,p2+char(i+48));
    vis[i]=0;
  }
  return 0;
}
int main()
{
    int ccc=0;
    while(scanf("%d",&nw)and nw!=0){
         if (ccc) printf("\n"); ccc=0;
         memset(vis,0,sizeof vis);dd=0;
         backtrx(1, "","");
        if(!dd) printf("There are no solutions for %d.\n",nw);
        ccc=1;
    }
}

















///joydip007x ///
///Date&Time: whenever i submit*///
