#include<iostream>
using namespace std;
int main()
{
    long long int x,p=0,i=1,c;
    cin>>x;
    c=x;
    if (x==2) {cout<<"3";}
   else if (x==1) {cout<<"1";}
   else
    {for(x=x-1; x>0; i++,x--)
    {
        p=p+(x*i);
    }
        cout<<p+c;}
}