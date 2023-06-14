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
#define preflag long long  int flag=0,i=0,j,k,l,date

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

int main()
{
    preflag;
    i(l);
    int po=0;
    msi m;
    msi iit;
    mz(l)
    {
        string s,xx;
        i(j);
        mz(j){     i(s);i(k); m[s]=k;       }
        cin>>date>>xx;
        cout<<"Case "<<++po<<": ";
        if(m[xx]<=date && m[xx]!=0){cout<<"Yesss"<<endl;}
        else if(m[xx]<=(date+5)  && m[xx]!=0 ){cout<<"Late"<<endl;}
        else /*if ((m[xx]+5)<date || m[xx]==0 )*/cout<<"Do your own homework!"<<endl;
        m.erase(m.begin(),m.end());
        date=0;
    }

}

