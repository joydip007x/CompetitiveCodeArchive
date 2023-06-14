#include<bits/stdc++.h>
using namespace std;
#define ll int
ll n,x,NOTJUMP,previ,diff;
int main()
{
     while(cin>>n)
     {
         diff=n-1;NOTJUMP=0;
         if(n==1) { cin>>x ; cout<<"Not jolly\n";continue; }
         for(ll i=1; i<=n; i++)
         {
             cin>>x;
             if(i==1)
             {
                 previ=x;
                 continue;
             }
             else
             {
                 if(x==previ+diff  or x==previ-diff) {   diff-- ; previ=x; continue;  }
                 else NOTJUMP=1;
             }
         }
         if(NOTJUMP) cout<<"Not jolly\n";
         else cout<<"Jolly\n";
     }
}

