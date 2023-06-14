#include<bits/stdc++.h>
using namespace std;

#define ll int
#define ret return
#define M 5020
ll n,k, d[M],ans,mx=INT_MAX;
char a[M] ,b[M],cc;
int main()
{
    cin>>n>>k;
    for ( ll i=0;i<n ; i++ )
    {
        cin>>a[i];
        d[ (int)a[i] ]++;
    }
    if(k>n) ret cout<<"WRONGANSWER",0;
    if(k==n)  { for(ll i=0; i<n ; i++)cout<<a[i] ;ret 0; }
    for(ll i='a' ; i<='z' ; i++)
    {
       if(  d[(int)i] <mx) mx=d[(int)i] ,cc=i;
    }
    k=k-mx;
    if(k<0) ret cout<<"WRONGANSWER",0;
    string s3(n,cc);
    for(ll i=0 ; i<s3.size() and k ; i++)
    {
        if( a[i] ==cc ) continue;
        s3[i]=a[i];--k;
    }
    cout<<s3;


}
////////////*//
//joydip007x//
/////////////
