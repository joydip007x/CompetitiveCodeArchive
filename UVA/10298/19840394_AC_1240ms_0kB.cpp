///*/////////////////// /// *
/*//    author-joydip007x  ///  */

#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool judge(string tmp, ll x){

    for(int i=x-1 ; i<tmp.size() ; i++){

        if( tmp[i]!=tmp[i%x]  ) return false;
    }
    return true;
}
int main()
{
    string s;
    while(cin>>s && s[0]!='.')
      {
           set<ll>ss(s.begin(),s.end());  
           if(ss.size()==1) { cout<<s.size()<<endl; continue;}
          ll ans=1;
          for(int i=2 ; i<=(s.size()/2) and 2*i <=s.size() ; i++)
          {
              if(s.size()%i) continue;
              ll lmt=s.size()/i;              
              if(judge(s,lmt)) ans=i;
          }
          cout<<ans<<endl;
      }
}
