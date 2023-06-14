#include<bits/stdc++.h>
#include<iostream>
///long double     p,x;
long long int p,x;
using namespace std;
int main()
{
long long  t;
 cin>>t;
 while(t--)
 {
   p=0;x=0;
   cin>>p;
   if(p%5==0) cout<<(p/5)<<endl;
   else cout<<(p/5)+1<<endl;
 }
}
