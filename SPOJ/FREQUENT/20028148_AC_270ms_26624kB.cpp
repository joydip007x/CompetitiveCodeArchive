#include<bits/stdc++.h>
using namespace std;
typedef int ll;
#define sz 200000+1000
ll n,x,z,p,q,freq[ sz*2],
ans, tre[2*2*sz] ,a[sz*2];
map<ll,ll>m,firstid, lastind;
void build( int ind , int s, int e){

   if(s==e) {
        tre[ind]=freq[s];
        return;
   }
   int mid= (s+e)/2;
   build(  ind*2 +1 , s, mid );
   build( (ind*2) +2,mid+1, e);
   tre[ind]=max(tre[ind*2 +1] , tre[ (ind*2) + 2 ] );
   return;
}
ll query(int ind , int s, int e , int qs, int qe){

   int mid= (s+e)/2;
   if( qe<s  || e<qs || s>e  ) return -sz;
   if(  s>=qs and qe>=e  ) return tre[ind];
   return max( query( ind*2 +1, s, mid , qs , qe  ),
              query( (ind*2) +1+1, mid+1, e , qs , qe ) );
}
int main()
{
  while(scanf("%d",&n) ){
    if(!n) break;
    scanf("%d",&z);
    m.clear(); firstid.clear();lastind.clear();
    for(int i=0 ; i<n; i++){
        scanf("%d",&a[i]);
        m[a[i]]++;
        if( i and a[i]!=a[i-1] ) lastind[a[i-1] ]=i-1;
        if(m[a[i]]==1) firstid[ a[i] ]=i;
    }
    lastind[ a[n-1] ]=n-1;
    for(int i=0 ; i<n; i++){
          freq[i]=m[a[i] ];
    }
    build(0,0,n-1);
    for(int i=0 ; i<z ; i++){
        scanf("%d %d",&p ,&q);
         --p;--q;
         ans=0;
         if(a[p]==a[q]) ans=abs(p-q)+1;
         else{
            ans=max( ans , abs( lastind[ a[p] ] -p )+1 );
            ans=max( ans , abs( firstid[ a[q] ] -q )+1 );
            ans=max( ans , query(0,0,n-1, lastind[ a[p] ]+1, firstid[ a[q] ]-1 ) );
         }
         printf("%d\n",ans);
    }
  }

  return 0;
}

///author-joydip007x         //
///Time&Date-Whenever i submit///
