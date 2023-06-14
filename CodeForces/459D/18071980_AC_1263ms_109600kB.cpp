#include<bits/stdc++.h>
using namespace std;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include<ext/pb_ds/list_update_policy.hpp>

#include<ext/pb_ds/detail/types_traits.hpp>



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

#define  sz                         1000009
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
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

using namespace __gnu_pbds;

#define ordered_set tree< pii , null_type,less<pii >, rb_tree_tag,tree_order_statistics_node_update>
///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///
///pair<ll,ll>  p[sz],p1[sz];
ll x,y,cmp=0 , arr[sz],n,las=0LL;
long long ans=0LL;
////set< pair<ll, ll > >S ;
unordered_map<ll,ll >A , B , m;
ll L[sz] , R[sz] ;

int main()
{
    ///fast;
   scanf("%d",&n);
    loop(i,0,n)
    {
        scanf("%d",&arr[i+1]);
        L[i+1]=++m[arr[i+1]] ;
    }
    m.clear();
    for(ll j=n ; j!=0 ; j--)
    {
        R[j]=++m [ arr[j]  ];
    }
   ll xn=0;
   ordered_set S;
   for(ll j=n ; j!=0 ; j--)
   {
        ans+= S.order_of_key ( { L[j] , -1  }   );
       S.insert( { R [j] ,j }  );
   }
   printf("%lld",ans);

}
