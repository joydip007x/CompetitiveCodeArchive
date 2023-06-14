#include<stdio.h>
#include<math.h>
int main()
{
    int j,x[200],y,n,sum[130];
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {scanf("%d",&x[i]);}

    for(int i=0; i<n; i++)
    {printf("%d %d\n",x[i]-2,2);}
}
