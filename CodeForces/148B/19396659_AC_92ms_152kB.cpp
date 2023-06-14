#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        double

ll vp,vd,t1,f,ded,d,delspd;
ll t2,catc,cnt;
int main()
{
   cin>>vp>>vd>>t1>>f>>ded;
   d=(t1)*(vp);
   delspd=vd-vp;
   cnt=0;
   if(d>=ded  || vp>=vd ) {  cout<<"0\n"; return 0; }
   while(1)
   {
       if(d>=ded) break;
       t2= 1.00*d / delspd *1.00;
       catc=d+(t2*vp);
       if(catc <ded) cnt++;
       catc+=(t2*vp)+(f*vp);
       d=catc;
   }
   cout<<cnt<<endl;
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///
