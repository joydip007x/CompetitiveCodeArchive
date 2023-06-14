#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lll long long
#define sz2 25
#define sz3 1000
#define sz4 65
#define ret return
#define l3 unsigned long long
ll n ,s,sum,cc,ans,v;
ll a[sz2][5] ;

map< pair<ll,l3 > ,ll >m;

l3 L( ll col , bitset<sz4>b )
{
    if(col>n) ret 0LL;
    ///if( m[ { col,b.to_ullong() }  ] !=0LL)ret m[ { col,b.to_ullong()  }  ];
    ///if( dp[col][v]!=INT_MAX) ret dp[col][v];
    l3 x=INT_MAX;
    for(ll i=1; i<=3 ; i++){
       if( col!=1 and  b.test(  (col-2)*3 + i ) ) continue;
      x=min( x , a[col][i]+L( col+1, b.set((col-1)*3 + i ))  );
      b.reset((col-1)*3 + i  );
    }
   ///cout<<"dp["<<col<<"]["<<v<<"]="<<x<<endl;
    return m[ {col,b.to_ullong() } ]=x;
}
//ll tes( ll a, bitset <64>b ){
//
//  ll ddp[a][ b ] ;
//}
int main()
{
   // v=1LL<<60;
   /// cout<<v<<endl;
    int t;scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {
        sum=cc=ans=0; m.clear();
//        for(ll k=0; k<sz2; k++)
//            for(ll kk=0; kk<sz3; kk++)
//            {
//                m[ {   }]
//            }
        memset(a,0,sizeof a);
        scanf("\n%lld",&n);
        for (ll j=1;j<=n  ;j++)
        {
            for(ll k=1 ; k<=3 ; k++) scanf( "%lld",&a[j][k]);
            /////cout<<" for "<<j<<" - "<<a[j][1]<<" "<<a[j][2]<<" "<<a[j][3]<<endl;
        }
        ///cout<<" INPUT ENDED-\n";
        v=1LL;
       bitset<sz4> d;
       d.reset();
       printf("Case %lld: %u\n",i,L( 1,d) );
    }
}
/*
2
4
13 23 12
77 36 64
44 89 76
31 78 45
3
26 40 83
49 60 57
13 89 99
*/
