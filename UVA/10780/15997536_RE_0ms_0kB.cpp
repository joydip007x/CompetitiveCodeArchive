///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

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

#define  sz                         10000
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)

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

vector < map < ll , ll >  >  Fact(sz+4);
vector < map < ll , ll > >::iterator it;
map < ll , ll > ::iterator im;

vector < ll > prime ;
bool vis[sz+2];
void seive( )
{
    prime.pb(2);
    mem(vis, false );
    const  ll SX=sqrt(sz)+1;
    for ( ll i=4 ; i<=sz; i=i+2){vis[i]=true;}
    for( ll i=3 ; i<=SX ; i++ )
    {   if (!vis[i])
            {   for ( ll j=(i*i)  ; j<=sz  ; j=j+(2*i) ){vis[ j ]=true;} }
    }
    vis[0]=vis[1]=true;
    vis[2]=false;
    for(ll i=3 ; i<=sz ; i=i+2)
            if(!vis[i])  {prime.pb(i);}
}

void fuck( void )
{
       for (  ll i=3 ; i<=sz  ; i++ )
       {
           ll X=i;
           map < ll , ll > C ;
           C=Fact[i-1];
               ll j;
             for ( j=0 ; prime[j]<=sz ; j++)
             {
                 ll cnt=0;
                   while(X%prime[j]==0)
                   {
                       cnt++; X=X/prime[j];
                   }
                   C[prime[j]]=C[prime[j]]+cnt;
                    if(X==1) { break;}
            }
             Fact[i]=C;
       }
//        map < ll , ll > Z;
//        Z=Fact[ 1000];
//        for(auto it : Z)
//        {
//            if(it.second!=0)
//          {cout<<it.first <<" = " <<it.second <<endl;}
//
//        }
}
//10780 uva

///
map< ll , ll > alada(   ll n )
{
    map< ll , ll> MMM;
    ll X=n;
     for ( ll j=0 ; prime[j]<=sz ; j++)
             {
                 ll cnt=0;
                   while(X%prime[j]==0)
                   {
                       cnt++; X=X/prime[j];
                   }
                   MMM[prime[j]]=MMM[prime[j]]+cnt;
                    if(X==1) { break;}
            }

        return MMM;
}

int main()
{
    seive() ;
      map < ll , ll > M;
      M [2 ]=1 ;
     Fact[2]=M;
     fuck() ;
     ll tcas ,n,m;
      scanf("%lld",&tcas);
      for ( ll k=1 ; k<=tcas ; k++)
      {
        cin>>n>>m;
        map< ll , ll > CmpMAP1 , CmpMAP2;
        map<ll , ll > ::iterator II , III;
        CmpMAP1=alada( n  );
        CmpMAP2=Fact [ m ];
        vector < ll >ass; bool flag=false;
         for (    ll  pp=0      ;  pp<prime.size()  ; pp++)
         {
             if(CmpMAP1[   prime[pp]   ]!=0 ||   CmpMAP2[   prime[pp]   ] !=0 )/////at least the prime should be used in organizing the number  otherwise its not even in the prime factorization for sure ;
                    {
                        if( CmpMAP1[   prime[pp]   ]   >CmpMAP2 [ prime [ pp] ]   ) {flag=true;}
                        if(  flag==false )   {ass.pb(   CmpMAP2[ prime[pp] ] /CmpMAP1 [ prime [ pp] ]  ); }
                    }
         }
         srt(ass);
         ll ans=0;
        if(ass.size()!=0) {ans=ass[0];}
        printf("Case %d:\n",k);
 		if(flag==true || ans==0 || ass.size()==0)
		{printf("Impossible to divide\n");}
		else
		{printf("%lld\n", ans);}
      }
}
