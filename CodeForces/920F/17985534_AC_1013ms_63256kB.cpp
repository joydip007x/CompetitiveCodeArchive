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

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
const ll  yy=2* pow (  2, log2( (ll)1e6+5)  )+1;
ll n,m,a,b,c,v[(int)(1e6+5)], DX[ (int)(1e6+5 )];
const ll N= (int) (1e6+2);
ll tree[ (ll) yy+yy  ] ;
void Dxfunc()
{
    ll lmt=sqrt(1000005)+1;
    for(ll i=1 ; i<N; i++)
    {
        for(ll j=i ;  j<N ; j=j+i)
        {
            DX[j ]++;
        }
    }
    ///cout<<" for 2 "<<DX[2]<<"\n for 6 "<<DX[6]<<endl;
}
void build(ll i, ll L , ll H)
{
    if(L==H)
    {
        tree[i]=v[L];
        ret;
    }
    ll M=(L+H)/2;
    build(i*2 , L , M);
    build(i*2 +1 , M+1, H);
    tree[i]=tree[i*2]+tree[i*2 +1];
}
void update(ll i,ll L , ll H , ll upL , ll upH)
{
    if(L>H ||  H<upL) ret;
    if(L==H)
    {
        tree[i]=v[upL] ;
        ret;
    }
    ll M=(L+H)/2;
    if(upL<=M)update(i*2 , L,M , upL , upH);
    else update(i*2 +1 , M+1,H , upL , upH);
    tree[i]=tree[i*2]+tree[i*2 +1];
}
ll query(ll i , ll L , ll H , ll qL , ll qH)
{
    if( L>H ||   H<qL || qH<L) ret 0;
    if( L>=qL and H<=qH  ) ret tree[i];
    ll M=(L+H)/2;
    ret  query(i*2 ,L,M,qL,qH)+query(i*2 +1,M+1 , H , qL, qH);
}
set<ll>activ;
int main()
{
      Dxfunc();
     scanf("%lld %lld",&n,&m);
     loop(i,0,n)
     {
         scanf("%lld",&v[i+1]);
            activ.insert(i+1);
      }
     build(1,1,n);
     loop(i,0,m)
     {
         scanf("%lld %lld %lld",&a,&b,&c);
         if(a==2)
         {
             printf("%lld\n",query(1,1,n,b,c)); continue;
         }
         auto ind=activ.lower_bound(b);
         vector<ll>delet;
         while( *ind<=c and ind!=activ.end() )
         {
             if(  DX[ v[*ind]  ]==v[*ind]   ) delet.pb(*ind);
             else
             {
                 v[*ind]=DX[  v[*ind] ];
                 update(1,1,n,*ind,*ind );
             }
             ind++;
         }
         for(auto oj:delet) activ.erase(oj);

     }
}