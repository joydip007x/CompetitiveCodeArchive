#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
long long int n,m,i,a[1000000],extra=0,ans=0,tasin=0;
int roundchk(int x, int y,int xtra);
int main()
{
    cin>>n>>m;
    LOOP(i,0,m){cin>>a[i];}
    tasin=a[0]-1;
    for(i=0;i!=m;i++)
    {   int p=0;
        p=roundchk(a[i],a[i+1],0);
        if(p!=0){tasin=tasin+p; }
        else if(a[i+1]!=0)  {tasin=tasin+(a[i+1]-a[i]);  }
    }
    cout<<tasin;
 }
 int roundchk(int x,int y,int xtra)
 {
     if (y<x && y!=0) {int xtra=0; xtra=n-x;x=0;xtra=xtra+abs(x-y); return xtra; }
     else return 0;
 }