#include<stdio.h>
#include<math.h>
int x[2000001];
int main()
{
    int n,j,k,temp,z;
    while(scanf("%d",&z) && z!=0)
    {
        n=z;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&x[i]);
        }

        for(j=0; j<n; j++)
        {
            for(k=0; k<n; k++)
            {
                if (x[j]<x[k])
                {
                    temp=x[j];
                    x[j]=x[k];
                    x[k]=temp;
                }
                else
                    continue;
            }

        }
        for(j=0; j<n; j++)
        {
            printf("%d ",x[j]);
        }

    }

}