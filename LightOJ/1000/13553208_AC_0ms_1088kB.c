#include<stdio.h>
#include<math.h>
int main()
{
    int j,x,y,n,sum[130];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&x,&y);
        sum[i]=x+y;
    }
    for(int i=0,j=1; i<n; i++,j++)
    {
        printf("Case %d: %d\n",j,sum[i]);
    }
}

