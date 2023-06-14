#include<bits/stdc++.h>
using namespace std;
typedef int  ll;
#define pb push_back
ll n,x ,q,t;
char s[3];
vector<ll>a;
#define sc(c) scanf("%d",&c);
int main()
{

  sc(t)
  for(int c=1; c<=t ; c++,a.clear()){
   sc(n) sc(q)
    for(int i=0 ; i< n ; i++){sc(x)a.push_back(x);}
    printf("Case %d:\n",c);
    for(int i=0 ; i<q; i++){
       scanf("%s",&s); sc(x);
       if(s[0]=='c'){
            --x;
           if(x<a.size())printf("%d\n",a[x]),a.erase(a.begin()+x);
           else printf("none\n");
       }
       else a.pb(x);
    }
  }
}


///author-joydip007x         ///
///Time&Date-Whenever i submit///
