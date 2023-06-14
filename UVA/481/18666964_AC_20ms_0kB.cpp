#include<bits/stdc++.h>
using namespace std;

#define MX 999
#define ret return
#define ll int
#define pb push_back
#define loop(i,L,U) for( ll i=(ll)L ; i<U ; i++)

vector<ll>v;
ll n,y,x;
vector<int> LIS(const vector<int> &elements)
{
    auto compare = [&](int x, int y)
    {
        return elements[x] < elements[y];
    };
    set< int, decltype(compare) > S(compare);

    vector<int> previous( elements.size(), -1);
    for (int i=0; i<int( elements.size() ); ++i)
    {
  pair< _Rb_tree_const_iterator<int> , bool >P=S.insert(i);
        auto it = P.first;
        if(!P.second) continue;
        if (it != S.begin())
            previous[i] = *prev(it);;
        if ( next(it) != S.end())
            S.erase(next(it));
    }
    vector<int> answer;
    answer.push_back( *S.rbegin() );
    while ( previous[answer.back()] != -1 )
        answer.push_back( previous[answer.back()] );

    reverse( answer.begin(), answer.end() );
    return answer;
}
int main()
{
   while(scanf("%d",&x)!=EOF){
//        cin>>x;
        v.pb(x);
    }
    vector<ll>C=LIS(v);
    cout<<C.size()<<"\n-\n";
    for(auto it:C)
        cout<<v[it]<<"\n";
}

/*
5
1 7 6 2 32
8
7 1 9 8 2 3 4 5
6
6 7 9 5 13 20
16
1 2 3 4 5 3 4 6 7 1 2 3 8 5 6 9
9
17 15 3 10 13 1 2 19 8
*/
