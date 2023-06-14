#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long
#define mod 1000000000

vector< pair < ll , string  >  > v;
vector< pair < ll , string  >  > ::iterator it ,pre;
ll n,x,cnt=0;
string s;
int main()
{
   cin>>n;
   for(int i=0 ; i<n ; i++ )cin>> s >>x ,v.pb({x,s});
   sort(v.begin() , v.end() );
   ll curmax=0,maxx=mod;
   for(int i=0 ; i<n ; i++)
   {
       int lagbe=v[i].first -curmax ;
       curmax=v[i].first ;
       v[i].first=1;
       if(!lagbe) continue;
       for(int j=i-1; j!=-1 && lagbe; j--)
       {
           if( v[j].first==1 )
           {
               v[j].first=--maxx;--lagbe;
           }
       }
       if(lagbe) return cout<<"-1",0;
   }
   for(auto it:v) cout<<it.second<<" "<<it.first<<endl;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
