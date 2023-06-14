#include<stdio.h>
int main()
{
    long long n,i,sum=0,c=1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++,c++)
    {

        if(c%2!=0)
        {
            c=-c;
        }
        sum=sum+c;
    }
    printf("%lld",sum);
    return 0;

}
