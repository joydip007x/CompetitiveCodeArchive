#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
int main  ()
{
    long long flag1=0,flag2=0,flag3=0,flag4=0,flag5=0,i=0,j=0,k=0,L=0,mother_flag=0;;
    char ori[2000],chk1[]={'D','a','n','i','l'},chk2[]={'O','l','y','a'},chk3[]={'S','l','a','v','a'},chk4[]={'A','n','n'},chk5[]={'N','i','k','i','t','a'};
    scanf("%s",&ori);
    L=strlen(ori);
    for(i=0;i<L;i++)
    {
        if(ori[i]=='D')
                        {
                            if (ori[i+1]=='a')   flag1++;
                            if (ori[i+2]=='n')   flag1++;
                            if (ori[i+3]=='i')    flag1++;
                            if( ori[i+4]=='l' )   flag1++;
                            if  (flag1>=4)    mother_flag=mother_flag+1;
                        }
         if(ori[i]=='O')
                        {
                            if (ori[i+1]=='l')   flag2++;
                            if (ori[i+2]=='y')  flag2++;
                            if (ori[i+3]=='a' ) flag2++;
                            if (flag2>=3)    mother_flag=mother_flag+1;
                        }
          if(ori[i]=='S')
                        {
                            if (ori[i+1]=='l')   flag3++;
                            if (ori[i+2]=='a')  flag3++;
                            if (ori[i+3]=='v' ) flag3++;
                            if (ori[i+4]=='a' ) flag3++;
                            if (flag3>=4)    mother_flag=mother_flag+1;
                        }
        if(ori[i]=='A')
                        {
                            if (ori[i+1]=='n')   flag4++;
                            if (ori[i+2]=='n' )  flag4++;
                            if (flag4>=2)    mother_flag=mother_flag+1;
                        }
        if(ori[i]=='N')
                        {
                            if (ori[i+1]=='i' )  flag5++;
                            if (ori[i+2]=='k')  flag5++;
                            if (ori[i+3]=='i' )  flag5++;
                            if (ori[i+4]=='t' )  flag5++;
                            if (ori[i+4]=='a' ) flag5++;
                            if (flag5>=5)  mother_flag=mother_flag+1;
                        }


  }
  if(mother_flag==1){puts("YES");}
  else puts("NO");
}