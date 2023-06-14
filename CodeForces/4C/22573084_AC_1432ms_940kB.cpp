#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,x  ;
int main()
{
   
   cin>>n;
   map<string,ll>m;
   while(n--){

   	   string s;
   	   cin>>s;
       if(m[s]==0){ cout<<"OK\n";  m[s]++; continue;}
   	   cout<<s<<m[s];
   	   m[s]++;
   	   cout<<endl;
   }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///