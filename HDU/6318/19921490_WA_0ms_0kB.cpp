#include<iostream>
#include<vector>
using namespace std;
#define ll long long
vector<int>v ;
ll tmp[1654221];
ll mergeseg(ll low,ll mid,ll high){

   ll ret=0;
   int i=low , k=low, j=mid+1;
   while(i<=mid and j<=high){
        if( v[i]<=v[j] ) {
                tmp[k++]=v[i++];
        }
        else{
            tmp[k++]=v[j++];
            ret+=abs(mid+1-i);
        }
   }
   while(i<=mid)  tmp[k++]=v[i++];

   for(int i=low ; i<=high ;i++) v[i]=tmp[i];
   return ret;
}
ll mergesort(ll low, ll high){

  /// cout<<low<<" : "<<high<<endl;
   if(low>=high) return 0;
   int mid = (low + high)/2,ret=0;
        ret+=mergesort(low,mid);
        ret+=mergesort(mid+1,high);
        ret+=mergeseg(low,mid,high);

   return ret*1LL;
}
int main()
{
   ios::sync_with_stdio(false);
   int n,x,m;
   while(cin>>n>>x>>m)
   {
      v.resize(n+33,0);
      for(int i= 0; i<n ; i++)cin>>v[i];
      cout<<1LL*min(m,x)*mergesort(0,n-1)<<"\n";
     /// cout<<"ANS : ";
   }
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
