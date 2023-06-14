#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
int main()
{
    int a,b,x;
    cin>>a>>b>>x;
    if(x%2==0 && a<=b)
        {
            LOOP(i,0,x/2){cout<<"10";}

            LOOP(i,0,a-(x/2)) {cout<<"0";}
            LOOP(i,0,b-(x/2)){cout<<"1";}
        }
    if(x%2==0 && a>b)
        {
            LOOP(i,0,x/2){cout<<"01";}
            LOOP(i,0,b-(x/2)){cout<<"1";}
            LOOP(i,0,a-(x/2)) {cout<<"0";}
        }
   if(x%2==1 && a>b)
        {
            LOOP(i,0,x/2){cout<<"01";}
            LOOP(i,0,a-(x/2)) {cout<<"0";}
            LOOP(i,0,b-(x/2)){cout<<"1";}
        }
   if(x%2==1 && a<=b)
        {
            LOOP(i,0,x/2){cout<<"01";}
            LOOP(i,0,a-(x/2)) {cout<<"0";}
            LOOP(i,0,b-(x/2)){cout<<"1";}
        }
}