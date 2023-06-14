///*/////////////////// /// *
/*//    author-joydip007x  ///  */
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

#define  sz                         9999
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
#define  ret                     return

map<string,vector< string> >g,sample;
vector<string >fakeg[sz];
map<string,ll>vis;
ll cas,m,n,i,j;
void BFS ( string x)
{
    queue<string>q; q.push(x);
    string s;
    vis[x]=0;
    while(!q.empty())
    {
        s=q.front();q.pop();
        for ( ll i=0 ; i<g[s].size() ; i++  )
        {
            if (vis[g[s][i]] >vis[s]+1    )
            {
                vis[g[s][i]] =vis[s]+1;
                q.push( g[s][i] );
            }
        }
    }
}
void clearal()
{
    g.clear();
    vis.clear();
    LOOP(i,0,m)
    { fakeg[i].erase ( all(fakeg[i]) );}
}
int main()
{
  cin>>cas;
  LOOP(z,0,cas)
  {
      cin>>m>>n;
      clearal();
      bool real=false; string re="ErdosP";///first name last name type io ,  Paul Erd¨os ==ErdosP .
      ///a full name is in every 2 commas
      ///Smith, M.N., Martin, G., Erdos, P.: == namelist-> SmithMN , MartinG , ErdosP
      getchar();
      LOOP(i,0,m)
      {
          char s[sz];string out;
         cin.getline(s,sz);
          ll cnt=0;
          bool f=false;
          for ( j=0 ; j<strlen(s) and !f; j++)
          {
              if( s[j]==':' )
                {
                    f=true;
                    fakeg[i].pb(out); out.clear();
                }
             else   if(s[j]==',')
                {
                    cnt++;
                    if(cnt==2){fakeg[i].pb(out); cnt=0 ;out.clear(); }
                }
               else if ( isalpha(s[j])  )
               { out.pb(s[j]);}
          }
      }
      LOOP(i,0,m)
      {
          vector<string >S=fakeg[i];
          vector< string >::iterator it,ip;
          for( it=S.begin() ; (it)!=S.end() ; it++ )
          {
            for ( ip=S.begin() ;  (ip)!=S.end() ; ip++)
               {
               if(*it!=*ip) g[*it].pb(*(ip) );
                vis[*it]=vis[*ip]=9999999;
               }
          }
      }
     BFS(re);
     vis[re]=0;
     cout<<"Scenario "<<z+1<<'\n';
      LOOP(i,0,n)
      {
          char s[sz];string out;
          cin.getline(s,sz);
          ll cnt=0;
          for ( j=0 ; j<strlen(s); j++)
          {
                if ( isalpha(s[j])  ){ out.pb(s[j]);  }
          }
         cout<<s<<" ";
         if(vis[out]!=9999999 && vis[out]!=0 ){cout<<vis[out]<<endl;}
         else cout<<"infinity"<<endl;
       }
  }
}
