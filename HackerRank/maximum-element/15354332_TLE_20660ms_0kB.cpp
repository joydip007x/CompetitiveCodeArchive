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
#define preflag long long  int flag=0,i=0,j,k,l,p,q,r

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
{ preflag;
    stack <long long >st;
    vector<long long >pp;
    vector <long long >::iterator it;
   i(j);
   mz(j)
   {
       i(l);
       switch (l)
       {
           case 1: i(p);st.push(p); pp.push_back(p); break;
           case 2:
                    k=st.top();
                    st.pop();
                    it=find( pp.begin(),pp.end(),k );
                    *it=0;
                    break;
           case 3:
               sort(pp.begin(),pp.end(),greater <int > ());
               cout<<pp[0]<<endl;
               break;

       }
   }


}

