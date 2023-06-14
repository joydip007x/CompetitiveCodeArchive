#include<stdio.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int i,j,sum=0,l,l2,arr[200];
    cin>>l>>l2;
    for(i=0; i<l; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<l; i++)
    {
        if(l2<arr[i])
        {
            arr[i]=0; ///cout<<i<<"ni"<<endl;
        }
    }
    /*for(j=l-1;j>0;j--)
    {
        if(l2<arr[j]) {arr[j]=0;}
    }*/
    for(j=l-1; j>0; j--)
    {
        if(arr[j]!=0)
        {
            sum++;
            ///cout<<"gotR"<<endl;
        }
        if (arr[j]==0)
            break;
    }
    for(i=0; i<l; i++)
    {
        if(arr[i]!=0)
        {
            sum++;
            ///cout<<"gotL"<<endl;
        }
        if (arr[i]==0)
            break;
    }

    if(sum<=l){cout<<sum;}
    else cout<<l;
}