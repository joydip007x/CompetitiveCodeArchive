#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

long long ans=0LL;
ll t;
int main(){

    sc(t);
    while(t--){

          ll n;
          sc(n);
          ll zero=0 ; ans=0LL;
          vector<ll>neg,pos;
          pos.clear(); neg.clear();
          for(int i=0 ; i< n ; i++){


               ll x;
               sc(x);
               if(x==1) ans++;
               else if(x==0 ) zero++;
               else{

                   if(x>1) pos.pb(x);
                   else neg.pb(x);

               }
          }
          sort(pos.begin(),pos.end() );
          sort(neg.begin() ,neg.end() );
         reverse(neg.begin(),neg.end() );

          if(pos.size()%2==1){

               reverse(pos.begin(),pos.end() );
               ans+=pos.back();
               pos.pop_back();
               reverse(pos.begin(),pos.end() );
          }
          for(int j=pos.size()-1; j-1>=0   ; j=j-2 ){
                   ans=ans+(pos[j-1]*pos[j]);
          }
          if(neg.size()%2==1){

                if(zero) {
                    reverse(neg.begin(),neg.end() );
                    neg.pop_back();
                    reverse(neg.begin(),neg.end() );
                }
                else{
                     reverse(neg.begin(),neg.end() );
                     ans=ans+neg.back();
                     neg.pop_back();
                     reverse(neg.begin(),neg.end() );
                }
          }
          for(int j=neg.size()-1; j-1>=0  ; j=j-2 ){
                   ans=ans+(neg[j-1]*neg[j]);
          }
         cout<<ans<<"\n";
    }

}


