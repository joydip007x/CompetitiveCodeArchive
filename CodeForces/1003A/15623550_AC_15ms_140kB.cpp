#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main()
{
    map<int,int > m;
    int x,arr[1000],n,i,j;
    map<int,int>::iterator z;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
    }
    for(z=m.begin(),j=0;z!=m.end();z++,j++)
    {
        arr[j]=z->second;
    }
    sort(arr,arr+j,std::greater<int>());
    cout<<arr[0];
}