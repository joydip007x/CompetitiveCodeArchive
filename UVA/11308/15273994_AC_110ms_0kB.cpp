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
#define preflag long long  int flag=0,i,k,l,testcase,cost=0,inf=-1,zc,spa=-1

#define pb push_back
#define psi pair<string  , int >
#define msi map< string,long long int>
#define v vector<
#define iit ::iterator it


#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl

bool owncmp(const psi &a,const psi &b)
{
    if(a.second!=b.second) return a.second<b.second;
    if(a.second==b.second)
    {
        int x=a.first.compare(b.first);
        if(x>0) return b.first>a.first;
    }
}

int main()
{
  preflag;
  i(testcase);
  ///mz(testcase)
  LOOP(zc,0,testcase)
  {
      ///if(zc!=0) {cout<<endl;}
    v psi > rec;
    v psi > ::iterator j;
    v psi >out;
      string s,hp;long long m,n,b;
      hp="Too expensive!";
      getchar();
       getline (cin,s);
      /// cout<<s<<endl;
     /// cin>>s;
      ///getline(cin,s);
      ///scanf("%[^\n]s",&s);
      ///
      for(i=0;i<s.size();i++){if(s[i]>='a' && s[i]<='z') {s[i]=s[i]-32;} }
      cin>>m>>n>>b;
      LOOP(i,0,m){    string ss;int x; cin>>ss>>x;rec.pb(psi(ss,x));  }
      LOOP(i,0,n)
      { cost=0;
        string sss;int lit;
        ///cin>>sss;
        getchar();getline(cin,sss);
        cin>>lit;
        while(lit--)
        {   string s2;int b2;
            cin>>s2>>b2;
             for(j=rec.begin();j!=rec.end();j++)
             {
                 if(s2==j->first)
                 {cost=cost+(b2*j->second);     /*cout<<":::::::::::::::::::::::::::"<<cost<<":::::::::::::::::";*/   break;   }
             }
        }
        if(cost<b) {inf++;flag=1; out.pb(psi(sss,cost));


      }

     if(out.size()!=0) sort(out.begin(),out.end(),owncmp);

  }
   cout<<s<<endl;
    if(out.size()==0)
    {
        cout<<"Too expensive!"<<endl;

    }
    else  {
            for(auto ixx:out){cout<<ixx.first<<endl;}
             }
      cout<<endl;
  }

}


/*
3
MZI
8 3 100
sugar 4
water 0
lemon 3
cream 20
vanilla 5
egg 5
cream 50
straw 5
*/
