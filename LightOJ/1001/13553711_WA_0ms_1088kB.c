#include<stdio.h>
#include<math.h>
int main()
{
    int j,x[21],y,n,sum[130];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {scanf("%d",&x[i]);}

    for(int i=0; i<n; i++)
        if (x[i]>=2)
    {printf("%d %d\n",x[i]-2,2);}
    else  {printf("%d %d\n",x[i],0);}
}
