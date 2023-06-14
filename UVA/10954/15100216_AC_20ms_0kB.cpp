#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>

#define forloop(i,L,U) for(int i=(int)L;i<U;i++)
using namespace std;
int main()
{
    priority_queue<long long int,vector<long long int>,greater<long long int> >veco;///move these declare line inside while ...:) then its ok
   long long  int _case,y[10000],x,sum=0,ans=0,a;
    while(    cin>>_case &&_case!=0)
    {

        forloop(i,0,_case)
         {cin>>x; veco.push(x);}
        while(veco.size()>1)
        {   sum=veco.top();                 veco.pop();
            sum=sum+veco.top() ;        veco.pop();
            ans=ans+sum;
            veco.push(sum);
        }
        cout<<ans<<endl;
        ans=0;sum=0;
        while(!veco.empty()){veco.pop();}
        ///veco = priority_queue <int>(0,0);

    }
}
///for(int i=0;i<_case;i++)
