#include<iostream>
#include<algorithm>
#include<queue>
#include<stack>
using namespace std;
int main()
{
    int x=0,w=0;char c;
    scanf("%d%c",&x,&c);
    if(x==1 || x==2)
       {
        if (c=='A' || c=='D'){w=1;}
        else if (c=='B' || c=='C'){w=2;}
        else w=3;
       }
   else if(x>=3 && x<=20)
    {
        if (c=='A' || c=='F'){w=1;}
        else if (c=='B' || c=='C' ||c=='D' || c=='E'){w=2;}
        else w=3;
    }
 else if (x>=21 && x<=65)
    {
        if(c=='A' || c=='K'){w=1;}
        else if (c=='C' || c=='D'||  c=='H' || c=='J'){w=2;}
        else w=3;
    }
    if(w==2) cout<<"aisle"<<endl;
     if(w==1) cout<<"window"<<endl;
     if(w==3) cout<<"neither"<<endl;

}