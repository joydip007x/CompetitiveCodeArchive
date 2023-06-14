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
#define preflag int flag=0,i=0,j=0,k=0

#define pb push_back
#define pii pair<int , int >
#define msi map<string , int>
#define vi vector<int >

#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define until0(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

int main()
{
   preflag;
   i(i); long long int y;
   set <int >s;
   set <int >::iterator it;
   until0(i)
   {
       i(j);
       switch(j)
       {
       case 1: cin>>y;s.insert(y); break;
       case 2: cin>>y;s.erase(y); break;
        case 3:{
                    cin>>y;
                    if(s.find(y)==s.end()){cout<<"No";}
                    else cout<<"Yes";
                        eee;break;
                  }
       }
   }
}


