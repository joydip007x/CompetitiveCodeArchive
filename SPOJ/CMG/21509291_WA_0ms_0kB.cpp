#include<bits/stdc++.h>
using namespace std ;

#define ll            int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

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
                 else{
                    if(v.size()==0 ) continue;
                   else{
                     s.erase(v.back());
                     v.pop_back();
                 }
                 }
             }
      }

}
