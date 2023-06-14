#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fp(i,x,n) for(int i=x;i<n;i++)

int main() 
{
    int N;
    ll D;
    cin >> N >> D;
    
    ll A[N];
    ll ANS = 0;
    
    fp(i,0,N)
        cin >> A[i];
        
    fp(i,0,N-1)
        {
            if(A[i+1]-D > A[i]+D)
                ANS += 2;
            else if(A[i+1]-D == A[i]+D)
                ANS++;
        }
        cout << ANS + 2<<endl;
}