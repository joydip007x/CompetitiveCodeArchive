#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

#define int ll
 
const int N = 200005;
const int mod = 1e9 + 7;

ll n,x,arr[N+33],q;
vector<ll>tree[(2*N) +33];
string s;


void build(int node, int start, int end){
   

     if(start==end) {
          tree[node][0]=arr[start];
          tree[node][2]=arr[start];
          tree[node][1]=arr[start];
     }
     else {

        int mid=(start+end)/2;

        build(2*node, start,mid);
        build((2*node) +1, mid+1, end);

   tree[node][0]=tree[node*2][0]+tree[(2*node) +1][0];
   tree[node][1]=min(tree[(node*2)][1],tree[(2*node) +1][1]);
   tree[node][2]=max(tree[node*2][2],tree[(2*node) +1][2]);
 
   }
   return;

}
void update(int node, int start, int end, int idx, int val ){

    
   if(start==end){

          tree[node][0]=val;
          tree[node][1]=val;
          tree[node][2]=val;
      
          return;
   }
   else{

         int mid=(start+end)/2;
         if(start<=idx and idx<=mid) 
             update(2*node,start,mid,idx,val);
         else
             update((2*node) +1, mid+1,end,idx,val);
   }
  
   tree[node][0]=tree[node*2][0]+tree[(2*node) +1][0];
   tree[node][1]=min(tree[(node*2)][1],tree[(2*node) +1][1]);
   tree[node][2]=max(tree[node*2][2],tree[(2*node) +1][2]);

}
int query(int node, int start, int end, int l , int r){

      if(r<start or end<l) return 0;
      if(l<=start && end<=r) return tree[node][0];

      int mid=(start+end)/2;

      int p1=query(2*node, start,mid,l,r);
      int p2=query(2*node+1, mid+1,end,l,r);

      return p1+p2;
}
int queryMIN(int node, int start, int end, int l , int r){

      if(r<start or end<l) return LLONG_MAX;
      if(l<=start && end<=r) return tree[node][1];

      int mid=(start+end)/2;

      int p1=query(2*node, start,mid,l,r);
      int p2=query((2*node)+1, mid+1,end,l,r);

      return min(p1,p2);
}
int queryMAX(int node, int start, int end, int l , int r){

      if(r<start or end<l) return LLONG_MIN;
      if(l<=start && end<=r) return tree[node][2];

      int mid=(start+end)/2;

      int p1=query(2*node, start,mid,l,r);
      int p2=query((2*node)+1, mid+1,end,l,r);

      return max(p1,p2);
}
int32_t main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

        ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  
  cin>>n>>q;
  std::vector<ll> tt={0,0,0};
  for(int i=0;i<=(2*N)+10; i++) tree[i]=tt;
  
  for(int i=1; i<=n; i++) cin>>arr[i];
  build(1,1,n);
  for(int i=0; i<q; i++){

        ll x,y,z;
        cin>>x>>y>>z;
        if(x==1){

            ll q1,q2,q3;
            q1=query(1,1,n,y,z);
            q2=queryMIN(1,1,n,y,z);
            q3=queryMAX(1,1,n,y,z);
            q1=q1-q2-q3;
          //  cout<< x<<" "<<y<<" "<<z<<" Q "<<q1<<" "<<" mn "<<q2<<" mx "<<q3<<endl;
           cout<<q1<<endl;
        }
        else update(1,1,n,y,z);
  }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///