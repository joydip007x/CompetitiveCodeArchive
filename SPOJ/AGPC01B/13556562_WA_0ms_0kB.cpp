#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<b && a<c && a<d && a<b){printf("Too Late\n");}
    else if (b<c && b<d) printf("Bus\n");
    else if (c<b && c<d) printf("CNG\n");
    else if (d<b && d<c) printf("Walk\n");
}
