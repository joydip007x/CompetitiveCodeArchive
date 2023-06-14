#include<iostream>
#include<algorithm>
 long long int k ,n,w,w2,ans;
int main()
{  
    scanf("%d %d %d",&k,&n,&w);
    w2=.5*w*(w+1);
    ans=(k*w2)-n;
    if(ans>0){printf("%d\n",ans);}
    else printf("0\n");
}