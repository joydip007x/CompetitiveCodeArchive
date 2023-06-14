#include<bits/stdc++.h>
using namespace std ;

#define ll            int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll t ,a[500][500];

bool vis( int i, int j , int sq , int mn){

   ////cout<<"call from "<<i<<" "<<j<<" "<<endl;
   set<int>s;
   for(int k=i ; k< i+sq  && k<mn ; k++){

        for(int l=j ; l< j+sq && l<mn; l++){
            s.insert(a[k][l]);
        }
   }
   if(s.size()== ( sq*sq ) ) return true;
   return false;
}
int main(){


    sc(t);
    while(t--){

         int n;
         sc(n);
         ll sq=0 , f=0;
         while(  sq*sq !=n) sq++;
         for(int i=0 ; i<n; i++){

            for(int j=0 ; j<n; j++){
                scanf("%d",&a[i][j]);
            }
         }
         for(int i=0 ;/* f==0 &&*/i<n; i++){

            for(int j=0 ; /*f==0 &&*/ j<n; j++){

                if(i%sq==0 && j%sq==0) {
                    if(!vis(i,j,sq , n)) {  f=1; }
                }
            }
         }
         if(f) printf("no\n");
         else printf("yes\n");
    }
}
/*
2
4
1 2 3 4
3 4 1 2
2 3 4 1
4 1 2 3
9
1  2  3  4  5  6  7  8  9
2  3  4  5  6  7  8  9  1
3  4  5  6  7  8  9  1  2
4  5  6  7  8  9  1  2  3
5  6  7  8  9  1  2  3  4
6  7  8  9  1  2  3  4  5
7  8  9  1  2  3  4  5  6
8  9  1  2  3  4  5  6  7
9  1  2  3  4  5  6  7  8

*/


