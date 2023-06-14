#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define  ret return
///*/////////////////// /// *
/*//    author-joydip007x  ///  */
#define M 10000
#define pb push_back
ll dp[M][M] ,n,lmt,a[M],t,pp=0;
vector<pair<ll,ll> >A,B={{0,0}};
map< pair<ll,ll> , vector<pair<ll,ll> > > m;
vector <pair<ll,ll> > lds(ll last,ll cur)
{
    if(last==lmt || cur>lmt) ret B;
    if(dp[last][cur]!=-1 ) ret m[{last,cur} ];
    vector<pair<ll,ll> >v1,v2;
    if(  a[last]<a[cur] )
    {
       v1.pb({ a[cur],cur });
       vector<pair<ll,ll>>tmp=lds( cur,cur+1 );
       v1.insert(v1.end() ,tmp.begin() , tmp.end() );
    }
    v2=lds(last,cur+1);
    dp[last][cur]=1;
    if( v1.size()!=v2.size() )
    {
        if(v1.size()>v2.size() ) m[ {last,cur}  ]=v1;
        else m[ {last,cur}  ]=v2;
    }
    else
    {
        if( v1.back().second>v2.back().second ) m[ {last,cur}  ]=v1;
        else m[ {last,cur}  ]=v2;
    }
    ret m[ {last,cur}  ];
}

int main()
{
    lmt=0;
    a[0]=LLONG_MIN;
    memset(dp,-1,sizeof dp);
   while(  scanf("%d",&t)!=-1 )
   {
              lmt++;
            a[lmt]=t;
   }
  vector<pair<ll,ll>> kkk=lds(0,1 );
  cout<<kkk.size()-1<<"\n"<<"-\n";
  kkk.pop_back();
  for(auto it:kkk) cout<<it.first<<"\n";
}
/*
-7
10
9
2
3
8
8
6
*/
