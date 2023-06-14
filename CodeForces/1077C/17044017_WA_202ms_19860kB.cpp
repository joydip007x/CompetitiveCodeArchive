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

#define  sz                         3000009
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


vector<ll>v,ans,temp;
map<ll,vector<ll> >m;
bool vis[sz];
ll maxx=0 ;
int main()
{
   /// freopen("intput.txt","r",stdin);
    ll t, a,b,n,cc=0,x,cxx=0;
    scanf("%lld",&t);
    ///cin>>t;
//    while(t--)
//    {
//    cin>>x;
//    v.pb(x);
//    }
     loop(i,0,t)
     {
         scanf("%lld",&x);
         v.pb(x);
         maxx=max(maxx,x);
         m[x].pb(i+1);
     }
    temp.resize(v.size(),0);
     temp=v;
     srt(temp);
     ll nd=*max_element(all(temp));
     ll cucu=accumulate(temp.begin(), temp.end()-1,0);
     ll royal=cucu+nd;
     //best factor//
     {
         vector<ll>fuc=v;
         vis[nd]=true;
         //auto it=*max_element(all(fuc));
         //fuc.erase(it);
         srt(fuc);fuc.pop_back();
         if(fuc.back()==accumulate(fuc.begin() , fuc.end()-1,0))
         {
            cxx=cxx+m[ nd ].size();
           loop(j,0,m[ nd ].size())
           ans.pb( m[ nd ][j] );
         }
     }
    loop(i,0,v.size())
    {
    if(!vis[v[i]]){
       vis[v[i]]=true;
       ll trig=0;
       ////if(v[i]==nd and (royal-nd)==cucu ) trig=1;
       if( (royal-v[i])==2*nd ) trig=1;
       if( trig )
       {
           cxx=cxx+m[ v[i] ].size();
           loop(j,0,m[ v[i]].size())
           ans.pb( m[v[i]][j] );
       }
    }
    }
      printf("%lld\n",cxx);
     if(ans.size())
     {
         loop(i,0,ans.size())
         {
             printf("%lld ",ans[i]);
         }
     }
    ///for(auto it: ans) cout<<it<<" ";
     ///cout<<endl;
}
