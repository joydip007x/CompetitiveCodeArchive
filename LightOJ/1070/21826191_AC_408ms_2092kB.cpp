#include<bits/stdc++.h>
using namespace std;
#define  ll llu 
#define  llu unsigned long long 
#define  v vector<ll>
vector<v>base;
ll n,x,t,apb,ab;
vector<v> multiplyy(vector<v>A, vector<v>B){

     vector<v>tmp={ {0,0},{0,0} };
     for(int i=0; i<=1; i++){

     	  for(int j=0; j<=1; j++){

     	  	 for(int k=0; k<=1; k++){

                 tmp[i][j]+= (A[i][k]*B[k][j]);
     	  	 }
     	  }
     }
   return tmp;
}
vector<v> bigpow ( vector<v>root ,ll pow){

     if(pow==1) return base;
     vector<v>tmp=bigpow(root,pow/2);
     tmp=multiplyy(tmp,tmp);
     if(pow&1) tmp=multiplyy(tmp,root);
     return tmp;
}
int main()
{
    
    cin>>t;
    base={ {0,0} ,{1,0} };
    for(int i=0; i <t; i++){
         
         cout<<"Case "<<i+1<<": ";
    	 cin>>apb>>ab>>n;
    	 if(n==0) { cout<<2<<endl; continue;}
    	 if(n==1) { cout<<apb<<endl; continue;}
    	 base[0]={apb,-1*ab};
    	 vector<v> b2=bigpow(base,n-1);
    	 llu ans=(b2[0][0]*apb)+ (b2[0][1]*2) ;
    	 cout<<ans<<endl;;

    }

}

///author-joydip007x         ///
///Time&Date-Whenever i submit///