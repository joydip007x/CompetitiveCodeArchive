#include<bits/stdc++.h>
using namespace std;

///*/////////////////// /// *
/*//    author-joydip007x  ///  */
#define M 520
#define pb push_back
#define ll int
#define  ret return
char sp=35;
ll n,dp[M][M] ,x,t,cas=1;

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
ll yo(ll index,ll las)
{
     if(index<=0) ret 0;
     if(dp[index][las]!=-1) ret dp[index][las];
     ll ox=0,mx=0,iind=0;
     for( ll i=1; i<=6; i++)
     {
         if(  index==t || las==m[index][i] ) ox=1+yo(index-1, gettop(index,i));
         if(ox>mx){mx=ox,iind=i ;}
     }
     ox=yo(index-1,las);
     ret dp[index][las]=max(ox,mx);
}
void longlist(ll index,ll las){

   if(index<=0) return ;
   ll ox=0,mx=0,iind=0;
     for( ll i=1; i<=6; i++)
     {
         if(  index==t || las==m[index][i] ) ox=1+yo(index-1, gettop(index,i));
         if(ox>mx){mx=ox,iind=i ;}
     }
     ox=yo(index-1,las);
     if(ox>mx)  {longlist(index-1,las); return; }

     longlist(index-1, gettop(index,iind));
      printf("%d %s\n",index,gettopchar(iind).c_str());

}
int main()
{
    ll ddd=0;
    while(scanf("%d",&t) and t){
        memset(dp,-1,sizeof dp);
        m.clear();
        if(ddd) printf("\n");
        ddd=0;
        for(ll i=1; i<=t; i++)
        {  for(ll o=0 ; o<=6; o++)
            {
                if(!o) {m[i].pb(0);continue;}
                 scanf("%d",&x);m[i].pb(x);
            }
        }
        ll ans=yo(t,1);
        printf("Case %c%d\n%d\n",sp,cas++,ans);ddd=1;
        longlist(t,1);
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
