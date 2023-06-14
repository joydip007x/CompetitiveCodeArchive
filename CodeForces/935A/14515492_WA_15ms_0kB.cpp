#include<iostream>
using namespace std;
int main()
{
 long long x,n=0,xa=0,i;
 long double xd=0;
 cin>>x;
 for(i=1;i<(x/2)-1;i++)
 {
  xd=(x-i)/i ;
  if(xd-(int)xd==0){n++;}
    xd=0;
 }
 if(x<=2)cout<<2;
 else cout<<n;
}
