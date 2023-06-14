#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);
#define pi acos(-1.0)
ll n,x,q,t ;

int main(){

    //ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    sc(t);
    while(t--){

         int n,f;
         sc(n);sc(f);
         f++;
         double a[n+1+1] ,y ,mx=INT_MIN*1.003969 ;
         for(int i=0 ; i< n ; i++ ) {

              int x;
              sc(x);
              y= (x*1.00*x)*pi ;
              a[i]=y;
              mx=max(mx , y );
         }
         double low=0.000 , high=mx+100 ;
         while( high-low >0.0001){

                   double mid=(low+high)/2.000 ;
                   int cnt=0;
                   for( int i=0 ; i< n ; i++){

                      cnt=cnt+ floor( a[i]/(mid*2.00) ) ;
                   }
                   if(cnt>=f) low=mid;
                   else high=mid;
         }
         //printf("%Lf\n",(double)(2.00*high)  );
         cout<<fixed<<setprecision(4)<<2*high<<"\n";
        //// cout<<" DEBUG "<<2*high<<endl;

    }

}
