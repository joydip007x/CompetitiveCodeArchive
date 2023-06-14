#include<bits/stdc++.h>
using namespace std;
typedef int ll;
const int sz=200000+1000;

ll n,a[sz] ,ans,tmp[sz],t;

ll segmentmerge( ll low , ll mid , ll high ){

   ll i=low, j=mid+1 ,k=low, ret=0;
   while(i<=mid && j<=high){

       if(a[i]<=a[j]) tmp[k++]=a[i++];
       else{
         ret+=abs((mid+1)-i );
         tmp[k++]=a[j++];
       }
   }
   while(i<=mid) tmp[k++]=a[i++];
   while(j<=high)tmp[k++]=a[j++];
   for(int p=low ; p<=high;p++)a[p]=tmp[p];
   return ret;
}
ll merge(ll low, ll  high){

    ll ret=0;
    if(low<high){
        ll mid=(low+high)>>1;
        ret+=merge(low,mid )+ merge(mid+1,high);
        ret+=segmentmerge(low,mid,high);
    }
    return ret;
}
int main()
{

  scanf("%d\n",&t);
  while(t--){
     scanf("%d\n",&n);
     for(int i=0 ; i< n ; i++){
         int x;
         scanf("%d\n",&a[i]);
     }
     printf("%d\n",merge(0,n-1));
  }
  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
