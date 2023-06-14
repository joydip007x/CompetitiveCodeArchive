#include<iostream>
#include<cstring>
#define loopi(i,L,U)  for(int i=(int)L;i<U;i++)

using namespace std;
int main()
{
    int nrnk,nyr[1000],want[1000],x=0,sum=0;
    cin>>nrnk;
    nyr[0]=0;
    loopi(i,1,nrnk)  { cin>>nyr[i] ;}
    loopi( i , 0  ,2   )  { cin>>want[i] ;}
    x=want[1]-want[0];
    if(x==1){ cout<<nyr[ want[0] ] ;}
    else if(x>1)
    {
        for(int j=(want[0]);j<(want[1]);j++)
        {
            sum=sum+nyr[j];
        }
         cout<<sum<<endl;
    sum=x=0;
    }
   //loopi(i,0,x+1){ sum=sum+nyr[i]  ; }  ///FIX HERE;

}