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
#define preflag long long  int flag=0,i=0,j,k,lo,l

#define pb push_back
#define pii pair<int , int >
#define msi map< string,long long int>
#define vi vector<long long int >
#define iit ::iterator it


#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

int main()
{
    preflag;
    i(i);
    vi v;vi iit;
    mz(i){i(j);v.pb(j);}
    i(k);mz(k)
    {
        i(l);
        it=lower_bound(v.begin(),v.end(),l);
        if(*it==l) {cout<<"Yes ";}
        else {cout<<"No ";}
        cout<<it+1-v.begin()<<endl;
    }
}

