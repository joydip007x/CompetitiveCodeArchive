/// Never Give UP ///
/*                                  *
 *    author-joydip007x             *
 *            *                     *
 *    its_simple_i_win              *
 *                                  */
///*	 Never tired :)	:V	*///
///     Date^>XX/08/2018		*///

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<map>
using namespace std;
#define LOOP(i,L,U) for(int i=(int)L;i<U;i++)
#define LOOPeq(i,L,U) for(int i=(int)L;i<=U;i++)
#define flagg int flag=0,i=0,j=0,k=0
#define pb push_back
#define pii pair<int , int >
#define sz 100000
int main()
{
    int p=0;
    flagg;
    map<string , int >m;
    map<string, int >::iterator it;
    map<string, int >::iterator it2;
    string s;
    cin>>p;
    while (k!=p)
    {
        cin>>s ;
        if (s=="int"){k++;}
        m[s]++;
    }
    it=m.begin(); ///it2=m.end();
    k=it->second;
    it++;
    int l=it->second;
    ///cout<<k<<":::"<<l<<endl;
    ///cout<<it->first<<":::"<<it->second<<":::::::::"<<it2->first<<":::::"<<it2->second;
    if(k==l+1)
        {

           /// int k=it2->second;
           /// int l=it->second-1;
            while(--k){cout<<"pair<";}
            cout<<"int";
            while(l--){cout<<",int>";}
        }
    else cout <<"Error occurred";

}


