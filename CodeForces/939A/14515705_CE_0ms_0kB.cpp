#include<iostream>
using namespace std;
int main()
{
    long long int n,x[8000],nigga=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i];
    }
    for(int j=1;j<=n;j++)
    {
        if (   x[x[ x[j] ] ]   ==x[j]  && x[i]!=i  )
            {       ///cout<<"j="<<j;
                cout<<"YES"; nigga=1;break;}
    }
    if (nigga==0) cout<<"NO";
}
