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
int main()
{
    ll x,y,z;
     //cin>>x;
     o(x);
     while(x--) {
           // cin>>y;
            o(y);
            vector<ll>v ,ans,done;
            ll io=1<<y;
            loop(i,0,io)
            {
                //cin>>z;
                o(z);
               if(z!=0)v.pb(z);
            }
            sort(all(v));
            done.pb(0);
            ll cnt=0;
            while(cnt!=y)
            {
                ll lmt=done.size() , fr=v[0];
                for(ll i=0 ; i<lmt ; i++)
                {
                    vector<ll>::iterator xt=find(all(v),fr+done[i]);
                    if(xt!=v.end())
                        {done.pb(*xt);
                    v.erase(xt);}
                }
              printf("%lld ",fr);
              cnt++;
             // continue;
             ///ans.pb(fr);
            }
            //eee;
       /// for(auto ii:ans) printf("%lld ",ii);
           printf("\n");

     }



}
