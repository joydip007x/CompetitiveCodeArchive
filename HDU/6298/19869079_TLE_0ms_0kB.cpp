#include<iostream>
using namespace std;
typedef long long ll;

ll n,x  ;
int main()
{

   int t;cin>>t;
   while(t--)
   {
     int x;cin>>x;
     if(x==1 || x==2) {cout<<"-1\n";continue;}
     else x=x-2;
     cout<<x<<"\n";
   }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
