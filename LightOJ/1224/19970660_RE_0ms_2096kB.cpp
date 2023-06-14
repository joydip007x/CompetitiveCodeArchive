#include<bits/stdc++.h>
using namespace std;
typedef int ll;
ll n,x  ,y=0,cas=0,ans;
vector<string>v;
struct Trienode{

    unordered_map<char , Trienode*> child;
    bool eow;
    int cnt;
    Trienode(){eow= false; cnt=0;}
};
void insert( Trienode *root , string w){

    Trienode *cur=root;
    for(int i=0 ; i<w.size() ; i++){
        char x=w[i];
        if( !cur->child[ x] ) cur->child[ x]=new Trienode();
        cur=cur->child[x];
        cur->cnt++;
    }
    cur->eow=true;
}
void search( Trienode *root , string w){

    Trienode *cur=root;
    for(int i=0 ; i<w.size() ; i++){
        char x=w[i];
        cur=cur->child[x];
        ans=max(ans, (cur->cnt) *(i+1)) ;
    }
}
void del(Trienode *cur)
{
    del(cur->child['A']);
    del(cur->child['C']);
    del(cur->child['G']);
    del(cur->child['T']);
    delete (cur);
}
void heapp(){
    ans=0;
    Trienode *root= new Trienode();
    for(int i=0; i<v.size()  ; i++)  insert(root,v[i]);
    for(int i=0; i<v.size()  ; i++)  search(root,v[i]);
    cout<<"Case "<<++cas<<": "<<ans<<endl;
    del(root);
    return ;
}
int main()
{
  int t;
  cin>>t;
  while(t--){
    cin>>n;
    v.clear();
    string s;
    for(int i=0 ; i<n ; i++) cin>>s, v.push_back(s);
    heapp();
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
