#include<stdio.h>
#include<math.h>
int s,x,y,z,v,b,n;
int main()
{
   scanf("%d",&x);
   for(int i=0; ;i++)
    {int A1,A2,B1,B2,C1,C2,D1,D2;
     float Area;
    scanf("%d %d %d %d %d %d",&A1,&A2,&B1,&B2,&C1,&C2);
    D1=A1+C1-B1;
    D2=A2+C2-B2;
    Area=(A1*B2)+(B1*C2)+(C1*A2)-(A2*B1)-(B2*C1)-(C2*A1);
    printf("Case %d:%d  %d %.0f\n",i,D1,D2,Area);}

}
