#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
int main()
{
    int n,k,j,p,a[2000],flag=0,i,c_val=0;
    cin>>n>>k;
    p=n;j=0;
    while(p--){cin>>a[j++];}
    c_val=a[k-1];
    for(i=0;i<n;i++)
    {
        if(a[i]>=c_val && a[i]>0)
        {
             ///cout<<"for "<<a[i]<<"we are accepting"<<endl;
            flag++;
        }
    }
  ///  cout<<c_val<<endl;
    cout<<flag;
}