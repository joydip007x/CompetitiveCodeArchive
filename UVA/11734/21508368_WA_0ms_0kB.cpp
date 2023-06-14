#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

//char team[20000], judg[20000];
string team, judg;
string spac=" ";
int main(){


 sc(t);
getchar();
    for( int o=0 ; o<t; o++){

       printf("Case %d: ",o+1);
           getline(cin,team);
           getline(cin,judg);
           if(team==judg) {   cout<<"Yes\n"; continue; }
           ll  k=0;
           ll nov=0,i=0 ;
           for(  ; i<judg.size();i++){

                 char sear=judg[i];
                 if(sear==spac[0]) continue;
                 while(k<team.size() && team[k]!=sear   ) {
                        k++;
                 }
           }
           ///cout<<i<<" "<<judg.size()<<endl;
           if(i==judg.size() ){
            cout<<"Output Format Error\n";

           }
           else{
             cout<<"Wrong Answer\n";
           }
     }
}
