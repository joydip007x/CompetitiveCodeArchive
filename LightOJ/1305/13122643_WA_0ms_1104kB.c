#include<stdio.h>
#include<math.h>
int s,x,y,z,v,b,n;
int main()
{
    int A1,A2,B1,B2,C1,C2,D1,D2;
    float A,B,C,Sur,t;
    float Area;
    float arr[100],DD[100],DD2[100];
    scanf("%d",&t);
    for(int i=0; i<=t; i++)
    {
    
            scanf("%d %d %d %d %d %d",&A1,&A2,&B1,&B2,&C1,&C2);
            D1=A1+C1-B1;
            D2=A2+C2-B2;
            x=abs(B1-A1);
            y=abs(B2-A2);
            z=abs(C1-B1);
            v=abs(C2-B2);
            b=abs(A1-C1);
            n=abs(A2-C2);
            A1=pow(x,2)+pow(y,2);
            A=sqrt(A1);
            B1=pow(z,2)+pow(v,2);
            B=sqrt(B1);
            C1=pow(b,2)+pow(n,2);
            C=sqrt(C1);
            Sur=(A+B+C)/2;
            Sur=(Sur-A)*(Sur-B)*(Sur-C)*Sur;
            Area=sqrt(Sur);
            Area=2*Area;
            Area=ceil(Area);
            arr[i]=Area;
            DD[i]=D1;
            DD2[i]=D2;
             printf("Case %d:%.0f %.0f %.0f\n",i,DD[i],DD2[i],arr[i]);
        }

       
    }