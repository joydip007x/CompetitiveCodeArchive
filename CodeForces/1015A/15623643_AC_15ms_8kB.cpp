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

int main()
{ int n,m,i;
    cin>>n>>m;
    int d[1000];
    for( i=1;i<=m;i++){d[i]=i;}
    for(int j=0;j<n;j++)
    {   int x,y;
        cin>>x>>y;
        for( i=x;i<=y;i++)
        {
            d[i]=0;
        }

    }
    int gud=0;
    for(  i=1;i<=m;i++)
    {
        if(d[i]!=0){gud++;}
    }
    cout<<gud<<endl;
    if(gud!=0)
    {for(  i=1;i<=m;i++)
    {
        if(d[i]!=0){cout<<d[i]<<" ";}
    }
    }
}