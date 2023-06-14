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
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

map<char , ll>indeg,vis;
//map<char , vector< char > >adj;
vector<char >adj[sz];
string s,xxx,c;
ll lmt ;

void backfack( char x)
{
    if(c.size()==lmt) {cout<<c<<"\n"; ret;}
    for(ll i=0 ; i<=xxx.size() ; i++)
    {
        if(  isalpha(xxx[i]) and xxx[i]!=x and !vis[xxx[i]] and !indeg[xxx[i] ] )
        {
            for(vector< char >::iterator it=adj[xxx[i]].begin() ; it!=adj[xxx[i]].end() ; it++ )
            {
                indeg[*it ]--;
            }
            c.pb(xxx[i]);
            vis[xxx[i]]=1;
            backfack(xxx[i]);
            c.pop_back();
            vis[xxx[i]]=0;
            for(vector< char >::iterator it=adj[xxx[i]].begin() ; it!=adj[xxx[i]].end() ; it++ )
            {
                indeg[*it ]++;
            }
        }
    }

}
void preca( char t, ll f)
{
   if(!f){ for(vector< char >::iterator it=adj[t].begin() ; it!=adj[t].end() ; it++ )
            {
                indeg[*it ]--;
            }
            ret;
   }
   for(vector< char >::iterator it=adj[t].begin() ; it!=adj[t].end() ; it++ )
            {
                indeg[*it ]++;
            }
    ret;
}
int main()
{
     freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    while(getline(cin,s))
    {
       xxx=s; lmt=0;
       loop(i,0,xxx.size())
       {
           if(isalpha(xxx[i]))
           {
               indeg[xxx[i]]=vis[ xxx[i] ]=0;
               adj[xxx[i]].clear();
               lmt++;
           }
       }
       getline(cin,s);
       //cout<<s<<endl;
        ///cout<<s[0]<<" "<<s[2]<<endl;
       for(ll i=3 ; i<s.size(); i=i+6)
       {
           if(!isalpha(s[i])) continue;
           indeg[ s[i] ]++;
          adj[ s[i-3] ].pb( s[i] );
          //cout<<" indeg "<<s[i]<<" = "<<indeg[ s[i] ]<<"  ";
          //cout<<" adj "<<s[i-3] <<" pb "<<s[i]<<endl;

       }
       sort(all(xxx));
       for(ll i=0 ; i<xxx.size() ; i++)
       {
           if( isalpha(xxx[i]) and indeg[xxx[i]]==0 )
           {
             ///  cout<<" L = "<<lmt<<" going with "<<xxx[i]<<endl;
               vis.clear();
                c.clear();
               preca(xxx[i],0);
               c.pb(xxx[i]);
               vis[c.back()]=1;
               backfack(c.back());
               preca(xxx[i],1);
           }
       }
       eee;
    }


}
