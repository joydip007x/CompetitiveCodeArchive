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
#define preflag long long  i=0,j,k,l,nn

#define pb push_back
#define pii pair<int , int >
#define msi map< string,long long int>
#define vi vector<int >
#define iit ::iterator it
#define stk stack<char >


#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

int main()
{
 preflag;
 i(nn);
/// mz(nn)
 {
    char A='(',B=')',C='{',D='}',E='[',F=']';
    string s;
    stk stak;
   int  flag=-1;
    getline(cin,s);
    LOOP(i,0,s.size())
    {

        if(s[i]==A || s[i]==C || s[i]==E)
        {
            stak.push(s[i]);
        }
       else  if(s[i]==B || s[i]==D || s[i]==F)
        {
            char xx=stak.top(); stak.pop();
            cout<<"taking charrrr ::::  "<<xx<<endl;
            if(s[i]==B && xx==A )
            {   flag++;cout<<"::::::: flagg for ::: s[i]=      "<<s[i]<<" &&&&  xx==  "<<xx<<":::    "<<flag<<endl;
                continue;}
           else if(s[i]==D && xx==C)
      {   flag++;cout<<"::::::: flagg for ::: s[i]=      "<<s[i]<<" &&&&  xx==  "<<xx<<":::    "<<flag<<endl;
               continue;
               }
           else  if(s[i]==F && xx==E)
            {   flag++;cout<<"::::::: flagg for ::: s[i]=     "<<s[i]<<" &&&&  xx==  "<<xx<<":::    "<<flag<<endl;
               continue;}


            else flag=-1;
            if(flag==-1) break;
        }
    }
    if(flag==-1 || stak.size()!=0) cout<<"No"<<endl;
    if(flag>0 && stak.size()==0)cout<<"Yes";
    flag=0;
 }

}

