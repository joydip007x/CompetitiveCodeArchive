#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                     long long 
ll x,t;

ll rec(   )
{
    if(t%2==0) return false;
    ll pos=0 , len=log2(t)+1 ;
    ///cout<<" T - "<<t<<" for "<<t<<" LEN "<<len<<endl;
    for(ll i=1 ; i<=len; i++ , pos++)
    {
        if( t&(1<<i)  ) {
            if(i%2==0) return false;
        }
    }return true;

}
int main()
{
    cin>>x;
    for(int i=1; i<=x ; i++){
        cin>>t;
      if( rec()==0 ) cout<<"Marica\n";
      else cout<<"Evica\n";

    }
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
