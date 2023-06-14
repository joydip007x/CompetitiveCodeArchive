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
#define pii pair<string,string >
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
    i(k);i(j);
   vector< pii >v;
   vector< pii >::iterator it;
   char x[100],y[100];
   LOOP(i,0,k)
   {
     cin>>x>>y;
     v.pb(pii(x,y));
   }
   ///for(it=v.begin();it!=v.end();it++)
  /// {doublecheck(it->first,it->second);}

    LOOP(i,0,j)
   {
    char b[100],l[100], *h;
    cin>>b>>l;
    h=l;
    h[strlen(l)-1]=0;
    ///cout<<l;
     for(it=v.begin();it!=v.end();it++)
     {
         if(l==it->second ) {cout<<b<<" "<<l<<";"<<" #"<<it->first<<endl;break;}
     }

   }


}


