#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    int i,j,numa=0,numb=0,numc=0,flag=0,my_compare;
    char ori[6000],chk[]= {'a','b','c'},sortified_ori[6000];
    scanf("%s",&ori);
    strcpy(sortified_ori,ori);
    sort(sortified_ori,sortified_ori+strlen(sortified_ori));
    my_compare=strcmp(sortified_ori,ori);
    if (my_compare==0)
    {

        for(i=0,j=0; i<strlen(ori); i++)
        {
            if (ori[i]==chk[j])
            {
                flag++;
                j++;
            }
            else
                continue;
        }
        for(i=0; i<strlen(ori); i++)
        {
            if (ori[i]=='a')
            {
                numa++;
            }
            else   if (ori[i]=='b')
            {
                numb++;
            }
            else if (ori[i]=='c')
            {
                numc++;
            }
        }
        if(numc==numb || numc==numa)
        {
            flag++;
        }
        if(flag>=4)
        {
            printf("YES\n");
        }
        else
            printf("NO\n");
    }
else
            printf("NO\n");
}