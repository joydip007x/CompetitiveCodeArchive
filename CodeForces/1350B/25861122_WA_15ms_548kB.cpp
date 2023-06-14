#include<bits/stdc++.h>
using namespace std;
typedef  int ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5*(100000);
const int mod = 1e9 + 7;
ll n,x,t,m,k;
ll a[100009];

int LongestIncreasingSubsequenceLength(std::vector<int>& v)  
{  
    if (v.size() == 0)  
        return 0;  
  
    std::vector<int> tail(v.size(), 0);  
    int length = 1; // always points empty slot in tail  
  
    tail[0] = v[0];  
      
    for (int i = 1; i < v.size(); i++) {  
  
            // Do binary search for the element in  
            // the range from begin to begin + length 
        auto b = tail.begin(), e = tail.begin() + length; 
        auto it = lower_bound(b, e, v[i]);  
              
        // If not present change the tail element to v[i]  
        if (it == tail.begin() + length) 
        tail[length++] = v[i];  
        else   
        *it = v[i];  
    }  
  
    return length;  
}  
int main()
{
  

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){

          cin>>n;
          vector<ll>v;
          for(int i=1; i<=n; i++)cin>>x,v.pb(x);
          ll ans=LongestIncreasingSubsequenceLength(v);
          ans=(ll)ceil(log2(ans*1.00));
          cout<<max(1,ans)<<endl;
    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///