#include<math.h>
#include<stdio.h>
long long i,x[100000000],y[100000000],m,n,j,k=0,p=1,l=1;
int main()
{ while(1)
{
    scanf("%d %d",&n,&m);
   if(m==0 && n==0)
    break;
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    for(j=0; j<m; j++)
    {
        scanf("%d",&y[j]);
        for(i=0; i<n; i++)
        {
            if(y[j]==x[i])
            {
                k++;
            }
        }
    }
    printf("%d",k);
}
}

