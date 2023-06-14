#include<bits/stdc++.h>
using namespace std;
typedef int ll;

ll n,x  ,y=0,cas=0, node=0;
const int maxx=9999999+100;
ll nxt[30][maxx ];
bool created [maxx];
vector<string>v;
bool cmp( string a , string b ){
  return ( a.length() < b.length() );
}
bool insert( string s){

   int tmpnode=0;
   for(int i=0 ; i<s.size() ; i++){
     ///cout<<":"<<s[i]<<":";
     int c=s[i]-'0';
		if (!created[nxt[c][tmpnode]])
            nxt[c][tmpnode]=++node,created[node]=true;
     if( nxt[27][tmpnode] ==1) return y=1, true;
     tmpnode=nxt[c][tmpnode];
   }
   nxt[27][tmpnode]=1;
 ///  cout<<" inserted  "<<s<<endl;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    memset(created , false ,sizeof created);
    memset(nxt,0, sizeof nxt);
    cin>>n;y=0;
    v.clear();
    string s;
    for(int i=0 ; i<n ; i++) cin>>s, v.push_back(s);
    sort(v.begin(),v.end() ,cmp);
   /// cout<<" DONE SORT \n" ;
    for(int i=0 ; i<n and y==0; i++) {
       //// cout<<" INS : "<<v[i]<<endl;
        insert(v[i]);
    }
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
