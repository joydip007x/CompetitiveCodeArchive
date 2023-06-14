#include<stdio.h>
#define m 10007
int p[m];
int main()
{
    p[0]=p[1]=1;p[2]=2;
    for(int i=3;i<m;i++){
        p[i]=2*p[i-1]+p[i-3];
        p[i]%=m;
    }
    int t,ca=0,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        printf("Case %d: %d\n",++ca,p[n%(m-1)]);
    }
    return 0;
}