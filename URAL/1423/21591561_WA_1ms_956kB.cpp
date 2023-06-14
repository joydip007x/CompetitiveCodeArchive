#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz=250000+10;
int main(){


       ll n;
       string a,b,c,d,e;
       char a1[sz], b1[sz];
       sc(n);
       scanf("%s",&a1);
       scanf("%s",&b1);
       a=a1; b=b1;
       if(a==b) {  printf("0\n");return 0; }
       d=a+a;
       auto it= d.find(b);
       if(it!=string::npos ) printf("%lld\n", n-it);
       else                  printf("%lld\n", -1);

       return 0;
}
