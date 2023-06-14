#include<iostream>
#include<algorithm>
int main()
{   int k ,n,w,w2,ans;
    scanf("%d %d %d",&k,&n,&w);
    w2=.5*w*(w+1);
    ans=(k*w2)-n;
    if(ans!=0){printf("%d\n",ans);}
    else printf("0");
}
