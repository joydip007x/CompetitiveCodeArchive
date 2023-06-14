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
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
///#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         1000000
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
#define  inf                     0x7fffffff

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        unsigned long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

#define  P pair<ll,ll>

vector<pair<ll,ll> >ad[sz];
ll en,m,x,y,z , par[sz] ;
void DiJKosta_bfs( ll st)
{
    priority_queue< P , vector<P> , greater<P> >pq;
    memset(par,0,sizeof par);
    vector<ll>dis(en+1,LLONG_MAX);
    dis[st]=0LL;
    par[st]=st;
    pq.push({0LL,st});
    while(!pq.empty() )
    {
        ll u=pq.top().sc;
        pq.pop();
        for(ll i=0 ; i<ad[u].size() ; i++)
        {
            ll top=ad[u][i].first, weight=ad[u][i].second;
            ///cout<<top<<"'s par "<<par[top]<<endl;
            if(  dis[ top ]>dis[u]+weight  )
            {
                dis[top]=dis[u]+weight;
                par[top]=u;
                //cout<<" parent of "<<top<<" is "<<u<<" weight - "<<dis[top]<<endl;
                pq.push({dis[top],top});
            }
        }
    }
    if( dis[en]==LLONG_MAX || par[en]==0 ) { cout<<"-1"; ret;}
    vector<ll>o;
    o.pb(en);
    while( 1  )
    {
        o.pb( par[o.back()]  );
        if(o.back()==par[o.back()] || o.back()==1 ) break;
    }
    reverse(all(o));
     for(auto iit: o) cout<<iit<<" ";

}
int main()
{
  o(en); o(m);
  loop(i,0,m)
  {
      o(x);o(y);o(z);
      ad[x].pb({y,z});
      ad[y].pb({x,z});
     // cout<<x<<" : "<<y<<" "<<z<<endl;
      ///cout<<y<<" : "<<x<<" "<<z<<endl;
  }
  if(m==0) ret cout<<"-1",0;
  DiJKosta_bfs(1);



}
