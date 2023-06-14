#include<bits/stdc++.h>
using namespace std;
typedef long long   ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

#define D ll 
#define PRINT printf("%s\n", xans.c_str());

const int N = 10000+2;
const int mod = 1e9 + 7;
ll n,t,cnt=0, fx;

#define sc(c) scanf("%lld",&c);

map<D,vector<D> >adj;

set<D>Q;
set<D>::iterator it1; 
unordered_map<D, int>vis;
std::vector<D> v,qu;
int main()
{
   
    sc(t);
    while(t--){

         sc(n); 
         ll root,x,y,dis,len;

         root=(ll)ceil(pow(n*1LL*1.00,0.50000)*1.000);
         len=root, dis=(root*root)-n+1;

         if(root&1){
               if(dis<=len){x=dis; y=len;}
               else{ x=len; y=len-dis%root;}
         }
         else{
            if(dis<=len){x=len; y=dis;}
            else{x=len-dis%root; y=len;}
         }
         printf("Case %d: %lld %lld\n",++cnt,x,y);
        
    }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///