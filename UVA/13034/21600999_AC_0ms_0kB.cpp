#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

ll n,x,q,t ;

int main(){


    sc(n);
    int cas=0;
    while(n--){
    cas++;
    int f=0;
    printf("Set #%d: ",cas);
    for(int i=0 ; i< 13; i++){

         sc(x);
         if(x==0) f=1;
    }
    if(f==1)  printf("No\n");
    else printf("Yes\n");

    }

}
///128 64 48 32 24 16 12 8 6 4 3 2 1