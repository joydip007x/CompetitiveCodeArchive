#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll x,t,k,m,n;
vector<ll>ans;

struct cmp{

     bool operator() (const pair <int, int >&a, const pair<int , int >&b) const {

        int len1=abs(a.first-a.second);
        int len2=abs(b.first-b.second);
        if(len1==len2) return a.first<b.first;
        return len1>len2;
     }
};
int main()
{
  

   ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
   cin>>t;
   while(t--){

          cin>>n;
          set< pair<int,int> ,cmp > s;
          s.insert({0,n-1});
          vector< int >a(n);
          for(int i=1; i<=n; i++){

              pair<int ,int > D= *s.begin();
              s.erase(s.begin());
              int id=D.first +D.second; id/=2;
              a[id]=i;
             if (D.first<id) s.insert({D.first, id - 1});
             if (id<D.second) s.insert({id + 1, D.second});
         }
    for (auto it : a) cout << it << " ";
    cout << endl;
   }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///