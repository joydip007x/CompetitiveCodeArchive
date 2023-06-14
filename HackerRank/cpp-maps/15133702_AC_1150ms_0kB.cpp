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
#define preflag int flag=0,i=0,j=0,k=0,y=0
#define pb push_back
#define pii pair<int , int >
#define msi map<string , int>
#define vi vector<int >
#define notrue false
#define ifnot else
#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define scanc(c) cin>>c
#define until0(c) while(c--)
#define eee cout<<endl

int main()
{
    preflag;
    msi ma;
    string s;
    scanc(k);
    while(k--)
    {
        long long int z;
        cin>>z;
        switch(z)
        {
            case 1: cin>>s>>y; ma[s]=ma[s]+y; break;
            case 2: cin>>s; ma.erase(s); break;
            case 3: cin>>s;cout<<ma[s];eee; break;
            default: return 0;
        }

    }
}


