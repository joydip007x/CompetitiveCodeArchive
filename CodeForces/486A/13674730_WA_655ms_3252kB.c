#include<stdio.h>
int main()
{
    long n,i,sum=0,c;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            c=-i;
        }
        else
            c=i;
        sum=sum+c;
    }
    printf("%ld",sum);
    return 0;

}
