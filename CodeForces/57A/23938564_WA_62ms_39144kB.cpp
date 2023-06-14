#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 #define P pair<ll,ll> 
const int N = 5e5 + 9;
const ll mod = 10000000000007 ;

ll n,x,t,m,x1,x2,y1,y2,p1,p2;
vector<ll>v1,v2 ;
vector< P >v;
string s;
ll lps[5000000];
#define ret return
#define X first
#define Y second

ll detec(ll a, ll b){


      if(a==0 && b==0) ret 1;
      if(a==n && b==0) ret 2;
      if(a==n && b==n) ret 3;
      if(a==0 && b==n) ret 4;
      

    ///  cout<<" CAME "<<a<<","<<b<<endl;
      if(a==0 && 0<=b && b<=n)ret 1;
      if(b==0 && 0<=a && a<=n)ret 2;
      if(a==n && 0<=b && b<=n)ret 3;
      ret 4;
}

ll gopos(ll p1,ll p2){

   ll dis=0;
   dis+=abs(v[p1].X-x1)+abs(v[p1].Y-y1);
   x1=v[p1].X;
   y1=v[p1].Y;

   ll s,e;
   s=p1+1;
   if(s==5)s=1;
   for(int i=s;   ; i++){
         
         if(i==5) i=1;
         if(i==p2){
              
              ll b=i-1;
              if(b==0) b=4;
              dis+=abs(v[b].X-x2)+abs(v[b].Y-y2);
              break;
         }
         else{

            dis+=n;
            x1=v[i].X;
            y1=v[i].Y;
         }
    }
    return dis;

}
ll goneg(ll p1,ll p2){
   

////   cout<<" Goneg "<<p1<<" "<<p2<<endl;
   ll dis=0;
   ll nn=p1-1;
   if(!nn) nn=4;

   ///cout<<" OK "<<nn<<"> "<<v[nn].X<<","<<v[nn].Y<<"   :  ("<<x1<<","<<y1<<")"<<endl;

   dis+=abs(v[nn].X-x1)+abs(v[nn].Y-y1);
   x1=v[nn].X;
   y1=v[nn].Y;
   ll s,e;

 ///  cout<< " PNOW "<<x1<<" "<<y1<<" && d= "<<dis<<endl;
   s=nn-1;
   if(s==0)s=4;
   for(int i=s;   ; i--){
         
         if(i==0) i=4;
         if(i==p2){
              
              ll b=i+1;
              if(b==5) b=1;
              dis+=abs(v[b].X-x2)+abs(v[b].Y-y2);
              break;
         }
         else{

            dis+=n;
            x1=v[i].X;
            y1=v[i].Y;
         }
    }
    return dis;
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

 ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

    cin>>n>>x1>>y1>>x2>>y2;

    ll sx1=x1,  sx2=y1;
    
    v={{-1,-1},{0,0},{n,0},{n,n},{0,n}};

    p1=detec(x1,y1);
    p2=detec(x2,y2);


 ///   cout<<p1<<" to "<<p2<<endl;

    ll ans1=gopos(p1,p2);

    x1=sx1; y1=sx2;
    ll ans2=goneg(p1,p2);

    ll oo=4*n;

    if(ans1>oo) ans1%=oo;
    if(ans2>oo) ans2%=oo;

   //// cout<<" A1 "<<ans1<<" :" <<" ans2 "<<ans2<<endl;
    cout<<min(ans1,ans2)<<endl;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///