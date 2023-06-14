#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
int main()
{
    long double y,x,ans=0;
    while(cin>>y && y!=0)
    {
        x=floor(log(y)/log(2));
        ans=2*(y-pow(2,x));
        if(ans>0) cout<<ans<<endl;
        else cout<<y<<endl;
        x=0;
    }
}
