/// Never Give UP ///
/*                                  *
 *    joydip007x             	    *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
/// i repeat , never :)		*///

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
#define sz 100000
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
#define _pair pair<int , int >
#define pb push_back

bool pair_comp( const _pair &a , const _pair &b)
{
    if(a.first==b.first) return a.second<b.second;
    else return a.first<b.first;
}

int n,k,p=0,i,total=0,a[1000];
bool pair_comp( const _pair &a , const _pair &b);
int main()
{
    vector<_pair > pv;
    vector<_pair >::iterator it;
    cin>>n>>k;
    LOOP(i,0,n){cin>>a[i]; pv.pb(_pair(a[i],i)); }
    ///STEP
        ///cout<<"Before sorting --- "<<'\n';
     for (it=pv.begin();it!=pv.end();it++)
    {
      ///  cout<<"first element -> "<<it->first<<" second element  index->"<<it->second<<endl;
    }
    ///STEP
    sort(pv.begin(),pv.end(),pair_comp);
    ///STEP
      ///  cout<<"After sorting --- "<<'\n';
     for (it=pv.begin();it!=pv.end();it++)
    {
       /// cout<<"first element -> "<<it->first<<" second element  index->"<<it->second<<endl;
    }
    ///STEP
    for (it=pv.begin();it!=pv.end();it++)
    {

        total=total+(it->first); p++;
        ///STEP
       ///int  present=total;
        ///cout<<"total ---"<<total<<endl;
        if(total>k) {
                p--;
                total=total-(it->first);
///cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~minus="<<it->first<<endl;
                break;}

//                total=total-it->first;
//                    p--;
//                break;}
    }
    int ans=0;
     for (it=pv.begin();it!=pv.begin()+p;it++){ans=ans+it->first;}
   if(ans!=0) cout<<p<<'\n';
   else cout<<"0"<<endl;
    for(it=pv.begin();it!=pv.begin()+p;it++)
    {
        cout<<it->second+1<<" ";
    }

}