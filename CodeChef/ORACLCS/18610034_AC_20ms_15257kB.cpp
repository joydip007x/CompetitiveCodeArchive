#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll t,n,na=0,nb=0,mn=INT_MAX;
    cin>>t;
    string c;
    while(t--)
    {
        cin>>n;
        mn=INT_MAX;
        for(ll i=0 ; i<n ; i++)
        {
        cin>>c;
        na=count(c.begin() , c.end() ,'a');
        nb=count(c.begin() , c.end() ,'b');
        mn=min({mn,na,nb});
        na=nb=0;
        }
        ////cout<<" XX ";
        cout<<mn<<endl;

    }
}
