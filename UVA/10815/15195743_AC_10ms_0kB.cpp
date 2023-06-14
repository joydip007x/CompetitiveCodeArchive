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
#define vi vector<int >
#define iit ::iterator it


#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee printf("\n")

bool checkalp(char x)
{
    if((x>='A' && x<='Z')|| (x>='a' && x<='z')) return true;
    else return notrue;
}
int main()
{
    set<string>andis_dic;
    set<string>iit;
    string _i;
    while(cin>>_i)
    {
        for(int i=0;i<_i.size();i++)
        {
            if(checkalp(_i[i])==true) _i[i]=tolower(_i[i]);
            else _i[i]=' ';
        }
        stringstream pp(_i);
        _i.clear();
        while(pp>>_i) andis_dic.insert(_i);
        _i.clear();
    }
    for(it=andis_dic.begin();it!=andis_dic.end();it++)
    {
        cout<<*it<<endl;
    }
}

