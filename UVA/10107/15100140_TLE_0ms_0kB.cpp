#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;
vector<int>MED;
long long int  P,Q,R,S,X;
int main()
{
    while(1)
    {

        scanf("%d",&X);
        MED.push_back(X);
        sort(MED.begin() ,MED.end());
        P=(MED.size()+1)/2;
        Q=MED.size()/2;
        R=(MED.size()+2)/2;
        S=int(MED[Q-1]+MED[R-1]);
        if(MED.size()%2==1){cout<<"<"<<MED[P-1]<<">"<<endl;}
        else cout<<"<"<<S/2<<">"<<endl;
        P=Q=R=0;

    }
}
 ///cout<<"<><><><><>><"<<MED.size()<<endl;
