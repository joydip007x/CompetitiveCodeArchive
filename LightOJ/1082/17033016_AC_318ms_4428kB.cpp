#include<bits/stdc++.h>
using namespace std;
#define sz 300009
#define endl '\n';
#define o(t) scanf("%d",&t)
int arr[sz],tree[sz];

void build(int node , int beg , int endx)
{
    if(beg==endx){tree[node]=arr[beg];return;}
    int mid=(beg+endx)/2;
    build(node*2 , beg , mid);
    build(node*2+1, mid+1 , endx);
    tree[node]=min(tree[node*2], tree[node*2+1]);
}
int query(int node , int b ,int e , int i, int j)
{

    if ( e<i or j<b ) return INT_MAX;
    if(i<=b and e<=j) return tree[node];
    int mid=(b+e)/2;
    int lft=query(node*2 , b,mid,i,j);
    int rg=query(node*2+1,mid+1,e,i,j);
    return min(lft,rg);

}
int main()
{

    int t,l,r;
    ///cin>>t;
    scanf("%d",&t);
    for(int pp=1 ; pp<=t ; pp++){
            ////getchar();
        int n,q; ///cin>>n>>q;
        o(n); o(q);
        for(int j=1 ; j<=n ; j++)
            o(arr[j]);
        ///cin>>arr[j];
        build(1,1,n);
        cout<<"Case "<<pp<<":\n";

         for(int k=1 ; k<=q ; k++)
         {
            /// cin>>l>>r;
            o(l);o(r);
             printf("%d\n",query(1,1,n,l,r));///<<'\n';
         }
    }
}
