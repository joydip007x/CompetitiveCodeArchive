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
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
#define preflag long long int flag=0,j=0,k=0,arr[100000],x=-1,i,z=0,xx[100000];

#define pb push_back
#define pii pair<int , int >
#define msi map<string , int>
#define vi vector<int >

#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<"("<<x<<" "<<y<<"):::"
#define i(c) cin>>c
#define until0(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl
bool cmp(const pii &a, const pii &b)
{
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}
int main()
{
    preflag;
     vector <pii > v;
    vector <pii > ::iterator it;
    vector <pii >::iterator ip;
     cin>>i;
    while(i--)
    {
        cin>>arr[++x];
        v.pb(pii(arr[x],x));
    }
    sort(v.begin(),v.end(),cmp);
//    for(it=v.begin();it!=v.end();it++)
//    {
//        doublecheck(it->first,it->second);
//    }
 for(it=v.begin(),ip=v.begin()+1;ip!=v.end();ip++,it++)
    {
        if(it->first==ip->first)
        {
            xx[z++]=abs(ip->second-it->second);
        }
    }
    sort(xx,xx+z);
//    for(int p=0;p<z;p++)
//
//  ///  {cout<<":"<<xx[p]<<" "; }
//    eee;
        if(xx[0]>0)cout<<xx[0];
        else cout<<1;
}


