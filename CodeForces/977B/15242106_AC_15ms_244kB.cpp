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
#define preflag long long  int flag=0,i=0,j,k,l,ind=-1

#define pb push_back
#define psi pair<string , int >
#define msi map< string,long long int>
#define vs vector<string >
#define iit ::iterator it


#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

bool mycmp (const psi &a , const psi &b )
{
    /// map ma *x=(map ma *)a;
   ///     map ma *y=(map ma *)b;
 return a.second>b.second;
}
int main()
{
 char xxx[100000];
 msi ma;
 msi::iterator ip;
 preflag;
 i(l);
 mz(l){cin>>xxx[++ind];}
 vs ss;
 vector <psi >poo;
 vector <psi >::iterator poi;
 vs iit;
 for(i=0,j=1;i<ind;i++,j++)
 {    string p(2,0);
      p[0]=xxx[i];  p[1]=xxx[j];
     ss.pb(p); ///cout<<p<<endl;
 }
while(ss.size()!=0)
{
    string xc=ss.back();
    ss.pop_back();
    ma[xc]++;
}
for(auto kis:ma )
    {
            poo.pb(psi(kis.first,kis.second));
    }
    sort(poo.begin(),poo.end(),mycmp);
    poi=poo.begin();
    cout<<poi->first;

}



