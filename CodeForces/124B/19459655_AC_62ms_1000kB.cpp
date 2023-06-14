#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                      int
#define sz 500
ll n,k,col[sz][sz], mynum[100],ans=INT_MAX,minx,maxx;
char c,s[500];
vector<ll>arr;
bool vis[sz] ;
ll backt( ll a)
{
  if(arr.size()==k)
  {
     /// cout<<"ENTER\n";
      ///for(auto it:arr) cout<<it<<" ";cout<<endl;
     for(int i=0 ; i<10; i++) mynum[i]=0;
     for(int i=0 ; i<arr.size() ; i++)
     {
         int p=arr[i];
         for( int j=0 ; j<n ; j++  )
         {
             mynum[j]=(mynum[j]*10 ) +col[j][p];
         }
     }
     minx=INT_MAX , maxx=INT_MIN;
     for(int j=0 ; j<n ; j++)
     {
        /// cout<<":print- "<<mynum[j]<<"\n";
         minx=min(minx, mynum[j]);
         maxx=max(maxx, mynum[j]);
     }
   //// cout<<ans<<"  : "<<maxx-minx<<endl;
     ans=min(ans, abs(maxx-minx) );
     return 1;
  }
  for(int i=0 ; i<k; i++)
  {
      if(vis[i])  continue;
      vis[i]=1;
      arr.pb(i);
      backt(i+1);
      arr.pop_back();
      vis[i]=0;
  }
  return 0;

}
int main()
{

    scanf("%d %d",&n,&k);
    getchar();
    for(int i=0 ; i<n ; i++)
    {
       gets(s);
       for(int j=0 ; j<strlen(s) ; j++)
       {
           col[i][j]=s[j]-48;
          /// cout<<col[i][j] ;
       }
      /// cout<<endl;
    }
    backt(0);
    cout<<ans<<endl;
}
/*
6 4
5237
2753
7523
5723
5327
2537
*/
///author-joydip007x         ///
///Time&Date-Whenever i submit///
