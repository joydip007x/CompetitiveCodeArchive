#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main(){

    ios::sync_with_stdio(false); cin.tie(nullptr);
    int cas=0;
    while(1){

         ll n;
         cin>>n;
         cas++;
         if(!n) break;
         ll a[n+2][n+2], tp[n+2],me[n+2] ,tot=0 , ans= 0 ;
         memset(tp,0,sizeof tp);
         memset(me,0,sizeof me);
         for(int i=0 ; i < n ; i++){

            for(int j=0; j < n ; j++){
                 cin>>a[i][j];
                 tot+=a[i][j];
                 tp[i]+=a[i][j];
                 me[j]+=a[i][j];

            }
         }
         for(int i=0 ; i< n ; i++){

              ///cout<<"bank no "<<i+1<<" pays= "<<tp[i]<<" : moneyearned "<<me[i]<<endl;
              ll a=tp[i] , b=me[i] ;
              if( tp[i]==me[i]) continue;
              if(tp[i]>me[i] ) ans=ans+(tp[i]-me[i]);
         }
         cout<<cas<<". "<<tot<<" "<<ans<<"\n";


    }
}
