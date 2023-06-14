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
#define preflag long long  int flag=0,i=0,j,k,l

#define pb push_back
#define pii pair<int , int >
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

bool siz(const string a,const  string b)
{
    return a.size()<b.size();
}
string ballshit (vector<string > x)
{
      int flag=0;
       sort(x.begin(),x.end(),siz);
        for(int p=0;p<x.size()-1;p++)
        {
            if(x[p+1].find(x[p])==string ::npos)    flag=-1;
        }
        if(flag==-1) return "NO";
        else
            {
                    return "YES" ;
            }
}
int main()
{
 preflag;
 i(l);
vs veco;
vs iit;
 mz(l)
 {
     string s;i(s);
     veco.pb(s);
 }
 string xp=ballshit(veco);
 if (xp=="YES")
 {
     cout<<xp<<endl;
     sort(veco.begin(),veco.end(),siz);
     for(auto xc:veco) cout<<xc<<endl;
 }
else cout<<xp;
}
