#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n,x  ,m[100000+100][400];
ll t,y;
void a(){

  for(int i=1 ; i<=100009 ; i++){

      ll p=i;
      while( p%2==0) {  p=p/2; m[i][2]++;  }
      for(int j=3 ; j*j<=p ; j=j+2){

         while(p%j==0) { p=p/j ; m[i][j]++; }
      }
      //if(p!=1) m[i][p]++;
  }
}
int main()
{
    a();
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        for(int i=x ; i<n; i++){

             if(  i%x==0 and i%y) cout<<i<<" ";
        }
        cout<<"\n";
    }


  return 0;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
