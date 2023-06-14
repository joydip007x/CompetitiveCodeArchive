#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{   int i,j,numa=0,numb=0,numc=0,flag=0;
    char ori[6000],chk[]={'a','b','c'};
    scanf("%s",&ori);
    for(i=0,j=0;i<strlen(ori);i++)
    {
        if (ori[i]==chk[j]){flag++;j++;}
        else continue;
    }
    for(i=0;i<strlen(ori);i++)
    {
        if (ori[i]=='a'){numa++;}
      else   if (ori[i]=='b'){numb++;}
        else if (ori[i]=='c'){numc++;}
    }
    if(numc==numb || numc==numa){flag++;}
    if(flag>=4){printf("YES\n");}
    else printf("NO\n");

}


