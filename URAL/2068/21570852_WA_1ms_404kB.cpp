#include<bits/stdc++.h>
using namespace std ;

#define ll          int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);


int main(){


    ll n; stack<ll>s;
   //// vector<ll>v;
     ll mov=0;
     sc(n);
     for(int i=0 ; i<n ; i++){

          ll x;
          sc(x);
          if(x==1 || x%3!=0 ) continue;
          s.push(x);
     }
     if(s.size()==0) return  printf("Stannis\n"),0;
     while(1){

          int f=0 ;
          while(s.size()){

               ll u=s.top();
               s.pop();
               if( u%3 !=0 ||  (u/3)%2==1 ) continue;
               mov++;
               f=1;
              /// if((u/3)%3!=0  ) { break; }
               s.push(u/3);
               s.push(u/3);
               s.push(u/3);
               break;
          }
         if(f) continue;
         else{
                ///cout<<" MOVE "<<mov<<endl;
              if(mov%2==0)  return printf("Daenerys\n"),0;
              else  return printf("Stannis\n"),0;
         }
     }
}
