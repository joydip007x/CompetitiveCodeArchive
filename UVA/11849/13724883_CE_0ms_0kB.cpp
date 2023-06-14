#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
long int i,e,f,g,h,k,x[100000000],y[100000000],z[100000000],m,n,j,flag=0;
int main()
{
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    scanf("%d",&m);
    for(j=0,k=0; j<m; j++)
    {
        scanf("%d",&y[j]);
        for(i=0; i<n; i++)
        {
            if(y[j]==x[i])
            {
                z[k]=y[j];
                k++;
                flag++;
            }
        }
    }
    printf("%d",k);
}

