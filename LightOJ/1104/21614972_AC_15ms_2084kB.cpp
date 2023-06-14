#include<bits/stdc++.h>
using namespace std ;

#define ll            long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%d",&c);

int t;
int main(){


       sc(t);
       for(int cas=1; cas<=t ; cas++){

            double cres;
            int up,person,day;
            scanf("%d",&day);
            up=day-1;
            person=1;
            cres=1.00;
            for(int i= 0 ; i<=day ; i++){

                cres*=( (1.00*up)/(day*1.00) );
//                cout<<" = "<<(up)<<"/ "<<day<<" res = "<<cres<<endl;
                if( cres<=0.5000000 ) break;
                --up;
                ++person;
            }
//            cout<<" LOL "<<up<<endl;
            printf("Case %d: %d\n",cas,person);

       }

}
