  #include<bits/stdc++.h>
  using namespace std;
  typedef  long long ll;

  #define pb push_back
  #define nl '\n'
  #define deb(x) cerr<<#x" = "<<x<<nl
  #define in() ( { int a ; scanf("%d",&a); a; } )

   
  const int N =55;
  const int mod = 1e9 + 7;
  ll x,t,k,n;

  ll a[N][N],d[N][N];
  string hell(){

      for(int i=n-2; i>=0; i--){

          for(int j=n-2; j>=0; j--){
               
               if(!a[i][j])continue;
               if(a[i+1][j] || a[i][j+1]) continue;
              /// cout<<i<<":"<<j<<" BREAKS\n";
               return "NO";
          }
      } 
    return "YES";
  }
  int main()
  {
    
     ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
     cin>>t;
     while(t--){

            cin>>n;
            memset(d,0,sizeof d);
            memset(a,0,sizeof a);
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    char x;
                    cin>>x; 
                    a[i][j]=x-48;
                }
            }
       ////     cout<<" OK : ";
            cout<<hell()<<endl;          
     }
    return 0;
  }



  ///author-joydip007x         ///
  ///Time&Date-Whenever i submit///