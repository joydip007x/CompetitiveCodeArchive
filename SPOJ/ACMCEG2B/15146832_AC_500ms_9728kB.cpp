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
#define msi map< long long int,string>
#define vi vector<int >

#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define until0(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,t,x,y;
    string s;
    map<pair<int,int>,string>m;
    map<pair<int,int>,string>:: iterator it;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        pair<int,int>code(x,y);
        cin>>s;
        m[code]=s;
    }
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        pair<int,int>p(x,y);
        cout<<m[p]<<endl;
    }
}
