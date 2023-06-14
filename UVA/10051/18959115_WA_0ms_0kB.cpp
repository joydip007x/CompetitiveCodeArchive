#include<bits/stdc++.h>
using namespace std;

///*/////////////////// /// *
/*//    author-joydip007x  ///  */
#define M 1000
#define pb push_back
#define ll int
#define  ret return
char sp=35;
ll n,dp[M][M][105] ,x,t,cas=1,prnt,ans;

map<ll,vector<ll> >m;
ll gettop(ll a, ll b)
{
    if(b%2) ret m[a][b+1];
    ret m[a][b-1];
}
string gettopchar(ll i)
{
    if(i==1) ret "front";
    if(i==2) ret "back";
    if(i==3) ret "left";
    if(i==4) ret "right";
    if(i==5) ret "top";
    ret "bottom";
}
ll yo(ll index,ll las, ll tok)
{
     if(index<=0) ret 0;
     if(dp[index][las][tok]!=-1) ret dp[index][las][tok];
     ll ox=0,mx=0,iind=0;
     if(index!=t){
        for( ll i=1; i<=6; i++)
        {
            if( tok==m[index][i] ) ox=1+yo(index-1, index,gettop(index,i));
            mx=max(mx,ox);
        }
     }
     else{
        for( ll i=1; i<=6; i++)
        {
            ox=1+yo(index-1, index,gettop(index,i));
            mx=max(mx,ox);
        }
     }
    ox=yo(index-1,las,tok);
    mx=max(mx,ox);
    ret dp[index][las][tok]=mx;
}
void longlist(ll index,ll las, ll tok){

   if(prnt==ans) ret;
   if(index<=0) return ;
   ll ox=0,mx=0,iind=0;
   if(index!=t){
        for( ll i=1; i<=6; i++)
        {
            if( tok==m[index][i] ) ox=1+yo(index-1, index,gettop(index,i));
            if(ox>mx) iind=i,mx=ox;
        }
        ox=yo(index-1,las,tok);
       if(ox>mx) { longlist(index-1,las,tok); return;   }
       longlist(index-1,index,gettop(index,iind));
       printf("%d %s\n",index,gettopchar(iind).c_str());
       prnt++;
       return;
     }
     for( ll i=1; i<=6; i++)
        {
           ox=1+yo(index-1,index, gettop(index,i));
           if(ox>mx) iind=i,mx=ox;
        }
       ox=yo(index-1,las,tok);
      if(ox>mx) { longlist(index-1,las,tok); return;   }
      longlist(index-1, index, gettop(index,iind));
      printf("%d %s\n",index,gettopchar(iind).c_str());
      prnt++;
    return;
}
int main()
{
    ll ddd=0;
    while(scanf("%d",&t) and t){
        memset(dp,-1,sizeof dp);
        m.clear(); prnt=0;
        //if(ddd) printf("\n");ddd=0;
        for(ll i=1; i<=t; i++)
        {  for(ll o=0 ; o<=6; o++)
            {
                if(!o) {m[i].pb(0);continue;}
                 scanf("%d",&x);m[i].pb(x);
            }
        }
      ///  m[t+1]={0,0,0,0,0,0,0};
         ans=yo(t,t+1,0);
        printf("Case %c%d\n%d\n",sp,cas++,ans);ddd=1;
         longlist(t,t+1,0);
        printf("\n");
    }
}
/*
3
1 2 2 2 1 2
3 3 3 3 3 3
3 2 1 1 1 1
10
1 5 10 3 6 5
2 6 7 3 6 9
5 7 3 2 1 9
1 3 3 5 8 10
6 6 2 2 4 4
1 2 3 4 5 6
10 9 8 7 6 5
6 1 2 3 4 7
1 2 3 3 2 1
3 2 1 1 2 3
0
*/
