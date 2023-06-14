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
int main()
{
    ll n;cin>>n;
    vector<ll>v,out,ans;

    v.pb(0);
    LOOP(i,0,n)
    {
        ll x;
        o(x);
        v.pb(x);
    }
    for( ll i=1 ; i<=n ; i++)
    {
        out.erase(all(out));
        out.resize(i,-INT_MAX);
        //memset(out,,out.size());
        bool fk=false;
        for(ll j=1 ; j<=n ; j++)
        {
            if(  out[ (j-1)%i  ]==-INT_MAX) //if i  gave  "  out[ (j-1)%i  ]==-1) " problem arises when actually there is a -1 value(like 2 1 3 3 array , 1-2=-1 pos taken) and it will be repl aced by
                /// "  out[(j-1)%i]=v[j]-v[j-1]; " which is a bug ; so choose a rand val,which indicate that arr val is  unused ;
            {
                out[(j-1)%i]=v[j]-v[j-1];
            }
            else {
                if( out[ (j-1)%i  ]!=(v[j]-v[j-1]) ) {
                        ///cout<<" for "<<i<<" & "<<j<<" breakin up "<<out[ (j-1)%i  ]<<" != "<<v[j]<<" - "<<v[j-1]<<endl;
                     /// cout<<" the array > ";

                        fk=true;;
                        break;
                        }
            }
        }
        if(!fk)
        {  ///cout<<" sexy <> "<<i<<endl;
            ///for(auto it:out ) {cout<<it<<" ";}
                    ///  eee;
         ans.pb(i);}
    }
    cout<<ans.size()<<"\n";
    for(auto it:ans) cout<<it<<" ";

}