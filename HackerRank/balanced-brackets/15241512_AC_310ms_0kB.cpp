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
#define eee cout<<endl

string isbalanced(string s)
{
    stack<char >sk;
    const char A='(',B=')',C='{',D='}',E='[',F=']';
    for(auto x:s)
    {
        switch(x)
        {
        case A:
        case C:
        case E:
                   sk.push(x);break;
        case B:
            if(sk.empty() || sk.top()!=A) return "NO";
            sk.pop();break;
        case D:            if(sk.empty() || sk.top()!=C) return "NO";
            sk.pop();break;
        case F:
                        if(sk.empty() || sk.top()!=E) return "NO";
            sk.pop();break;
//             if(s[x]==sk.top()) sk.pop();
//             if(s[x]!=sk.top() || sk.size()==0)  return "NO";break;
        }

    }
     return sk.empty() ? "YES":"NO";
}

int main()
{
 int i;
 i(i);
 mz(i)
 { string s;
     cin>>s;
     cout<<isbalanced(s)<<endl;
 }

}

