#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

#define P pair<ll,ll> 
const int N = 5e5 + 9;
const ll mod = 10000000000007 ;

#define sz 100
ll n,arr[sz][sz],t,cnt;
ll fact[70],ans[70];
#define ret return
#define X first
#define Y second
unsigned long long a,b,c;

ll nCr(ll n,ll r)
{
    if(n<r) ret -1;
    if(n==r) ret 1;
    if(r==1) ret n;
    if(arr[n][r]!=-1) ret arr[n][r];
    arr[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
    ret arr[n][r];
}
int main()
{
   
   ans[0]=ans[1]=ans[2]=1;
   cnt=2;
   memset(arr,-1,sizeof arr);
   while(++cnt<=60){

         if(cnt%2==0) { ans[cnt]=ans[cnt-1]; continue;}
         ll prev=ans[cnt-1];
         ll no=nCr(cnt+1,(cnt+1)/2)/2;
         ans[cnt]=no+prev;
   }
   cin>>t;
   while(t--){
            
            cin>>n;
            ll ind=log2(n);
            --ind;
            cout<<ans[ind]<<endl;


   }
   
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///