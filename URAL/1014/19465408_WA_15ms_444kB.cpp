#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long


vector<ll>v;
ll x,y,p,cur,minn;
string s;
bool ban;
void primeFactors(ll n)
{
    while (n % 2 == 0)
    {
        n = n/2;
        v.pb(2);
    }

    for (ll i=3;i<=sqrt(n) ; i=i+2)
    {
        while (n%i == 0)
        {
            n = n/i;
            v.pb(i);
        }
    }
    if (n > 2)   v.pb( n);
}
int main()
{
   cin>>x;
   ban=false;
   if(x==0)
   {
       cout<<"10"<<endl;return 0;
   }
//   if(x<=9){  cout<<"1"<<x<<endl;return 0;}
   primeFactors(x);

  //// for(auto it:v) cout<<it<<" ";cout<<endl;
   sort(v.begin(),v.end() );
   cur=1;
   for(int i=v.size()-1 ; i!=-1 ; i--){

        if(v[i]>9)  return cout<<"-1\n",0;
       if( v[i]*cur <=9 )
       {
           cur=v[i]*cur;
       }
       else{
        s.pb(cur+'0');
        cur=v[i];
       }

   }
   s.pb(cur+'0');
   sort(s.begin(),s.end() );
   minn=stoll(s,nullptr , 10LL);
   s.clear();
   cur=1;

   ////cout<<s<<endl;
   cout<<minn<<endl;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
