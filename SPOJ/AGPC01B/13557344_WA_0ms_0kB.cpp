#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

if (b<=c && b<=d || b<=a) printf("Bus\n");
    else if (b>=a && b<=d) printf("CNG\n");
    else if(b>=a && c>=a) printf("Walk\n");
 else  if(a<b && a<c && a<d && a<b){printf("Too Late\n");}
}
