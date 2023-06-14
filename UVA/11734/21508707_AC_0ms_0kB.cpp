#include<bits/stdc++.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

//char team[20000], judg[20000];
string team, judg;
string spac="   ";
int main(){


 sc(t);
getchar();
    for( int o=0 ; o<t; o++){

           getline(cin,team);
           getline(cin,judg);
           ll  k=0;
                  printf("Case %d: ",o+1);
        string sec;
           for(int i=0; i<team.size() ; i++) {
                if(team[i]==spac[0]) continue;
                sec.pb(team[i]);
           }
           ll cnt2=0;
           for(int i=0 ; i<min(team.size(),judg.size() ) ; i++){

               if(team[i]==judg[i]) cnt2++;
           }
           if(cnt2==team.size() && cnt2==judg.size() ){

             cout<<"Yes\n";
             continue;
           }
            cnt2=0;
           for(int i=0 ; i<min(sec.size(),judg.size() ) ; i++){

               if(sec[i]==judg[i]) cnt2++;
           }
           if(cnt2==sec.size() && cnt2==judg.size() ){

             cout<<"Output Format Error\n";
             continue;
           }
//            ll nov=0,i=0 ,cnt=0;
//           for(  ; i<judg.size();i++){
//
//                 char sear=judg[i];
//                 if(sear==spac[0]) continue;
//                 while(k<team.size() && team[k]!=sear   ) {
//                        k++;
//                 }
//           }
//           ///cout<<i<<" "<<judg.size()<<endl;
//           if(i==judg.size() ){
//            cout<<"Output Format Error\n";
//          continue;
//           }
//           else{
             cout<<"Wrong Answer\n";
//           }
     }
}
