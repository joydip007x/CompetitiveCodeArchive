#include<math.h>
#include<stdio.h>
long int i,x[100000000],y[100000000],m,n,j,k=0,p,l;
int main()
{
    scanf("%d",&n);
    scanf("%d",&m);
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
    scanf("%d %d",&p,&l);
    printf("%d",k);
}

