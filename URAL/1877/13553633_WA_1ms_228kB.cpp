#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int x[1],y[1];
    scanf("%d",&x[0],&x[1],&x[2],&x[3]);
    scanf("%d",&y[0],&y[1],&y[2],&y[3]);
    if (x[0]==2 ||x[0]==1 )
    {
        if (y[0]==2||y[0]==1)
        {
            printf("yes\n");
        }
 else
        printf("no\n");
    }
    else
        printf("no\n");
}
