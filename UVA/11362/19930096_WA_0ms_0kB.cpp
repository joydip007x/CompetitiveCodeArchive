#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,x  ,y=0;
vector<string>v;
bool cmp(string a , string b){

  return (a.length() <b.length() ) ;
}
struct Trienode{

    map<char , Trienode*> child;
    bool eow;
    Trienode(){eow= false;}
};
void insert( Trienode *root , string w){

    Trienode *cur=root;
    for(int i=0 ; i<w.size() ; i++){

        char x=w[i];
        Trienode *node=cur->child[ x];
        if( node and node->eow==true) { /*cout<<w<<" @ "<<i<<endl;;*/ y=1; return ;}
        if( !node ) { node=new Trienode() , cur->child[ x]=node; }
        cur=node;
    }
    cur->eow=true;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    cin>>n; y=0;
    v.clear();
    string s;
    for(int i=0 ; i<n ; i++) cin>>s, v.push_back(s);
   /// sort(v.begin(),v.end() ,cmp);
    Trienode *root= new Trienode();
    for(int i=0; i<v.size() and y==0 ; i++)
    {
       /// cout<<" INS: "<<v[i]<<":\n";
        insert(root,v[i]);
    }
   /// cout<<"******************************";
    if(y) cout<<"NO\n"; else cout<<"YES\n";
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
