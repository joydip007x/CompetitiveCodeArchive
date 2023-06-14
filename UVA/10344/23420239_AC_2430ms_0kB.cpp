#include<bits/stdc++.h>
using namespace std;
typedef int  ll;
#define sz 100000+1000
#define pb push_back


vector<ll>v={0,0,0,0,0},nn;

ll rec(  ll ind, ll used, vector<ll>c ){

    
     if(used>=31 ){
     	    if(used==31 && c.back()==23) return 1;
     	    return 0;
     }  
     for(int i=0; i<=4; i++){

     	  if(  (used&(1<<i))==0 ){

              ll num=v[i];
              ll used2= used|(1<<i) ;
              ll bak=c.back();

              c.push_back(bak+num);
              ll x=rec(ind+1, used2, c);
              c.pop_back();
              c.push_back(bak*num);
              ll y=rec(ind+1, used2, c);
              c.pop_back();
              c.push_back(bak-num);
              ll z=rec(ind+1, used2, c);
              c.pop_back();
              if(max({x,y,z})==1) return 1;
     	  }
     }
     return 0;
}
int main(){
    
   
   ll o=0;
   while(scanf("%d %d %d %d %d",&v[0],&v[1],&v[2],&v[3],&v[4]) && v[0]+v[1]+v[2]+v[3]+v[4]!=0){

        
        nn=vector<ll>();
        ll f=0;
        for(int i=0; i<=4 && f==0; i++){


               nn.clear();
               nn.pb(v[i]);
               ll x=rec(i+1, 0|(1<<i) , nn);
               if(x) f=1;
              
        }
        if(f==0) cout<<"Impossible\n";
        else cout<<"Possible\n";




   }	
    
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///