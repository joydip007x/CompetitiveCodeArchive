#include<bits/stdc++.h>
using namespace std ;

#define pb push_back
vector<string>v;
int main(){

     int n,f=1,cnt=0;
     scanf("%d",&n);
     if(n==1) {printf("a\nb\nc\n");return 0;}
     v.pb("ab");v.pb("ac");
     v.pb("ba");v.pb("bc");
     v.pb("ca");v.pb("cb");
     if(n==2) {
            for(int i=0; i<=5; i++)
                 printf("%s\n",v[i].c_str());
            return 0;
     }
     for(int i=0; i<=5 && f ; i++){

        while( v[i].size()<n ){
            int j=v[i].size()-1;
            char p=v[i][j], q=v[i][j-1];
            if( (p=='a' && q=='b' ) ||  (p=='b' && q=='a' ) ){v[i].pb('c');continue;}
            if( (p=='b' && q=='c' ) ||  (p=='c' && q=='b' ) ){v[i].pb('a');continue;}
            if( (p=='c' && q=='a' ) ||  (p=='a' && q=='c' ) ){v[i].pb('b');continue;}
           /// cout<<" i "<<i<<" "<<v[i]<<endl;
        }
        cnt+=v[i].size();
        if(cnt>100000) f=0;
     }
     if(!f) { printf("TOO LONG\n") ; return 0; }
     for(int i=0; i<=5 && f ; i++){
       printf("%s\n",v[i].c_str());
     }
     return 0;
}
