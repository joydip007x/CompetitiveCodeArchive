#include<bits/stdc++.h>
using namespace std;
#define ll int
const int sz=1000005;
int  n,q/*,a[sz]*/,lazy[4*sz+100];
struct node{
   int o[4];
}tree[4*sz+100];
void add(ll c){
    
   ll  tmp=tree[c].o[0];
   tree[c].o[0]=tree[c].o[2];
   tree[c].o[2]=tree[c].o[1];
   tree[c].o[1]=tmp;
   return;
}
void prop(ll c, ll l , ll h){

    if(l!=h){
         lazy[(c<<1)+1]=(lazy[(c<<1)+1]+lazy[c])%3;
         lazy[(c<<1)+2]=(lazy[(c<<1)+2]+lazy[c])%3;
    }
    while(lazy[c])
    {
        lazy[c]--;
        add(c);
    }
    return ;
}
void build(int c, int l, int h){

   if(l>h) return;
   if(l==h) {
    tree[c].o[0]=1;
    tree[c].o[1]=tree[c].o[2]=0;
    return;
   }
   int mid=(l+h)>>1;
   build( (c*2) +1, l   , mid );
   build( (c*2) +2,mid+1,  h  );
   for(int i=0;i<3;i++)tree[c].o[i]=tree[(c*2)+1].o[i]+tree[(c*2)+2].o[i];
   return;
}
void update(int c, int l , int h ,int ul, int uh, int val){

   if( lazy[c]) prop(c,l,h);
   if( ul>h || uh<l ) return ;
   if(l>=ul && uh>=h){

        if(l!=h){
            lazy[(c<<1)+1]=(lazy[(c<<1)+1]+1)%3;
            lazy[(c<<1)+2]=(lazy[(c<<1)+2]+1)%3;
            }
    add(c);
    return ;
   }
   int mid=(l+h)>>1;
   update(c*2 +1, l, mid , ul,uh, 1 );
   update(c*2 +2, mid+1 ,h  , ul,uh, 1 );
   for(int i=0;i<3;i++)tree[c].o[i]=tree[(c<<1)+1].o[i]+tree[(c<<1)+2].o[i];
   return;
}
ll query(ll c, ll l , ll h, ll ul, ll uh){

   if( lazy[c]) prop(c,l,h);
   if( ul>h || uh<l ) return 0;
   if(l>=ul && uh>=h) return tree[c].o[0];
   int mid=(l+h)>>1;
   return query((c<<1)+1 , l , mid ,ul,uh)+
          query((c<<1)+2 ,mid+1, h,ul,uh) ;
}
int main()
{
  scanf("%d %d",&n,&q);
  build(0,0,n-1);
  for(int i=0; i<q ; i++){
     int x,y,z;
     scanf("%d %d %d",&x,&y,&z);
     switch(x){
     case 0:update(0,0,n-1,y,z,1);break;
     case 1:printf("%d\n",query(0,0,n-1,y,z));break;
     }
  }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
