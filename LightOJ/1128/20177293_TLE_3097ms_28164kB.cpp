#include<bits/stdc++.h>
using namespace std;
typedef int  ll;

ll n,q,t;
int main()
{
  cin>>t;
  for(int uu=1; uu<=t ; uu++){
      cin>>n>>q;
      ll log=log2(n)+1;
      ll lca[n+100][ (int)log2(n)+50 ] , val[n+10];
      for(int i=1; i<=n+10; i++)
           for(int j=0;j<log2(n)+2;j++)
                   lca[i][j]=-1;
      val[0]=1;
      for(int i=1; i<n; i++){
         int x,y;
         cin>>x>>y;
         val[i]=y;
         lca[i][0]=x;
      }
      for(int j=1; 1<<j <=n; j++){
         for(int i=0 ; i<=n; i++){
           if(lca[i][j-1]!=-1)
            lca[i][j]=lca[ lca[i][j-1] ][j-1];
         }
      }
      cout<<"Case "<<uu<<":\n";
      for(int i=0 ; i<q; i++){
         int x,y;
         cin>>x>>y;
         for(int j=log ; j>=0 ; j--){

            if(  lca[x][j]!=-1 and val[lca[x][j]]>=y) x=lca[x][j];
         }
         cout<<x<<"\n";
      }
  }

  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
