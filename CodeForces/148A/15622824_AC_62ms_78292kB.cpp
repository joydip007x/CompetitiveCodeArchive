/// Never Give UP ///
/*                                  *
 *    joydip007x             	    *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
/// i repeat , never :)		*///

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)

long long int x[3],mai[10000000],p,i,flag=0;
int main()
{
    cin>>x[0]>>x[1]>>x[2]>>x[3]>>p;
    LOOP(i,1,p+1) {mai[i]=i;}
    for (int j=0;j!=4;j++)
            for (i=1;i<=p;i++)
                {
                        if(mai[i]!=0 && mai[i]%x[j]==0){flag++;   mai[i]=0;}
                }

   if (flag>0)  cout<<flag;
   else cout<<"0";
}