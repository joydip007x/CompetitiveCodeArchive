///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
#include<bits/stdc++.h>

using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));


#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define ll                        long long
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return
#define sz 225
ll x,y,dp[sz][sz],w1,v1,p[sz][sz],w[sz],t,co[sz];
ll wakeupNfux()
{

    for(ll i=1 ; i<=co[1] ; i++)
        for(ll k=1 ; k<=x ; k++)
          if(k>=p[1][i]) dp[1][k]=max(dp[1][k],p[1][i]);

     for(ll i=2 ; i<=y ; i++)
     {
         for(ll j=1 ; j<=co[i]; j++)
         {
             for(ll k=1 ; k<=x ; k++)
             {
                 if( k<p[i][j] || dp[ i-1][k-p[i][j]]==-1 ) continue;
                 dp[i][k]=max(dp[i][k] , dp[i-1][k-p[i][j]]+p[i][j] );
             }
         }
     }
    if(dp[y][x]!=-1) ret dp[y][x];
    ret 0;
}
int main()
{
     cin>>t;
     loop(ZZZ,0,t)
     {
        loop(cc,0,sz) loop(cc1,0,sz)   dp[cc][cc1]=-1,p[cc][cc1]=0;
        mem(co,0);
        cin>>x>>y;
         loopeq(i,1,y)
         {
            cin>>co[i];
            loopeq(k,1,co[i])
            {
                cin>>p[i][k];
            }
            sort( p[i],p[i]+co[i]);
         }
         ll pppp=wakeupNfux();
         if(pppp) cout<<pppp<<endl;
         else cout<<"no solution"<<endl;
     }
}
