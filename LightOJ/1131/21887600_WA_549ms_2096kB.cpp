#include<bits/stdc++.h>
using namespace std ;
 
#define ll            long long  
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);
#define v vector<ll>

vector<v> base,base2;
ll t,n,a1,a2,a3,b1,b2,b3,f0,f1,f2,g0,g1,g2,mod,q,c1,c2;
vector<v>multiplyv(vector<v>A,vector<v>B){

     vector<v>ret={ {0,0,0,0,0,0},
                    {0,0,0,0,0,0},
                    {0,0,0,0,0,0},
                    {0,0,0,0,0,0},
                    {0,0,0,0,0,0},
                    {0,0,0,0,0,0} };
     for(int i=0; i<6; i++)
     	 for(int j=0;j<6; j++)
             for(int k=0; k<6; k++)
             	ret[i][j]=((ret[i][j]%mod)+(A[i][k]*B[k][j])%mod)%mod;
     return ret;
}
vector<v> bigpow( vector<v>x, ll pow){
       if(pow==1) return base;
       vector<v>tmp=bigpow(x,pow/2);
       tmp=multiplyv(tmp,tmp);
       if(pow%2) tmp=multiplyv(tmp,x);
       return tmp;
}
int main(){
    
    sc(t);
    for(int c=0; c<t ;c++){

          scanf("%lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld %lld",&a1,&b1,&c1,&a2,&b2,&c2,&f0,&f1,&f2,&g0,&g1,&g2);
          scanf("%lld\n%lld",&mod,&q);
          base={ {a1,b1,0,0,0,c1},
                 {1,0,0,0,0,0 },
                 {0,1,0,0,0,0 },
                 {0,0,c2,a2,b2,0},
                 {0,0,0,1,0,0 },
                 {0,0,0,0,1,0 }  };
          base2={{f2},{f1},{f0},{g2},{g1},{g0}};
          printf("Case %d:\n",c+1);
          while(q--){
          	 sc(n);
          	 if(n==0) {    printf("%lld %lld\n",f0,g0); continue;    }
          	 if(n==1) {    printf("%lld %lld\n",f1,g1); continue;    }
          	 if(n==2) {    printf("%lld %lld\n",f2,g2); continue;    }

          	 vector<v>res=bigpow(base,n-1-1);
          	 ll fn=0,gn=0;
          	 for(int i=0; i<6; i++){

          	 	  fn+= (  res[0][i]*base2[i][0] )%mod;
          	 	  gn+= (  res[3][i]*base2[i][0] )%mod;
                  fn%=mod;
                  gn%=mod;
          	 }
             printf("%lld %lld\n",fn%mod,gn%mod );

          }
    }
    return 0;
}