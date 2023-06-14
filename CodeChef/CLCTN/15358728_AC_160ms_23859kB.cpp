/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>XX/08/2018		*///
#include<bits/stdc++.h>

using namespace std;
double ans[1000000];
long double nigga()
{
     double num=0;
   for(long long xxx=1;xxx<1000000;xxx++)
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
 while(h--)
 {
    long long int j,r;
     cin>>j;
     r=(j*ans[ j ])+1;
     cout<<r<<endl;
 }


}

