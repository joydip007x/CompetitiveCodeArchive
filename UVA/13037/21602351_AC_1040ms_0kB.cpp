#include<bits/stdc++.h>
using namespace std ;

#define ll            int
#define pb            insert
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll t ;

int main(){

     sc(t);
     for(int cas=1; cas<=t ; cas++){

          ll a,b,c, o[5],mis[5] ,x;
          sc(a);sc(b);sc(c);
          memset(o, 0,sizeof o);
          memset(mis,0,sizeof mis);
          map< ll, set<ll > >u;
          for(int i=0 ; i<a ; i++) {  sc(x); u[x].pb(1);}
          for(int i=0 ; i<b ; i++) {  sc(x); u[x].pb(2);}
          for(int i=0 ; i<c ; i++) {  sc(x); u[x].pb(3);}
//          for(auto it:u){
//
//             cout<<it.first<<" : ";
//             for(auto it2: it.second) cout<<it2<<" ";
//             cout<<endl;
//          }
          for(auto it:u){

              if(it.second.size()==1){
                    ll val=*(it.second.begin());
                    o[val]++;
              }
              else if( it.second.size()==2){

                    ll val=*(it.second.begin());
                    ll val2=*prev(it.second.end());
                    if( val==1 && val2==2) mis[3]++;
                    if( val==2 && val2==3) mis[1]++;
                    if( val==1 && val2==3) mis[2]++;
              }
          }
          printf("Case #%d:\n",cas);
          for(int i=1; i<=3; i++){
               printf("%d %d\n",o[i],mis[i]);
          }
     }
}
