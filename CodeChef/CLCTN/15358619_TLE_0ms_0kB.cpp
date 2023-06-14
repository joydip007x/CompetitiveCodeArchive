/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>XX/08/2018		*///

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define LOOP(i,L,U) for(long long int i=(long long int)L;i<U;i++)
#define LOOPeq(i,L,U) for(long long int i=(long long int)L;i<=U;i++)
#define preflag long double   flag=0,i=0,k,l,ans[100000000+9]

#define pb push_back
#define pii pair<int , int >
#define msi map< string,long long int>
#define vi vector<int >
#define iit ::iterator it


#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

preflag;

long double nigga()
{
   long  double num=0;
   for(long long xxx=1;xxx<100000000+9;xxx++)
   {
       num=num+log10(xxx);
       ans[xxx]=num;
   }
}
int main()
{
  long long h;
 cin>>h;
 ans[0]=1;nigga();
 mz(h)
 {
    long long j;
     cin>>j;
     cout<<ceil((j*ans[ j ])+1)<<endl;
 }


}

