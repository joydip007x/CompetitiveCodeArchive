#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
long long int arr[5002][5002],i=0,j=0,p=0,q=0,l=0,m=0,n=0,x=0,y=0,flag[6000],D=1,Gra=0,T=0;

int main()
{
    scanf("%d %d %d",&n,&m,&T);
    for(x=0;x<n;x++)
        {
                for(y=0;y<m;y++)
                    {
                        scanf("%d",&arr[x][y]);
                    }
        }
    while(D<=T)
    {
        scanf("%d %d",&i,&j);
        if(arr[i-1][j-1]==0){arr[i-1][j-1]=1;}
        else arr[i-1][j-1]=0;
        for(x=0,Gra=0;x<n;x++)
        {
                for(y=0;y<m;y++)
                    {
                        if(arr[x][y]==1){flag[Gra]++;}
                    }Gra++;
        }
        sort(flag,flag+(n));
        printf("%d\n",flag[n-1]);
        D++;
        for(x=1,Gra=0;x<=n;x++,Gra++)
        {
                flag[Gra]=0;
        }


    }
}