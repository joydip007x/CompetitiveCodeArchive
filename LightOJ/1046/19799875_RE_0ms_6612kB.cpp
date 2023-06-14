#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define sz 105
#define MAX 999999
ll n,x ,val[sz][sz][sz],minans ;
ll movx[ ]={+1,+1,+2,+2,-1,-1,-2,-2 };
ll movy[ ]={+2,-2,+1,-1,+2,-2,+1,-1 };
ll r,c,mvc=0,cj,nok,curking,wowans;
struct kong{
    int sti;
    int stj,pow;
}kings[sz];

bool ok( ll a , ll b){
 if( a>=0 and a<r and b>=0 and b<c ) return true;
 return false;
}
bool ok2( ll a, ll b){
  wowans=0;
   for(int i=0 ; i<=nok; i++)
   {
       if( val[a][b][i]==MAX ) return  false;
       wowans+=val[a][b][i];
   }
   return true;
}
ll dfs( ll a , ll b, ll mm){

   queue<ll>q;
   val[a][b][curking]=0;
   q.push(a);q.push(b); q.push(mm);
   while(q.size() ){
        ll u=q.front();q.pop();
        ll v=q.front();q.pop();
        ll po=q.front();q.pop();
        for(int i=0 ; i<8 ; i++)
        {
            int tmpx=u+movx[i];
            int tmpy=v+movy[i];
            if(val[tmpx][tmpy][curking]!=MAX || !ok(tmpx,tmpy)) continue;
            val[tmpx][tmpy][curking]= min( val[tmpx][tmpy][curking],((cj-1)+po+1)/cj  );
            q.push(tmpx),q.push(tmpy),q.push(po+1);
        }
    }
   return 0;
}
void seperatefukingview();
int main()
{
  int t;
  scanf("%d",&t);
  for(int cas=0 ; cas<t ; cas++){
      scanf("%d %d",&r,&c); nok=-1;
      minans=MAX;
      for(int i=0 ; i<r ; i++)
      {
           char ch[sz];int cc;
           scanf("%s",ch);
          for(int j=0 ; j<strlen(ch); j++)
          {
              if(ch[j]>='0' and ch[j]<='9'){
              cc=ch[j]-48 ;
              ++nok;
              kings[nok].sti=i;kings[nok].stj=j;
              kings[nok].pow=cc;
              }
          }
      }
      for(int i=0 ; i<=r; i++)
      {   for(int j=0;j<=c;j++){
             for(int k=0;k<=nok+2+33;k++)
                {val[i][j][k]=MAX;}
          }
      }
     // cout<<" number of kings - "<<nok<<endl;
      for(int i=0 ; i<=nok ; i++)
      {
          cj=kings[i].pow ; curking=i;
          dfs(kings[i].sti,kings[i].stj,0);
      }
     // seperatefukingview();
      for(int i=0 ; i<r ; i++)
      {
          for(int j=0 ; j<c; j++){
            if(ok2(i,j) ){
            minans=min(minans ,wowans );
            }
          }
      }
    if(minans==MAX) minans=-1;
    printf("Case %d: %d\n",cas+1,minans);
  }
  return 0;
}
//void seperatefukingview(){
//   for(int i=0 ; i<=nok ; i++){
//        cout<<"\n fukin KING "<<i<<" \n";
//        for(int j=0 ; j<r ; j++)
//        {
//            for(int k=0 ; k<c; k++)
//            {
//                cout<<val[j][k][i]<<" ";
//            }cout<<endl;
//        }
//    }
// }
///author-joydip007x         ///
///Time&Date-Whenever i submit///
