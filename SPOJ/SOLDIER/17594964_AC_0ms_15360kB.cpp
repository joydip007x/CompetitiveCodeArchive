#include<bits/stdc++.h>

using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  fs                       first
#define  sc                      second
#define  inf                     0x7fffffff
#define ll                        long long
#define    lfl                        long double
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return
ll qu,lmt,x,y,z;
vector<pii >ad[7];
ll dp[7][1099];
ll ans=-inf;
ll dps()
{
    loopeq(i,0,1089) dp[0][i]=(int)1e9;
    for(ll k=1 ; k<=6 ; k++)
    {
        for(ll c=1 ; c<=lmt ; c++)
        {
            dp[k][c]=dp[k][c-1];
            for(ll i=0 ; i<ad[k].size() ; i++)
            {
//                if( dp[i-1][j-ad[i][k].sc]==0 || ad[i][k].sc>j ) continue;
//                else
                    if(  (c-ad[k][i].sc)<0LL ) continue;
                    dp[k][c]=max( dp[k][c] ,
                                 min(dp[k-1][c-ad[k][i].sc],ad[k][i].fs));
            }
        }
    }
   /// loopeq(i,0,lmt) if(dp[6][i]) ans=max(ans,dp[6][i]) ;
    ret dp[6][lmt];
}
bool cmp(const pii a, const pii b)
{
    ret  a.fs>b.fs;
}
int main()
{
   ///set<ll>ss;
   ///scanf("%lld %lld",&qu,&lmt);
   cin>>qu>>lmt;
   loop(i,0,qu)
   {
       cin>>x>>y>>z;
    //scanf("%lld %lld %lld",&x,&y,&z);
    ///if(x>6) continue;
    if(x>6) continue;ad[x].pb({z,y});
    ///ss.insert(x);
   }
   ///if(ss.size()!=6) {printf("0\n"); ret 0;}
    ///loopeq(i,1,6) sort(ad[i].begin() , ad[i].end() ,cmp );
    memset(dp, 0 , sizeof dp);


   printf("%lld\n",dps() );


}
