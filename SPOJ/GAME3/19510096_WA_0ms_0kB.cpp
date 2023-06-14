#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                     long long
ll x,t;

ll rec(   )
{
    if(t%2==0) return false;
    for(ll i=2 ; i<=60; i++ )
    {
        if( t&(1<<i)  ) {
            if(i%2==0) return false;
        }
    }
    return true;

}
int main()
{
    cin>>x;
    for(int i=1; i<=x ; i++){
        cin>>t;
      if( rec()==false ) cout<<"Marica\n";
      else cout<<"Ivica\n";

    }
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
