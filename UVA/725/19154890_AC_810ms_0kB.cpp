#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define  sz                         1000000
#define ll                        int

int nw,r,lmt,tmpint;
bool vis[12],dd=0;
string atmp,btmp;
set<int>s;
ll backtrx(ll in, int p1 ){

  if(in==6) {
       s.clear();
       atmp=to_string(p1*nw);
       btmp=to_string(p1);
       if(atmp.size()>5  ) return 0;
       s.insert(atmp.begin() , atmp.end());
       s.insert(btmp.begin() , btmp.end());
       if(s.size()==10 ||
      ( s.size()==9 and p1<=9999 and s.find(48)==s.end() )) dd=1,printf("%05d / %05d = %d\n",p1*nw,p1,nw);
       return 0;
  }
  for(int i=0; i<=9 ; i++){
    if(vis[i]) continue;
    vis[i]=1;
    backtrx(in+1,(p1*10)+i );
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
         backtrx(1,0);
        if(!dd) printf("There are no solutions for %d.\n",nw);
        ccc=1;
    }
}

///joydip007x ///
///Date&Time: whenever i submit*///
