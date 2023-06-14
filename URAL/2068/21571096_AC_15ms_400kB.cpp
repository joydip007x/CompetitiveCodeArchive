#include<bits/stdc++.h>
using namespace std ;

#define ll          int
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);


int main(){


    ll n;
    stack<ll>s;
     ll mov=0,xxx=0,sum=0;
     sc(n);
     for(int i=0 ; i<n ; i++){

          ll x;
          sc(x);
          if(x==1  ) continue;
          sum=sum -1 + ((x+1)/2);
     }
     if(sum%2==1)  return printf("Daenerys\n"),0;
      else  return printf("Stannis\n"),0;
}
