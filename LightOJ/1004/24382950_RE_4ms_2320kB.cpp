#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 110;
const int mod = 1e9 + 7;

int n,x,m,t;
vector<ll>v,adj[N];
ll dp[N][N];
bool isnum(char x){
     if(x>='0' && x<='9') return true;return false;
}
ll fun(ll r, ll c){

    if(r==m-1) return adj[m-1][0];
    ll &ret=dp[r][c];
    ll a=INT_MIN,b=INT_MIN; a=b=-1;

    if(ret!=-1) return ret;

    if(r<n-1){
        ret=max({ret, fun(r+1,c)+adj[r][c], fun(r+1,c+1)+adj[r][c]});
        
    }
    else{
       
        if(c-1>=0 && r+1<m ) a=adj[r][c]+fun(r+1,c-1);
        if(r+1<m && adj[r+1].size()>c) b=adj[r][c]+fun(r+1,c);

        ret=max({ret,a,b});
    }
    return dp[r][c]=ret;
}
int main()
{
    //freopen("input.txt", "r+", stdin);
   // freopen("output.txt", "w+", stdout);

    /*     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); */

   scanf("%d",&t);
   for(int cas=1; cas<=t ;cas++){

            scanf("%d\n",&n);
            m=(2*n)-1;
            for(int i=0; i<=m; i++){ adj[i].clear(); }
            memset(dp,-1,sizeof dp);
            for(int i=0; i<m; i++){

                  char s[13344];
                  fgets(s,13343,stdin);
                  ///cout<<"SCANNED:"<<s;
                  ll tmp=-1;
                  for(int j=0; j<strlen(s); j++){
                       
                       if(tmp!=-1 && !isnum(s[j]) ){
                         adj[i].pb(tmp);
                         tmp=-1;
                       }
                       if(s[j]>='0' && s[j]<='9'){

                          if(tmp==-1) tmp=s[j]-48;
                          else tmp=(tmp*10)+(s[j]-48);
                       }
                  }
                  if(tmp!=-1) adj[i].pb(tmp);
                  ///for(auto y:adj[i])cout<<y<<"X";cout<<endl;
            }
            printf("Case %d: %lld\n",cas,fun(0,0));
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///