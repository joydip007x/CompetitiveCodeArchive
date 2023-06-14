/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>01/08/2018		*///

#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
#define flagg int flag=0,i=0,j=0,k=0;
#define pb push_back
#define poo pair<int , int >
#define sz 100000
#include<vector>

bool poocomp(const poo &a, const poo &b)
{
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}
long long int t,num,te1,te2;
int main()
{   scanf("%d", &t);
while (t--)
    {vector< poo >v;
    vector< poo >::iterator it;
    scanf("%d" ,&num);
    for(int i=0;i<num;i++)
    {scanf("%lld %lld", &te1,&te2);
    v.pb(poo(te1,te2));}
    sort(v.begin(),v.end(),poocomp);
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<it->first <<" "<<it->second<<endl;
    }
    }
}
