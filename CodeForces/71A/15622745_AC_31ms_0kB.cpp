#include<Stdio.h>
#include<string.h>
int main()
{
    char huda[1000];
    int j=0,k,l=0,i;
    scanf("%d",&k);
    for(i=0; i<k; i++)
    {
        scanf("%s", huda);
        l=strlen(huda);
        if(l<=10)
        {
            printf("%s\n",huda);
        }
        else
        {
            printf("%c%d%c\n",huda[0],l-2,huda[l-1]);
            j=0;
        }
    }
}