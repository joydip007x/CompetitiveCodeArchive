#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
bool wayToSort(int i, int j) { return i > j; }

 int main()
 {
     long double _temp=0;
     int a[103],i=0,j=0,_total=0,flag=0,n,p;
     cin>>n;
     p=n;
    i=-1;
     while(p--)
        {
             cin>>a[++i];
             ///cout<<"io ok"<<endl;
        }
     sort(a,a+n, wayToSort ) ;

   /// cout<<"sort ok"<<endl;
   /*  for(j=0;j<n;j++)
     {
         cout<<"elemeto+: "<<a[j]<<endl;
     }*/
    //
     for(i=0;i<n;i++){_total=_total+a[i];}
   //  cout<<"total ok="<<_total<<endl;
     if(a[0]>_total-a[0]){flag=1;}
     else
        {
            for(i=0;i<n;i++)
                {
                    _temp=_temp+a[i];
                    if(_temp>(_total/2)){    break;   }
                }
        }
        if(flag==1){cout<<"1"<<endl;}
        else cout<<i+1<<endl;
 }
