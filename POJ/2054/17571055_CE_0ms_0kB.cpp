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

#define  sz                         1010
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
    ll n,r ,father[sz],vis[sz],col[sz],ssz[sz];
    lfl  w[sz];
    ll x,y,z,a,b,c;
    while(1)
    {
        cin>>n>>r;
        ll ans=0LL;
        if(!n) break;
        mem(vis,0);mem(father,0);
        mem(ssz,0); mem(col,0);
        loopeq(i,1,n)
        {scanf("%lld",&col[i]);
        w[i]=col[i];father[i]=i;
        ans=ans+col[i];ssz[i]=1; }
        loop(i,1,n)
        {
            cin>>a>>b;
            father[b]=a;
        }
        for(ll i=1 ; i<n ; i++)
        {
             int index, root=r;
             lfl wei=0.00;
             loopeq(j,1,n)
             {
                 if(!vis[j] and w[j]>wei and j!=root)
                     wei=w[j],index=j;
             }
             vis[index]=1;
             int fath=father[index];
             ans=ans+(col[index]*ssz[fath] );
             ssz[fath]=ssz[fath]+ssz[index];
             col[fath]=col[fath]+col[index];
             w[fath]=(1.00*col[fath] )/(ssz[fath]);
             loopeq(k,1,n)
                if ( father[k]==index ) father[k]=fath;
        }
        cout<<ans<<endl;


    }




}
