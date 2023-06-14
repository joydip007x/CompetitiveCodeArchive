#include<stdio.h>
#include<math.h>
int main()
{
    int x[4],y[4];
    scanf("%d",&x[0],&x[1],&x[2],&x[3]);
    scanf("%d",&y[0],&y[1],&y[2],&y[3]);
    if (x[0]==2 ||x[0]==1 )
    {
        if (y[0]==2||y[0]==1)
        {
            printf("YES\n");
        }

    }
    else
        printf("NO\n");
}
