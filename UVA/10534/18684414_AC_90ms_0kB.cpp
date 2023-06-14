///////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
#define ll                       int
#define  ret                     return
#define pb push_back
///*/////////////////// /// *
/*//    author-joydip007x  ///  */

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
        lis(v,1);
        reverse(v.begin(),v.end());
        lis(v,0);
        reverse(ans2.begin(),ans2.end());
        for(ll i=0 ; i<ans.size() ; i++)
        {
            aa=min(ans[i],ans2[i])*2;
            mx=max(mx, aa-1 );
        }
        printf("%d\n",mx);
    }
}
/*
7
1 4 2 3 2 4 1

10
1 2 3 4 5 4 3 2 1 10
19
1 2 3 2 1 2 3 4 3 2 1 5 4 1 2 3 2 2 1
5
1 2 3 4 5
12
1 5 2 7 4 5 8 7 12 6 8 1
*/
