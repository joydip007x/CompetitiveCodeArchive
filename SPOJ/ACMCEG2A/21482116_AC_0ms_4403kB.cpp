#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

ll n,x,q,t ;
string ss;
char s[30000];
int main(){


    sc(t);
    while(t--){

     scanf("%s %lld",&s,&x);
     ss=s;
     while(x--){
         next_permutation(ss.begin() , ss.end() );
     }
     printf("%s\n",ss.c_str() );

    }

}
