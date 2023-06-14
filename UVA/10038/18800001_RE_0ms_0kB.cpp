#include<bits/stdc++.h>
using namespace std;
#define ll int
ll n,x,NOTJUMP,previ,diff;
int main()
{
     while(cin>>n)
     {
         set<ll>s;
         cin>>previ;
         for(ll i=1; i<n; i++)
         {
             cin>>x;
             s.insert(abs(previ-x) );
             previ=x;

         }
         if(  s.count(0) || *prev(s.end())!=n-1 ||s.size()!=n-1 ) cout<<"Not jolly\n";
         else cout<<"Jolly\n";
     }
}

