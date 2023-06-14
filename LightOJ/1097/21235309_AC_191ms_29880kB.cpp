#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define sc(c) scanf("%d",&c);
#define mid (l+h)/2 
#define tl  i*2
#define tr (i*2)+1

const int t=1429432;
int tree[4*t];
void build(int i, int l , int h){
     if(l==h) {tree[i]=(l%2); return;}
     build(tl,l,mid);
     build(tr,mid+1,h);
     tree[i]=tree[tl]+tree[tr];
}
void update(int i, int l , int h, int k){
   if(l==h) {tree[i]=0;return;}
   if(k<=tree[tl]) update(tl,l,mid,k);
   else update(tr,mid+1,h,k-tree[tl]);
   tree[i]=tree[tl]+tree[tr];
}
int query(int i, int l, int h, int k){

	if(l==h) return l;
	if(k<=tree[tl]) return query(tl,l,mid,k);
    else return query (tr,mid+1,h,k-tree[tl]);
}
int main(){

   int ans[t+10];
   build(1,1,t);
   ///cout<<" BUILD DOME\n";
   ans[1]=1;
   for(int i=2; i<=100000;i++){
       int tbe,store;
       tbe=store=query(1,1,t,i);
       ans[i]=tbe;
       while(tbe<tree[1]){
       	  update(1,1,t,tbe);
       	  tbe+=store-1;
       }
       ////cout<<"ans["<<i<<"]="<<ans[i]<<"\n";
   }
   int q;
   sc(q);
   for(int c=1; c<=q; c++){
       int n;
   	   sc(n);
   	   printf("Case %d: %d\n",c,ans[n]);
   }
  
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///

