///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll t,x;
string y;
int main()
{
    cin>>t;
    
    function< ll(ll,string) >getridofmodulos =[&] (ll a, string b){
     ll ret=0LL;
        for(auto it:b)
        {
            ret=ret*10LL + it-48;
            ret=ret%a;
        }
        return ret;
    };
    while(t--){
        cin>>x>>y;
        (x>0) ? cout<<__gcd(x,getridofmodulos(x,y))<<endl:cout<<y<<endl;
    }
}

