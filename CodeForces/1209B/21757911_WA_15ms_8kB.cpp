#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,light[1000];
vector<ll>a,b;
string s;
ll ans=INT_MIN;
int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);
      cin>>n;
      cin>>s;
      for(int i=0; i<n; i++){

         ll ai,bi;
         cin>>ai>>bi;
         light[i]=bi;
         a.pb(ai);b.pb(bi);
      }
      ll cnt=count(s.begin(),s.end() , '1');
      if(  cnt==n) return cout<<n,0;
      ans=cnt;
      for(int ss=1; ss<=121; ss++){


            for(int i=0; i<n; i++){

                 if(light[i]==ss) {
                      if(s[i]=='0'){
                            s[i]='1';
                            cnt++;
                      }
                      else if(s[i]=='1'){
                            s[i]='0';
                            cnt--;
                      }
                      light[i]+=a[i];
                 }
            }
            ans=max(ans,cnt);
      }
      cout<<ans<<endl;

}