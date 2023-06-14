#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,flag=0;
    char Z[800],X[5],A[]="hello";
    scanf("%s",Z);
    for(i=0,j=0; i<strlen(Z); i++)
    {
        if(Z[i]==A[j])
        {
            ++flag;
            j++;
        }

    }
    if(flag>=5)
    {
        printf("YES\n");
    }
    else
        printf("NO\n");
}