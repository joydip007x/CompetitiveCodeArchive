#include<iostream>
using namespace std;
int main()
{
 long  double x,n=0,xa=0,i;
 long double xd=0;
 cin>>x;
 for(i=1;i<=int(x/2);i++)
 {
  xd=(x-i)/i ;
  if(xd==(int)xd){n++;}

    xd=0;
 }
 if(x<=2)cout<<1;
 else cout<<n;
}
