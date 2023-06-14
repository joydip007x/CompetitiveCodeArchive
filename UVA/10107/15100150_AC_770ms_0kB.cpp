#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>MED;
long long int  P,Q,R,S,X;
int main()
{
    while(scanf("%lld",&X)==1)
    {
        MED.push_back(X);
        sort(MED.begin() ,MED.end());
        P=(MED.size()+1)/2;
        Q=MED.size()/2;
        R=(MED.size()+2)/2;
        S=MED[Q-1]+MED[R-1];
        if(MED.size()%2==1){printf("%lld\n",MED[P-1]);}
        else {printf("%lld\n",S/2);}
        P=Q=R=0;
    }
}
 ///cout<<"<><><><><>><"<<MED.size()<<endl;
 ///cout<<S/2<<endl;
 ///{cout<<MED[P-1]<<endl;}
