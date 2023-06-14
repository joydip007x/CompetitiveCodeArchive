#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
char s[10000];
scanf("%s",&s);
if (s[0]>=97 && s[0]<=122)
 {s[0]=s[0]-32;}
 printf("%s",s);
}
