#include<iostream>
#include<string.h>
char s[100000],*x;
using namespace std;
 int main()
 {  
    scanf("%s",&s);
    if ((x=strstr(s,"AB")) && strstr(x+2,"BA")) {printf("YES\n");}
    else     if ((x=strstr(s,"BA")) && strstr(x+2,"AB")) {printf("YES\n");}
    else printf("NO\n");
 }