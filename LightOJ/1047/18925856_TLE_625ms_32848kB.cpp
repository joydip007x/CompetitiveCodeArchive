#include<bits/stdc++.h>
using namespace std;
#define ll int
#define lll int
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
    if(col>n) ret 0;
    if( m[ { col,b.to_ullong() }  ] ) ret m[ { col,b.to_ullong()  }  ];
    l3 x=INT_MAX;
    for(ll i=1; i<=3 ; i++){
       if( col!=1 and  b.test(  (col-2)*3 + i ) ) continue;
      x=min( x , a[col][i]+L( col+1, b.set((col-1)*3 + i ))  );
      b.reset((col-1)*3 + i  );
    }
    return m[ {col,b.to_ullong() } ]=x;
}
int main()
{
    int t;scanf("%d",&t);
    for(int i=1 ; i<=t ; i++)
    {
        m.clear();
        scanf("\n%d",&n);
        for (ll j=1;j<=n  ;j++)
        {
            for(ll k=1 ; k<=3 ; k++) scanf( "%d",&a[j][k]);
        }
       bitset<sz4>d;d.reset();
       printf("Case %d: %u\n",i,L( 1,d) );
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
