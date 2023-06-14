///////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
#define ll                       int
#define  ret                     return
#define pb push_back
///*/////////////////// /// *
/*//    author-joydip007x  ///  */
 
#define M 150
vector<ll>v[202];
ll n,x,t,dp[M][M],lmt;
bool valid(ll line , ll index)
{
    if(  index>0  && v[line].size() >index ) ret 1;
    ret 0;
}
ll Bna(ll ln , ll ind )
{
    if(ln==lmt    ) ret 0;
    if( dp[ln][ind]!=-1 ) ret dp[ln][ind];
    if(  ln<n )
    {
        ll ind1=ind,ind2=ind+1,x=0,y=0;
   if(valid(ln+1,ind1) )x= Bna(ln+1,ind1);
   if(valid(ln+1,ind2) )y= Bna(ln+1,ind2);
        ret dp[ln][ind]=max(x,y  )+v[ln][ind];
    }
    else
    {
        ll ind1=ind,ind2=ind-1,x=0,y=0;
   if(valid(ln+1,ind1) )x= Bna(ln+1,ind1);
   if(valid(ln+1,ind2) )y= Bna(ln+1,ind2);
        ret dp[ln][ind]=max(x,y  )+v[ln][ind];
    }
    ret 1;
}
int main()
{
    scanf("%d",&t);
    for(ll o=1 ; o<=t ; o++)
    {
        scanf("%d\n",&n); lmt=2*n ;
        char s[8000];
        for(ll i=1; i<=2*n-1 ; i++)
        {
            fgets(s,8899,stdin);
            v[i].clear();v[i].pb(0);
            //cout<<" got  "<<s<<endl;
            stringstream S(s);
            int x;
            while(S>>x)v[i].pb(x);
        }
        memset(dp,-1,sizeof dp);
        printf("Case %d: %d\n",o,Bna(1,1));
//        cout<<"Main array :\n";
//        for(ll i=1; i<=2*n-1 ; i++)
//        {
//           for(auto it:v[i]) cout<<it<<"  ";cout<<endl;
//        }
    }
    ret 0;
 
}
/*
3
4
7
6 4
2 5 10
9 8 12 2 1 2 3 4 5 6
2 12 7
8 2
10
2
1
2 3
1
4
7
6 4
2 5 10
9 8 2 12
2 7 12
8 2
10
*/
 