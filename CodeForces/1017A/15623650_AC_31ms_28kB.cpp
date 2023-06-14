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
#define preflag long long  int flag=0,i=0,j,k,l=0,x,lol=0

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

bool cmp (const pii &a , const pii &b)
{
    if(a.second==b.second) return a.first<b.first;
    ifnot return a.second>b.second;
}

int main()
{
preflag;
i(l);
vector <pii >poo;
vector<pii>iit;
LOOP(i,0,l)
{
    int c=0;
    LOOP(j,0,4)
    {  cin>>x;
        c=c+x;
    }
    if(i==0) lol=c;
    poo.pb(pii(i+1,c));

    x=c=0;
}

sort(poo.begin(),poo.end(),cmp);
for(it=poo.begin(),j=0;it!=poo.end();it++,j++)
{
    ///cout<<it->first<<" :: "<<it->second<<endl;
    if(it->first==1) cout<<j+1<<endl;
}



}
