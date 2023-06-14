#include<bits/stdc++.h>
using namespace std;

#define ll int

#define p printf("First\n")
#define q printf("Second\n")
#define pb push_back
ll t,n;

struct Trienode{

         map<char, Trienode*>child;
         bool eow;
         int crossed;
         Trienode(){

            this->eow=false;
            this->crossed=0;
         }
};
void insertx(Trienode *root, string w){

      Trienode *cur=root;
      for(int i=0; i<w.size() ; i++){

            char x=w[i];
            Trienode *node=cur->child[x];
            if(!node) {

                 node=new Trienode();
                 cur->child[x]=node;
            }
            cur=node;
            cur->crossed++;
      }
      cur->eow=true;
      return ;
}
ll freq(Trienode *root, string w){
 Trienode *cur=root;
      for(int i=0; i<w.size() ; i++){

            char x=w[i];
            Trienode *node=cur->child[x];
            if(!node)    return 0;

            cur=node;
      }
      return  cur->crossed;
}
int main(){

         Trienode *root=new Trienode();
         ll n;
         cin>>n;
         for(int i=0; i<n; i++){

                  string s,s2;
                  cin>>s>>s2;
                  if(s=="find") cout<<freq(root,s2)<<endl;
                  else  insertx(root,s2);
         }

 }
