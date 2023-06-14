#include<iostream>
#include<algorithm>
#include<deque>
#define loopi( i,L,U)  for(int i=(int)L;i<=U;i++)
using namespace std;
int main()
{
    int x,y,num;
    while(cin>>num && num!=0)
    {    deque<int > card;
        loopi(i,1,num){card.push_back(i);}
        cout<<"Discarded cards:";
        while(card.size()>1)
            {
                x=card.front();card.pop_front();
                y=card.front();card.pop_front();
                cout<<" "<<x;
                card.push_back(y);
                if(card.size()>1){cout<<",";}
            }
            puts("");
            cout<<"Remaining card: "<<card.front()<<endl;
    }
}
