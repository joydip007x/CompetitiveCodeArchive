#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,z;
	double k ,l;
	scanf("%lf %lf %lf",&x,&y,&z);
    k=ceil(x/z);
	l=ceil(y/z);
	printf("%.0lf",k*l);
}