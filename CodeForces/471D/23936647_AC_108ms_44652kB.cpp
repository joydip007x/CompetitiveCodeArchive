#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const ll mod = 10000000000007 ;
ll n,x,t,m;
vector<ll>v1,v2 ;
string s;
ll lps[5000000];
void lpscalc( vector<ll>pat){

   int i=1, len=0;
   lps[0]=0;
   while(i<pat.size()){
     if(pat[i]==pat[len]){
        lps[i]=len+1;
        len++;
        i++;
     }
     else{
        if(len) len=lps[len-1];
        else lps[i]=0,i++;
     }
   }
}
int kmp(vector<ll>str,vector<ll>pat ){

  int i=0 , j=0 ;
  ll cnt=0;
  while(i<str.size() and j<pat.size() ){

    if(str[i]==pat[j]) {i++,j++;

    if(j==pat.size()) { cnt++; j=lps[j-1];}

    }
    else{
        if(j) j=lps[j-1];
        else i++;
    }
  }
  return cnt;
}
int main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

         ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 

    cin>>n>>m;

    for(int i=0; i<n; i++){

         cin>>x;
         v1.pb(x);
    }
    for(int i=0; i<m; i++){
        cin>>x;
        v2.pb(x);
    }
    adjacent_difference(begin(v1), end(v1),v1.begin());
    adjacent_difference(begin(v2), end(v2),v2.begin());

    v1.erase(v1.begin());
    v2.erase(v2.begin());

    /*for(auto i:v1) cout<<i<<" ";cout<<endl;
    for(auto i:v2) cout<<i<<" ";cout<<endl;*/
    
    lpscalc(v2);
    if(m==1) return cout<<n,0;
    cout<<kmp(v1,v2)<<endl;


   return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///