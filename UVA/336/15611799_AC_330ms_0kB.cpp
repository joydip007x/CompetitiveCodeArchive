///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018	*///
 
#include<bits/stdc++.h>
 
using namespace std;
 
#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag 	          long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));
///#define  erase(x)               (x).erase((x).begin(),(x).end())
#define  pb		                  push_back
#define  ppb                  	  pop_back()
#define  pii 		              pair<long long int , long long int >
#define  msi 	                  map< string,long long int>
#define  vi 		                  vector<long long int >
#define  iit                		  iterator it,it1,it2
#define  iip 	                  iterator ip,ip1,ip2
 
#define  sz 		                21474836
#define  check(x) 	        cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c) 		            cin>>c
#define  o(c) 		            scanf("%lld",&c)
#define  mz(c,r)   	        long long r=c;while(c--)
#define  till(c)                 while(c--)
 
#define  fs                       first
#define  sc                      second
#define  pi 		                acos(-1.0)
#define  eps 		            1e-9
 
#define  gaira                 printf("::: pias abal :::::::::::::  \n")
#define notrue 		        false
#define ifnot 		            else
#define eee 		            cout<<endl
#define ll                        long long
 
vector <ll > graph[sz];
set<ll>S;       ////////TO store individual nodes 
set<ll >::iterator it;
ll dis[sz]; ////////distance 
ll  vis[sz];////visited
 
void prinx();
 
ll bfs ( ll   str, ll query, set<ll>S)
{
    queue<ll>Q;
    ll prob=0;
    Q.push(str);
    vis[str]=1;
    dis[str]=0;
    while(!Q.empty())
    {
        ll cur=Q.front();Q.pop();
        ll siz=graph[cur].size();
        for(ll p=0;p<siz;p++)
        {
            ll nex=graph[cur][p];
            if(vis[nex]==-1)
            {
                Q.push(nex);
                vis[nex]=1;
                dis[nex]=dis[cur]+1;
            }
        }
    }
    for(it=S.begin();it!=S.end();it++)
    {
        if ( vis[*it]==1 && dis[*it]>query)
        prob++;
        else if(vis[*it]==-1)
        prob++;///////if the distance is greter than the distance i inputed or it was not even possible to visit  then ++value(the unreachable nodes value);
    }
 
    return prob;
}
int main()
{
       ll n,qu1,qu2,kase=0,LK;mem(vis,-1);
        while( cin>>n && n!=0)
        {   LK=n;
 
            till(LK)
            {    ll x,y;
                cin>>x>>y;
                graph[x].pb(y);
                graph[y].pb(x);
                S.insert(x);
                S.insert(y);
            }
 
            while(  cin>>qu1>>qu2 && (qu1+qu2)!=0 )
            {
                for(it=S.begin();it!=S.end();it++)
            	dis[*it]=0,vis[*it]=-1;
                ll nod=bfs( qu1,qu2 , S );
                ll answer=qu2;
                cout<<"Case "<<++kase<<": "<<nod<<" nodes not reachable from node "<<qu1<<" with TTL = "<<answer<<"."<<endl;
               //mem(graph,0);
 
            }
           for(it=S.begin();it!=S.end();it++)
	graph[*it].clear();
 
	S.clear();
 
        }
}
//EXTRA :
void prinx()
{
    cout<<"Elementos :";
     for(it=S.begin();it!=S.end();it++)
    {
        cout<<*it<<" : "<<dis[*it]<<endl;
    }
    eee;
}