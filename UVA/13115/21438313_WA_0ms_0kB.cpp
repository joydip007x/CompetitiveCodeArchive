#include<bits/stdc++.h>
using namespace std ;

#define ll            int
#define pb            push_back
#define sc(c)          scanf("%d",&c);

ll t ,a[5000][5000];

bool vis( int i, int j , int sq , int mn){

   int wow[10000];
   memset(wow,0,sizeof wow);
   for(int k=i ; k< i+sq  && k<mn ; k++){

        for(int l=j ; l< j+sq && l<mn; l++){
            wow[ a[i][j] ]=1;
        }
   }
   for(int i=1; i<=mn ; i++) if(!wow[i] ) return false;
   return true;
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
         for(int i=0 ; f==0 &&i<n; i++){

            for(int j=0 ; f==0 && j<n; j++){

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


