/// Never Give UP ///
/*                                  *
 *    joydip007x             	    *
 *    its_simple_i_win              *
 *                                  */
/// Never tired :)///

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<set>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)

int main()
{
   int n,k,flag=1,score=0,p,x=0,i,sp_ca=0,leng=0;
   char s[1000],u[1000];
   set< int> alp;
   set< int >::iterator it;
   cin>>n>>k;
   p=n;
   int g=-1;
    while(p--){cin>>s[++g];}
    for(i=0;i<n;i++)
            {alp.insert(s[i]);}
    for(it=alp.begin(),i=0;it!=alp.end();it++,i++)
        {
            u[i]=*it;
            leng++;
           /// if (u[i]-u[i-1]>=2){sp_ca++;}
      /// cout<<"u[ "<<i<<"]"<<u[i]<<endl;
        }
    score=u[0]-96;
    int kk=i;
   if(k==1)  {     cout<<score; }
   else
   {
       for(i=1;i<kk;)
       {   if (flag==k) {break;}
          ///else
            {
            if( u[i-1]==u[i]-1){i++;}
             score=score+u[i++]-96; ++flag;
          /// cout<<"flag = "<<flag<<"for i =  "<<(i-1)<<endl;
            }
       }
       if ( flag>=k&& score>0 && i<=leng ) cout<<score;
      else  cout<<"-1";
   }
}