#include<iostream>
#include<vector>
#include<set>
#include<string.h>
#include<algorithm>
#include<stdio.h>
using namespace std ;

#define ll           int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const ll sz=55;
ll cas,n,m,t ,a[sz][sz] ,ptime,posx, posy ;
set< pair< ll, pair <ll,ll > > > ss;
set< pair< ll, pair <ll,ll > > > ::iterator it ;
vector<  pair< ll, pair <ll,ll > > > vv;
vector<  pair< ll, pair <ll,ll > > > ::iterator it2;
ll mx;
#define pxp pair <ll,ll >
ll nikal_lauda( ll s, ll e , ll ti){

  ///cout<<"After coolecting first nut time reamining = "<<t-ti<<"( s e )"<<s<<" , "<<e<<endl;
  ll remain=t-ti, px=s, py=e,nadd=0;
  ll ad[sz][sz] ;

  memset(ad,-1,sizeof ad);
  pair< ll, pair <ll,ll > >pxx;
  for(it2=vv.begin() ; it2!=vv.end() ; it2++ ){

      ll gain=it2->first ;
      ll nx=it2->second.first;
      ll ny=it2->second.second;
      ll dis=abs(nx-px)+abs(ny-py)+1;
     ///// cout<<" (px,py) ("<<px<<","<<py<<") "<< nx<<" , "<<ny<<" ]] ";
      if(remain<=0 ) break;

      if( dis<=remain  ) {

         remain=remain-dis;
        ///// cout<<" REMAIN = "<<remain<<" DIS "<<dis<<" ";
         ad[nx][ny]=remain;
        /// cout<<" nx "<<nx<<" ny "<<ny<<" remain "<<ad[nx][ny]<<endl;
      }
      else break;
      px=nx, py=ny;
  }
  ll toot=0;

    for(it2=vv.begin() ; it2!=vv.end() ; it2++ ){

       ll gain=it2->first ;
      ll nx=it2->second.first;
      ll ny=it2->second.second;

      if( ad[nx][ny]==-1 || ad[nx][ny]<nx  ) {
           break;
      }
      else if( ad[nx][ny]>=nx  ){

          toot=toot+gain;
      }
  }
  return toot ;
}
int main(){


     sc(cas);
     while(cas--){

           sc(m);sc(n);sc(t);
           t=t-2;
           mx=0; ptime=-1;
           posx=posy=-1;
           ss.clear(); vv.clear();

           for(int i=0 ; i<m; i++){

              for(int j=0 ; j<n; j++){

                  scanf("%d",&a[i][j]);

                  if(a[i][j]>mx and a[i][j]>0  ) {

                     mx=a[i][j];
                     ptime=(2*i)+1;
                     posx=i, posy=j;
                  }

                  if(a[i][j]>0 ) {

                   pxp wowp=make_pair(i,j );
                   pair< ll, pxp >ff=make_pair( a[i][j]  , wowp );
                   ss.insert( ff );
                  /// cout<< a[i][j]<<" X Y "<<i<<" "<<j<<endl;
                  }
              }
           }
           if(ptime>t) {  printf("0\n"); continue; }
           if(ptime==t){  printf("%d\n",mx); continue; }



           for(it=ss.begin() ; it!=ss.end() ; it++ ) {

                if( it->first!=mx )
                    vv.pb(*it);

           }
           reverse(vv.begin(),vv.end() );
//           cout<<"PEANUTS : \n";
//           for(auto it:vv) cout<< it.first<<" "<<"[ "<<it.second.first<<","<<it.second.second<<"] \n";
//           cout<<"\n ";
//           cout<<" POS X "<<posx+1<<endl;

           ptime= mx +  nikal_lauda( posx, posy, posx+1 );
//           cout<<" BAL BAL MA KA LAUDA === ";
           printf("%d\n",ptime) ;
     }
}
/*
2
6 7 21
0 0 0 0 0 0 0
0 0 0 0 13 0 0
0 0 0 0 0 0 7
0 15 0 0 0 0 0
0 0 0 9 0 0 0
0 0 0 0 0 0 0
6 7 20
0 0 0 0 0 0 0
0 0 0 0 13 0 0
0 0 0 0 0 0 7
0 15 0 0 0 0 0
0 0 0 9 0 0 0
0 0 0 0 0 0 0
*/
