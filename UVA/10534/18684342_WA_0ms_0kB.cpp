///////////////////////////////////////////////////////////////
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

#define  sz                       100009
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%d",&c);
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
#define ll                       int
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

///*/////////////////// /// *
/*//    author-joydip007x  ///  *

///     Date<^>XX/08/2018    *///

vector<ll>v,ans,ans2;
ll n,x,lmt,mx,aa;
ll lis(const vector<int> &elements, ll k)
{
    auto compare = [&](int x, int y)
    {
        return elements[x] < elements[y];
    };
    set< int, decltype(compare) > S(compare);

    for (int i=0; i<int( elements.size() ); ++i)
    {
      pair<std::_Rb_tree_const_iterator<int>, bool>P=S.insert(i);
        auto it = P.first;
        if(P.second)
        {
            if ( next(it) != S.end())
                S.erase(next(it));
        }
       if(k)ans.pb(S.size());
       else ans2.pb(S.size());
    }
    ret 1;
}
int main()
{
    while(scanf("%d",&n)!=EOF){

        v.clear();ans.clear();ans2.clear();
         mx=INT_MIN;
        for (ll i=0 ; i<n ; i++ )
        {
            scanf("%d",&x);
            v.pb(x);
        }
        if(n==1)
        {
            printf("0\n");continue;
        }
        lis(v,1);
        reverse(v.begin(),v.end());
        lis(v,0);
       ////// reverse(v.begin(),v.end());
        for(ll i=0 ; i<ans.size() ; i++)
        {
            aa=min(ans[i],ans2[i])*2;
            mx=max(mx, aa-1 );
        }
        printf("%d\n",mx);
//        for(auto it:v)cout<<it<<" ";eee;
//        for(auto it:ans)cout<<it<<" "; eee;
//        for(auto it:ans2)cout<<it<<" ";

    }
}
/*
10
1 2 3 4 5 4 3 2 1 10
19
1 2 3 2 1 2 3 4 3 2 1 5 4 1 2 3 2 2 1
5
1 2 3 4 5
12
1 5 2 7 4 5 8 7 12 6 8 1
*/
