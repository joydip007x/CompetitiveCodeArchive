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

int main()
{
 long long j;
 while (i(j) && j!=0)
 {
     map<vector<int > , int > mv;
    map<vector<int > , int > ::iterator it;
    vector <int > v;
    LOOP(i,0,j)
    { LOOP(k,0,5)
                {int x;cin>>x;v.pb(x);}

//        for(auto ix :v) cout<<"cureent :::" <<ix<<endl;
//        cout<<endl;
         sort(v.begin(),v.end());
       mv[v]++;
       v.erase(v.begin(),v.end());
    }
    vi poo;
    vi ::iterator ipo;
    for(auto iip:mv)
    {
        poo.pb(iip.second);
    }
//    for(auto ix2 :poo) cout<<"sorted :::" <<ix2<<endl;
//        cout<<endl;
    sort(poo.begin(),poo.end(),greater <int >());
    ipo=poo.begin();
    int max=*ipo;
    int conflict=max;
 for(ipo=poo.begin()+1;ipo!=poo.end();ipo++)
    {
       /// if(max==*ipo) conflict++;
        if(max==*ipo) {   conflict=conflict+*ipo;      }
    }
//   if(poo[0]>1 && ) cout<<poo[0]<<endl;
//   else cout<<j<<endl;
//if(conflict==0 ) cout<<max<<endl;
//else cout <<j<<endl;
cout<<conflict<<endl;
 }
}

