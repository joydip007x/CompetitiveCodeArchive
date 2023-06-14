#include<bits/stdc++.h>
using namespace std ;
 
#define ll            int 
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

const int sz=113;
ll n,cas,d,a[sz],sp[sz];
vector<ll> v;
ll  goget ( ll x, ll y){
  
   if(abs(x-y)==1)return a[y];
   if(abs(x-y)==2)return a[y]+a[x+1];
   int maxx=a[x+1]+a[x+2];
    for(int i=x+1; i<=y && i<=n+1 ; i++){
     
         	 vector<ll> t2;
         	 ll s;
             if(i-1>=0 && i-1>=x+1 ) t2.pb(a[i-1]);
             if(i+1<=n+1 && i+1<=y ) t2.pb(a[i+1]);
             s=*max_element(t2.begin(), t2.end());
             maxx=max(maxx,a[i]+s);
         }
    return maxx;
}
int main(){

      sc(cas);
      for(int cc=1; cc<=cas; cc++){


              sc(n);sc(d);
              printf("Case %d: ",cc);
              int prev=0;
              for(int i=0; i<=n+2; i++) a[i]=0,sp[i]=0;
              v.clear();
              for(int i=0; i< n; i++){
                  
                   char s[33],ano[333];
                   int das=0;
                   scanf("%s",&s);
                   if(s[0]=='B')sp[i+1]=1;
                   else sp[i+1]=-1; 
                   string ss=s;
                   ss.erase(ss.begin() ); ss.erase(ss.begin() );
                   das=stoi(ss);
                   a[i+1]=abs(das-prev);
                   prev=das;
              }
              a[n+1]=abs(d-prev);
              sp[n+1]=sp[0]=1;
              a[0]=0;
              int mxind=-1,bigs1=1,bigs2=0 ;
              int ind1=0,ind2;
              for(int i=1; i<=n+1; i++){
                  if(sp[i]==1){
                  	 bigs2=1;
                  	 ind2=i;
                  }
                  if(bigs1==1 && bigs2==1){
                       
                       v.pb(goget(ind1,ind2));
                       bigs1=bigs2;
                       ind1=ind2;
                       bigs2=ind2=0;
                  }
              }
              printf("%d\n",*max_element(v.begin(), v.end()) );
      }

      
 
}