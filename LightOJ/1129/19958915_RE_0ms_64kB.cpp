#include<bits/stdc++.h>
using namespace std;
typedef long long  ll;

ll n,x  ,y=0,cas=0, node=0;
const ll maxx=999999+100;
ll nxt[30][maxx ];
bool created [maxx];
vector<string>v;
bool cmp( string a , string b ){
  return ( a.length() < b.length() );
}
bool insert( string s){

   ll tmpnode=0;
   for(ll i=0 ; i<s.size() ; i++){
     ll c=s[i]-'0';
		if (!created[nxt[c][tmpnode]])
            nxt[c][tmpnode]=++node,created[node]=true;
     if( nxt[27LL][tmpnode] ==1) return y=1, true;
     tmpnode=nxt[c][tmpnode];
   }
   nxt[27][tmpnode]=1;
}
int main()
{
  ll t;
  cin>>t;
  while(t--){
    memset(created , false ,sizeof created);
    memset(nxt , -1 ,sizeof nxt);
    cin>>n;
    y=node=0LL;
    v.clear();
    string s;
    for(ll i=0 ; i<n ; i++) cin>>s, v.push_back(s);
    sort(v.begin(),v.end() ,cmp);
    for(ll i=0 ; i<n and y==0; i++)
    {
       //// cout<<" INS : "<<v[i]<<endl;
        insert(v[i]);
    }
    cout<<"Case "<<++cas*1LL<<": ";
   /// cout<<"::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n";
    (y) ? cout<<"NO\n": cout<<"YES\n";
  }
  return 0;
}

/*
2
3
911
97625999
91125426
5
113
12340
123440
12345
98346
*/

///author-joydip007x         ///
///Time&Date-Whenever i submit///
