#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll tmp[100000+1000],v[100000+1000];
ll mergesort(ll low, ll high){
    
   if(low>=high) return 0;
   int mid= (low+high)/ 2 , ax=0,by=0;
   ax=mergesort(low,mid);
   by=mergesort(mid+1,high);
   ll ret=0;
   int i=low , j=mid+1,k=low;
   while(i<=mid and j<=high){
        if( v[i]<=v[j] ) tmp[k++]=v[i++];
        else{
            tmp[k++]=v[j++];
            ret+=abs(mid+1-i);
        }
   }
   while(i<=mid)  tmp[k++]=v[i++];
   while(j<=high)  tmp[k++]=v[j++];
   for(int i=low ; i<=high ;i++) v[i]=tmp[i];
   return 1LL*ret+ax+by;
}

int main()
{
   ll n,x,m;
   while(scanf("%lld %lld %lld",&n,&x,&m)==3)
   {
      for(ll i= 0; i<n ; i++){scanf("%lld",&v[i]);tmp[i]=0;}
      printf("%lld\n",1LL*min(m,x)*mergesort(0,n-1));
   }
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
