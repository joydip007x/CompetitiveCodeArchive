#include<iostream>
#include<deque>
#include<cstring>
#include<algorithm>
#define loopi(i,L,U) for(int i=(int)L;i<U;i++)
using namespace std;
int main()
{
        deque<char>q1,q2;
        char x,y,z;
        int n,rslt=0;
        cin>>n;
        loopi(i,0,n)
         { ///scanf("%c",&x);
             cin>>x;
             q1.push_back(x);
        }
        while(!q1.empty())
       {
        y=q1.front();   q1.pop_front();
        z=q1.front();   q1.pop_front();
        if(y==z)    { rslt++;   q1.push_front(y); z=0;}
        else q1.push_front(z);y=z=0;
       }
        {cout<<rslt<<endl;}
}