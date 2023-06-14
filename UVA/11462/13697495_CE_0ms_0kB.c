#include<stdio.h>
#include<math.h>
int main()
{
    int j,k;
    long long  z,n,temp,x[200001];
    while(scanf("%lld",&z) && z!=0)
    {
        n=z;
        for(int i=0; i<n; i++)
        {
            scanf("%lld",&x[i]);
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
            printf("%lld ",x[j]);
        }
puts("");
    }

}
