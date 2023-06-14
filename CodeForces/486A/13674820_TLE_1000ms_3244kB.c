#include<stdio.h>
int main()
{
    long long n,i,sum=0,c;
    scanf("%lli",&n);
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
    printf("%lli",sum);
    return 0;

}
