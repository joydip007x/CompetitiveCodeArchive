#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

#define int ll 
 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,c1,n1,c2,n2;
vector<ll>v ;
string s;

ll a1=0,a2=0;

int gcd(int a, int b, int &x, int &y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd(b%a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }
    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;

    return true;
}
void shift_solution(int & x, int & y, int a, int b, int cnt) {
    x += cnt * b;
    y -= cnt * a;
}
int find_all_solutions(int a, int b, int c, int minx, int maxx, int miny, int maxy) {
    int x, y, g;
    if (!find_any_solution(a, b, c, x, y, g))
        return 0;
    a /= g;
    b /= g;

    int sign_a = a > 0 ? +1 : -1;
    int sign_b = b > 0 ? +1 : -1;

    shift_solution(x, y, a, b, (minx - x) / b);
    if (x < minx)
        shift_solution(x, y, a, b, sign_b);
    if (x > maxx)
        return 0;
    int lx1 = x;

    shift_solution(x, y, a, b, (maxx - x) / b);
    if (x > maxx)
        shift_solution(x, y, a, b, -sign_b);
    int rx1 = x;

    shift_solution(x, y, a, b, -(miny - y) / a);
    if (y < miny)
        shift_solution(x, y, a, b, -sign_a);
    if (y > maxy)
        return 0;
    int lx2 = x;

    shift_solution(x, y, a, b, -(maxy - y) / a);
    if (y > maxy)
        shift_solution(x, y, a, b, sign_a);
    int rx2 = x;

    if (lx2 > rx2)
        swap(lx2, rx2);
    int lx = max(lx1, lx2);
    int rx = min(rx1, rx2);
 
    if (lx > rx)
        return 0;
    a1=lx; a2=rx;
    ///cout<<lx<<" "<<rx<<endl;
    return (rx - lx) / abs(b) + 1;
}
int32_t main()
{
    /*freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);*/

         ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
  
  int x0,y0,g;
  while(  cin>>n && n!=0){


        cin>>c1>>n1;
        cin>>c2>>n2;

        bool f=find_any_solution(n1,n2,n,x0,y0,g);

        if(!f) {

              cout<<"failed\n"; continue;
        }
        ll h=find_all_solutions(n1,n2,n,1,n/n1,1,n/n2);
        
        if(  a1>=0 && a2>=0  && (a1*n1)+(a2*n2)==n ) {
             
             cout<<a1<<" "<<a2<<endl;

        }
        if(  a1>=0 && a2>=0  && (a2*n1)+(a1*n2)==n ) {
          
             cout<<a2<<" "<<a1<<endl;
        }

      //  cout<<h<<endl;

  }
  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///