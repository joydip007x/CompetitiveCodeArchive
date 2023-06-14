#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>

#define forloop(i,L,U) for(int i=(int)L;i<U;i++)
using namespace std;
int main()
{
    int _case;
    while( cin>>_case &&_case!=0)
    {
        priority_queue<long long int,vector<long long int>,greater<long long int> >veco;
        long long  int y[10000],x,sum=0,ans=0,a;
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
    }
}