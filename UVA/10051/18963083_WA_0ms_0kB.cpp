#include<bits/stdc++.h>
using namespace std;

///*/////////////////// /// *
/*//    author-joydip007x  ///  */
#define M 505
#define pb push_back
#define ll int
#define  ret return
char sp=35;
ll n,dp[M][105] ,x,t,cas=1,prnt,ans;

map<ll,vector<ll> >m;
ll gettop(ll a, ll b)
{
    if(b%2) ret m[a][b+1];
    ret m[a][b-1];
}
string gettopchar(ll i)
{
    if(i==1) ret "back";
    if(i==2) ret "front";
    if(i==3) ret "right";
    if(i==4) ret "left";
    if(i==5) ret "bottom";
    ret "top";
}
ll yo(ll index,ll tok)
{
     if(index<=0) ret 0;
     if(dp[index][tok]!=-1) ret dp[index][tok];
     ll x=0  , y=0;
     for(ll i=1 ; i<=6 ; i++){
        if( !tok || tok==m[index][i]) x=max(x,1+yo(index-1, gettop(index,i)) );
     }
     x=max(x,yo( index-1,tok)  );
    ret dp[index][tok]=x;
}
void longlist(ll index, ll tok){
    if(prnt==ans) ret;
    if(index<=0) ret ;
    ll x=dp[index][tok],y=0,mx=0;
    if(x==dp[index-1][tok]) { longlist(index-1,tok);      ret;}
     for(ll i=1 ; i<=6 ; i++){
        if(  mx<= dp[index-1][gettop(index,i)] ) {mx=dp[index-1][gettop(index,i)],y=i; }
     }
     prnt++;
     longlist(index-1,gettop(index,y));
     printf("%d %s\n",index,gettopchar( y ).c_str() );
       ret;
}
int main()
{
    ll ddd=0;
    while(scanf("%d",&t) and t){
        memset(dp,-1,sizeof dp);
        m.clear();prnt=0;
        for(ll i=1; i<=t; i++)
        {  for(ll o=0 ; o<=6; o++)
            {
                if(!o) {m[i].pb(0);continue;}
                 scanf("%d",&x);m[i].pb(x);
            }
        }
        ans=yo(t,0);
        printf("Case %c%d\n%d\n",sp,cas++,ans);ddd=1;
        longlist(t,0);
        printf("\n");
    }
}
/*
9
7 12 2 16 20 9
5 9 2 11 14 1
15 5 5 15 8 17
4 12 8 6 20 17
13 12 18 9 16 8
15 2 19 16 10 18
16 14 19 9 4 12
9 10 17 5 4 4
14 19 7 1 5 19
*/
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
