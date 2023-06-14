/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>XX/08/2018		*///

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
#define flagg int flag=0,i=0,j=0,k=0
#define pb push_back
#define pii pair<int , int >
#define sz 100000
#include<vector>

int main()
{
    flagg;
    cin>>k;
    vector<int >as;
    vector<int >::iterator it;
    while(k--)
    {
        cin>>i;
        as.pb(i);
    }
    sort(as.begin(),as.end());
  for(it=as.begin();it!=as.end();it++)
  {
      cout<<*it<<" ";
  }
 cout<<endl;
}

