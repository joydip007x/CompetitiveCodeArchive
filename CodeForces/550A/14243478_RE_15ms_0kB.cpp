#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
#include<queue>
#define loopi(i,L,U) for(int i=(int)L;i<U;i++)
using namespace std;
int main()
{
    queue<char>XXZ;
    int z=0;
    char  x,y,io,test[100];
    while(scanf("%c",&io) && io!='\n' )
    {XXZ.push(io);}
   while(XXZ.size()>0){x=XXZ.front();XXZ.pop();
    y=XXZ.front();XXZ.pop();
    if(x==65 && y==66) z++;
    else     if(x==66 && y==65) z++;}
    if (z>=2) cout<<"YES";
    else cout<<"NO";
    cout<<endl;
}
