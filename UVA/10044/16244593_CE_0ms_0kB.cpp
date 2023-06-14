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
void clearall()
{
    g.clear();
    vis.clear();
    LOOPeq(i,0,sz)
    {
        fakeg[i].erase( all (fakeg[i]));
    }
}
int main()
{

  cin>>cas;
  LOOP(z,0,cas)
  {
      cin>>m>>n;
      clearall();
      bool real=false; string re="Erdos";
      getchar();
      LOOP(i,0,m)
      {
          char s[sz];string out;
         /// gets(s);
         cin.getline(s,sz);
          bool f=false;
          for ( j=0 ; j<strlen(s) and !f; j++)
          {
              if( s[j]==':' )
                {
                    f=true;
                    //out.pb('\0');
                    fakeg[i].pb(out);
                    if(out==re) real=true;
                  ///  cout<<" pushed "<<out<<":::"<<endl;
                     out.clear();
                }
             else   if(s[j]==',')
                {
                    //out.pb('\0');
                    fakeg[i].pb(out);
                    if(out==re) real=true;
                   /// cout<<" pushed "<<out<<":::"<<out.size()<<endl;
                    out.clear();
                }
               else if ( !isspace(s[j])  )
               {
                   out.pb(s[j]);
               }
          }
        /// cout<<strlen(s)<<" "<<endl;
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
                ///g[*(it+1)].pb(*it);
             ////cout<< " ""  "<<*it<<" "" " " "" "<<*(it+1)<<" "" "<<endl;
                vis[*ip]=99999;
                ///vis[*(it+1) ]=9999999;
               }
          }
      }
      /////////////////
//      eee;
//      for(auto it: g)
//      {
//          cout<<it.first<<" = ";
//          for(auto it2: it.second) cout<<it2<<", ";
//          eee;
//      }
      ///////////////////
     if(real) BFS(re);
     vis[re]=1;
     cout<<"Scenario "<<z+1<<'\n';
      LOOP(i,0,n)
      {
          char s[5000];string out;
         // gets(s);
         ll score=0;
            cin.getline(s,sz);
          bool f=false;
          for ( j=0 ; j<strlen(s) and !f; j++)
          {
               char s[sz];string out;
         /// gets(s);
         cin.getline(s,sz);
          bool f=false;
          for ( j=0 ; j<strlen(s) and !f; j++)
          {
                if(s[j]==',')
                {
                    //out.pb('\0');
                    ///sample[i].pb(out);
                   /// cout<<" pushed "<<out<<":::"<<out.size()<<endl;
                   score=score+vis[out];
                    out.clear();
                }
               else if ( !isspace(s[j])  )
               {out.pb(s[j]);}
          }
          cout<<s<<" ";
          if(vis[out]<99999 && real ) cout<<score<<'\n';
          else cout<<"infinity"<<'\n';
          out.clear();
//          string g; cin>>g;
//          cout<<g<<" = "<<vis[g]<<endl;
      }
        ///eee;
  }
}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
