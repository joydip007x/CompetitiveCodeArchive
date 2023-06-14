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

#define  sz                         300009
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
#define ll                         int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return
ll n,v[sz],b,c,q;
char a,s[sz];
pair<ll,ll>tree[520000];

pair<ll,ll> giv(pair<ll,ll>A , pair<ll,ll>B);

void build(ll ind , ll lf , ll rg)
{
    if(lf==rg) {
        tree[ind]={ v[lf],0  };
        ret;
    }
    ll mid=(lf+rg)/2;
    build(ind*2 , lf, mid);
    build(ind*2 + 1 , mid+1, rg);
    tree[ind]=giv(tree[ind*2] , tree[ind*2 + 1]);
//    if(tree[ind*2].fs >= tree[ind].fs)
//    {
//        tree[ind].sc=tree[ind].fs;
//        tree[ind].fs=tree[ind*2].fs;
//    }
//    else if(  tree[ind*2].fs>tree[ind].sc ) tree[ind].sc=tree[ind*2].fs;
//    if(tree[ind*2 +1].fs >= tree[ind].fs)
//    {
//        tree[ind].sc=tree[ind].fs;
//        tree[ind].fs=tree[ind*2 + 1].fs;
//    }
//    else if(  tree[ind*2 +1 ].fs>tree[ind].sc ) tree[ind].sc=tree[ind*2 +1].fs;
}
void update( ll ind , ll lf, ll rg,ll po, ll val  )
{
    if(  lf==rg   )
    {
        if(lf==po) tree[ind]={ val, 0};
        ret;
    }
    ll mid=(lf+rg)/2;
    if(  po<=mid )
        update(  ind*2 , lf , mid, po ,val  );
    else
        update( ind*2 +1 , mid+1, rg , po ,val );
    tree[ind]=giv(tree[ind*2] , tree[ind*2 + 1]);
//    if(tree[ind*2].fs >= tree[ind].fs)
//    {
//        tree[ind].sc=tree[ind].fs;
//        tree[ind].fs=tree[ind*2].fs;
//    }
//    else if(  tree[ind*2].fs>tree[ind].sc ) tree[ind].sc=tree[ind*2].fs;
//    if(tree[ind*2 +1].fs >= tree[ind].fs)
//    {
//        tree[ind].sc=tree[ind].fs;
//        tree[ind].fs=tree[ind*2 + 1].fs;
//    }
//    else if(  tree[ind*2 +1 ].fs>tree[ind].sc ) tree[ind].sc=tree[ind*2 +1].fs;
}
pair<ll,ll> giv(pair<ll,ll>A , pair<ll,ll>B)
{
    vector<ll>v;
    v.pb(A.fs), v.pb(A.sc),v.pb(B.fs) , v.pb(B.sc);
    sort(all(v));
    pair<ll,ll> R;
    R.fs=v.back() ;
    v.pop_back();
    R.sc=v.back();
    ret R;
}
pair<ll,ll> query(ll ind, ll lf , ll rg , ll L ,ll R )
{
    pair<ll,ll>R1,R2,R3,R4;
    R1=R2=R3=R4={0,0};
    if(  lf>rg || rg<L || R<lf  ) ret R1;
    if(  (lf>=L and rg<=R)    ) ret R1=tree[ind];
    ll mid=(lf+rg)/2;
//    if(  R<=mid  )
//    {
//        R3=query(   ind*2 ,  lf,  mid,  L , R  );
//        ret R3;
//    }
//    else if(  L>mid  )
//    {
//        R3=query( ind*2 +1,  mid+1 ,  rg ,  L ,  R);
//        ret R3;
//    }
//    else
    {
        R1=query( ind*2,  lf ,  mid,  L ,  R );
        R2=query( ind*2 +1,  mid+1, rg,  L,  R);
        R3=giv(R1,R2);
        ret R3;
    }
}
int main()
{
   scanf("%d",&n);
   loop(i,0,n)
   {
       scanf("%d",&v[i+1]);
   }
   build(1,1,n);
   ///////////////////////////////////////////
//   for(ll i=1 ; i<=2*n -1; i++)
//   {
//      cout<<" Index :"<<i;
//      cout<<" values :"<<tree[i].fs<<" : "<<tree[i].sc<<endl;
//   }
   /////////////////////////////////////////////
   scanf("%d\n",&q);
   while(q--)
   {
       fgets(s,sz,stdin);
       sscanf(s,"%c %d %d",&a,&b,&c);
       if(a=='Q')
       {
           pair<ll,ll>F=query(1,1,n,b,c);
           printf("%d\n",F.fs+F.sc);
       }

       else update(1,1,n, b,c);
       ///cout<<a<<" "<<b<<" "<<c<<endl;
   }

}
