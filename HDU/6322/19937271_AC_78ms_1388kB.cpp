#include<iostream>
using namespace std;
typedef long long ll;

int n,x  ;
int tot(int n)
{
    int ret = n;
    for (int i=2;i*i<= n;i++)
    {
        if (n % i == 0) {
        while (n % i == 0)
                n /= i; ret-=ret/i;
        }
    }
    if (n!=1) ret-= ret / n;
    return ret;
}
int main()
{
  int t,k;
  scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&k);
       // printf("%d\n",tot(k+2));
       if(k==1) { printf("5\n" );  continue;}
       if(k==2) { printf("7\n" );  continue;}
       printf("%d\n",5+k);

    }
    return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
