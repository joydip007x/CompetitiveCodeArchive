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
#define preflag long long  int flag=0,i=0,j,k,l=0;

#define pb push_back
#define pii pair<long long int ,long long  int >
#define msi map< string,long long int>
#define vi vector<long long int >
#define iit ::iterator it


#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y<<endl
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

int main()
{
    preflag;
    i(i);i(j);
    vector < pii >p1;
    vector <pii >::iterator pit ,pit2;
    vi ori;
    vi ::iterator it,it2;
    LOOP(l,0,j)
    {
        long long x,y;
        i(x);i(y);
        p1.pb(pii(x,y));
      ///  doublecheck(x,y);
    }
    LOOP(l,0,i) {   long long xx; i(xx); ori.pb(xx);      ///check(xx);
    }
   /// pit=pit2=p1.begin();
    bool fk=0;
    for(pit=p1.begin(); pit!=p1.end() && fk!=1;pit++)
    {
        long long y=pit->first; long long yy=pit->second;
        it=find (ori.begin(),ori.end(),y);
        it2=find (ori.begin(),ori.end(),yy);
        y=yy=0;
        ///check(it2-ori.begin());
       /// check(yy);
        ///cout<<":::::::::::"<<it-ori.begin()<<":::::::::::::::"<<it2-ori.begin()<<endl;
        if((it-ori.begin() )     -(it2-ori.begin()) >0 ) {           fk=1;}
      ///  pit++;
    }
 if (fk==1) cout<<"NO";
 else cout<<"YES";
}

