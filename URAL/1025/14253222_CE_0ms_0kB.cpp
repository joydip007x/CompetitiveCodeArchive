#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    double arr[1000],num=0;
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {cin>>arr[i];}
    sort(arr,arr+k );
    for(int j=0;j<=ceil(k/2);j++)
    {
        num=num+ceil(arr[j]/2);
    }
    cout<<num;
}
