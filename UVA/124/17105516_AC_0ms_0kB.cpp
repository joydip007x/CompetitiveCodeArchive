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
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         10000
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
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

map<char , ll>vis;
vector<char >adj[sz];
string s,xxx,c,prim,nprim;
ll lmt ;
bool valid(char c)
{
    loop(i,0,adj[c].size())
     if(!vis[adj[c][i]]) ret false;
    ret true;
}
void trisha103( string  x)
{
    if(x.size()==lmt) {cout<<x<<"\n"; ret;}
    for(ll i=0 ; i<prim.size() ; i++)
    {
        if(!vis[prim[i]] and valid(prim[i]) )
        {
            vis[prim[i]]=1;
            x.pb(prim[i]);
            trisha103(x);
            vis[prim[i]]=0;
            x.pop_back();
        }
    }

}
void ihateme()
{
    lmt=0;
    loop(i,0,101+26)
    {
        adj[i].clear();
    }
    vis.clear();
    prim.clear();
    nprim.clear();
}
int main()
{
     fast;
     int g=0;
    while(getline(cin,xxx))
    {
       ihateme();
       if(g)eee;
       loop(i,0,xxx.size())
       {
         if( xxx[i]!=32  ) prim.pb(xxx[i]);
       }
       lmt=prim.size();
       srt(prim);
       getline(cin,s);
       loop(i,0,s.size())
       {
            if( s[i]!=32) nprim.pb(s[i]);
       }
        ///cout<<" xxx = "<<prim<<'\n'<<" & main "<<nprim<<'\n';
       for(ll i=0 ; i<nprim.size()-1; i=i+2)
       {
          adj[ nprim[i+1] ].pb( nprim[i] );
          ///cout<<":so "<<nprim[i+1]<<" depends on "<<nprim[i]<<endl;
       }
       string p="";
       trisha103(p);
        g=1;
    }
}