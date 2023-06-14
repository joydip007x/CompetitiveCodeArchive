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


vector<ll>v,ans;
map<ll,vector<ll> >m;
bool vis[sz];
ll t,x,cxx=0,maxx=0;
ll nd,cucu,royal;
void precalculation()
{
    //make ans ready for max_element only of whole io//
     {
         vector<ll>fuc=v;
         vis[maxx]=true;
         srt(fuc);
         fuc.pop_back();//max ele removed
         if(fuc.back()==accumulate(fuc.begin() , fuc.end()-1,0))
         {
            cxx=cxx+m[ maxx ].size();
           loop(j,0,m[ maxx].size())
           ans.pb( m[maxx ][j] );
         }
     }
}
int main()
{
    scanf("%lld",&t);
     loop(i,0,t)
     {
         scanf("%lld",&x);
         v.pb(x);
         maxx=max(maxx,x);
         m[x].pb(i+1);//making a map cz if one ele satisfies ans..every occurence
         //of this numbr will satisfy ans,,like 2 5 2 2 ..if one 2 does all will ;
     }
    royal=accumulate(all(v),0);////the only exception is the max element case so i did precalculation function.. try
    ///explaining in notebok , all ans is (accumulat-that elem) == 2*max of base ara
    precalculation();
    loop(i,0,v.size())
    {
        if(!vis[v[i]])
        {
            vis[v[i]]=true;
            if( (royal-v[i])==2*maxx )
            {
                cxx=cxx+m[ v[i] ].size();
                loop(j,0,m[ v[i]].size())
                ans.pb( m[v[i]][j] );
            }
        }
    }
      printf("%lld\n",cxx);
      loop(i,0,ans.size())
      printf("%lld ",ans[i]);
}
