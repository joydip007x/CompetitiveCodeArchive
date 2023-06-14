#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

ll t ;

int main(){

        sc(t);
        int f=0;
        while(t--){
                 
                 if(f) printf("\n");
                 f=0;
                  vector<pair<ll,ll> >v;
                  pair<ll,ll > out1,out2 ; 
                  ll tot=0,A,B;
                sc(A);sc(B);
                 double  a[B+A+100][A+B+100];
                for(int i=0 ; i< B ; i++){
                       for(int j=0 ; j<A+1 ; j++){
                         scanf("%lf",&a[i][j]);
                         if(j==A) tot+=a[i][j];
                       }
                }
               /* cout<<" \n REF \n";
                for(int i=0 ; i< B ; i++){
                       for(int j=0 ; j<A+1 ; j++){
                       cout<<a[i][j]<<" ";
                       }
                       cout<<endl;
                }*/
                ///ll fif= ((50.10/100)*tot );
                for(int j=0 ; j<A ; j++){

                   ll sum=0;
                   for(int i=0; i<B; i++){
                    sum=sum + (  (a[i][A] / 100.00 ) *a[i][j] );
                   }
                   v.push_back({ sum, j+1 });

                }
                sort(v.begin() ,v.end() );
                 out1=v.back(); v.pop_back();
                 out2=v.back(); 

               ///  cout<<" 1st = "<<(tot*0.501)/out1.first <<" 2nd "<<(tot*.501)/out2.first<<endl; 
                 if( (tot*.501) <=out1.first ){

                     if(  (tot*.501) > out2.first  ) {
                          
                          printf("%lld %lld\n",out1.second,out1.first);
                           f=1;
                          continue;
                     }
                }
                {

                      if(out1.first>out2.first)  {
                          printf("%lld %lld\n",out1.second,out1.first);
                          printf("%lld %lld\n",out2.second,out2.first);f=1;
                          continue;

                        }
                    /*  else if (out1.first<out2.first) {
                        printf("%lld %lld\n",out2.second,out2.first);
                          printf("%lld %lld\n",out1.second,out1.first);f=1;
                      }*/
                      else{
                         printf("%lld %lld\n",min(out2.second,out1.second),out2.first);
                       printf("%lld %lld\n",max(out2.second,out1.second),out1.first);f=1;
                       continue; 
                      }

                     continue;
                 }


        }

}
/*
3
4  3
25.0  25.0  25.0  25.0  4500
26.0  24.0  27.0  23.0  9000
10.0  10.0  10.0  70.0  1000
3  1
51.0  24.0  25.0  1000
2  2
0.7  99.3  2788000
99.3  0.7  2788000
*/