#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,row[N],col[N],m;
vector<string>v[50000+20] ;
string s;

set< pair<ll,ll> >sm;
char x;
int main()
{
   // freopen("input.txt", "r+", stdin);
    ///freopen("output.txt", "w+", stdout);

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    ll t;
    cin>>t;
    while(t--){

          cin>>n>>m;
          vector<ll>r1,c1;
          sm.clear();
          for(int i=0;i<=max(n,m)+1;i++)row[i]=col[i]=0;
          for(int i=0; i<n; i++){

          	 for(int j=0; j<m ; j++){

          	 	 cin>>x;
                 if(x=='.'){
                 	row[i]++;
                 	col[j]++;
                 	sm.insert({i,j});
                 }
          	 }
          } 
          ll mn=INT_MAX, mn2=INT_MAX;
          ll ne2=INT_MAX,ne3=INT_MAX;
          for(int i=0; i<n; i++) {
             
         ///    cout<<" ROW "<<i<<" "<<row[i]<<endl;
             ne2=min(ne2,row[i]);
          	 if(row[i]<mn){
                 
                 mn=row[i];
                 r1.clear();
                 r1.pb(i);
          	 }
          	 else if(row[i]==mn){  r1.pb(i); }
          }
          for(int i=0; i<m; i++){
             
          ///   cout<<" COL "<<i<<" "<<col[i]<<endl;

              ne3=min(ne3,col[i]);
          	 if(col[i]<mn2){
                 
                 mn2=col[i];
                 c1.clear();
                 c1.pb(i);
          	 }
          	 else if(col[i]==mn2){  c1.pb(i); }
       }
       

       if(ne2==0 && ne3==0 ) { cout<<0<<endl;continue;}

    ///   cout<<" WOW "<<endl;

       sort(begin(r1), end(r1));
       sort(begin(c1), end(c1));

     ///  for(auto i:r1)cout<<i<<" ";cout<<" ROW\n";
      /// for(auto i:c1)cout<<i<<" ";cout<<" COL\n";

       ll f=0,ans= mn+mn2;

       for(int i=0; i<c1.size() && !f; i++){

       	   for(int j=0; j<r1.size() && !f ; j++){

       	   	    ll p=r1[j],q=c1[i];
                
                if( sm.find(make_pair(p,q))!=sm.end() ){

                	 ans=-1+mn+mn2;
                	 f=1;
                }

       	   }
       }
       cout<<ans<<endl;

    }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///