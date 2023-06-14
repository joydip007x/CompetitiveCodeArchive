///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
/*
     If opportunity doesn't knock, build a door.
    Success is how high you bounce when you hit bottom.
*/
#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         1000004
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)
#define TEST_CASE(t)      for(ll int z=1;z<=t;z++)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  MOD            1000003

ll fact[sz+2];

void factorialmod (   void  )
{
    ll i=1;   fact[1]= fact[0]=1;
    for ( i=1 ; i<=sz ; i++)
    {
        fact[i]= (fact[i-1]*i)%MOD ;
    }
}

ll biGmod( ll base , ll pow , ll mod)
{
    ll res=1 , x=base%mod;
    while(pow!=0)
    {
     if (pow&1==true )   res=(res*x)%mod;
     x=(x*x)%mod;
     pow>>=1;
    }
    return res;
}
ll revmod( ll  bas ,ll po)
{
    return biGmod (bas , po-2 , po );
}
int main()
{
        ll tcas ;
        factorialmod();
        scanf("%lld",&tcas);
        LOOP(p,0,tcas)
        {
//https://github.com/shakilaust/Light-Oj-Solve/blob/master/1067%20-%20COMBINATIONS.cpp
            ll   n,r;
            scanf("%lld %lld",&n,&r);
            ll ans1= ( (fact[n]%MOD ) * (revmod(  fact[   n-r  ] , MOD   )%MOD) ) % MOD;
            ll ans2= revmod( fact[ r ]  ,MOD )%MOD;
            ll ans= (ans1*ans2)%MOD;
            printf("Case %lld: %lld\n",p+1,ans);
        }
}

