#include<iostream>
#include<vector>
using namespace std;
#define ll long long
vector<ll>v ;
ll tmp[100000+1000];
ll mergeseg(ll low,ll mid,ll high){
   ll ret=0LL;
   ll i=low , k=low, j=mid+1;
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
   while(j<=high) tmp[k++]=v[j++];
   for(ll i=low ; i<=high ;i++) v[i]=tmp[i];
   return ret*1LL;
}
ll mergesort(ll low, ll high){

  /// cout<<low<<" : "<<high<<endl;
   if(low>=high) return 0;
   ll mid = (low + high)/2,ret=0;
        ret+=mergesort(low,mid);
        ret+=mergesort(mid+1,high);
        ret+=mergeseg(low,mid,high);

   return ret*1LL;
}
int main()
{
   ll n,x,m;
   while(cin>>n>>x>>m)
   {
      v.resize(n+1000,0);
      for(ll i= 0; i<n ; i++)cin>>v[i] ,tmp[i]=0;
      cout<<1LL*min(m,x)*mergesort(0,n-1)<<"\n";
   }
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
