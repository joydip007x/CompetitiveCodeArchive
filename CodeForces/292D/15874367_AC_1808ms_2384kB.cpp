///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for( int i=( int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(int i=(int)L;i<=U;i++)
#define  preflag               int flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         100009
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
#define ll                         int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
ll L ,R;
vector <pair< ll , ll > >Graph [sz];
bool  VIS[sz];
void dfs (  ll  X)
{
    VIS[X] = true ;
  for(     auto O : Graph [X ] )
    {
    if(   !(   O.sc>=L && O.sc<=R )   && !VIS[ O.first  ]   )
        {
            dfs(O.first );
        }
    }
}
///////////////LONG LONG nile TLE 
///////////////CIN cout TLE 

int main()
{
        preflag;
        ///fast;
        ll p,q;
            scanf("%d %d",&p,&q);
        LOOPeq(i,1,q)
        {
            ll x ,y ;
            ///cin>>x>>y;
            scanf("%d %d " , &x , &y);
            Graph[x].pb(pii(y,i));
            Graph[y].pb(pii(x,i));

        }

       ll   Q , q1,q2;
       /// cin>>Q;
       scanf("%d", &Q);
        till(Q)
        {
            ll ans=0;
            LOOPeq(i,1 , p)
                {
                   VIS[i]=false;
                }
          ///  VIS=VIS2;
            //cin>>L>>R;
            scanf("%d %d" ,&L,&R);
                LOOPeq(i,1 , p)
                {
                    if(!VIS[i]) { dfs(i);  ans++;  }
                }
            printf("%d\n" ,ans);
            ///cout<<ans<<endl;

        }
}
