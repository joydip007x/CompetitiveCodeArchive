#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

ll t;

int main(){


      sc(t);
      int cas=0;
      while(t--){

             ++cas;
             printf("Case %d:\n",cas);
             ll n;
             sc(n);
             vector<ll>v;
             multiset<ll>s;
             s.clear();v.clear();
             for(int i=0 ; i<n ; i++){

                 char a[121];
                 scanf("%s",&a);
                 if(a[0]=='A'){

                      ll xx;
                      sc(xx);
                      v.pb(xx);
                      s.insert(xx);
                 }
                 else if(a[0]=='Q'){

                     if(v.size()==0 || s.size()==0 ) {
                          printf("Empty\n");
                     }
                     else printf("%d\n",*prev(s.end() ));

                 }
                 else if(a[0]=='R'){

                    if(v.size()==0 || s.size()==0) continue;
                    else{
                         ll remo=v[v.size()-1];
//                         cout<<"to remove "<<remo<<endl;
//                         cout<<" BEFORE : ";
//                         for(auto it:s) cout<<it<<" ";cout<<endl;

                         auto ix=s.find(remo);
                         s.erase(ix);
                         v.pop_back();
//                         cout<<" AFTER : ";
//                         for(auto it:s) cout<<it<<" ";cout<<endl;
                   }
                 }
             }
      }

}
