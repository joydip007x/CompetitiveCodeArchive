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
#define ss  set<string >

#define sz 100000
#define check(x) cout<<":::"<<x<<":::"<<endl
#define doublecheck(x,y) cout<<":::"<<x<<":::"<<y
#define i(c) cin>>c
#define mz(c) while(c--)

#define notrue false
#define ifnot else
#define eee cout<<endl


bool chkund(char x,int length , int i)
{
    if (x=='-' && i+1==length) return true;
    ifnot return notrue;
}
int main()
{
  preflag;
  char s[1000];
  vector<string >vec;
  ss ses;
  ss iit;  char word[100];

 /// vector<string > iit;
  while(gets(s))
  {
  ///cout<<s.size();
  int p=strlen(s);
      for(i=0;i<p;i++)
      {

            if(isalpha(s[i]))
            {
                s[i]=tolower(s[i]);
                word[j++]=s[i];
            }
         else   if(s[i]=='-' && i+1!=p)
            {
                word[j++]='-';
            }
            else if (s[i]=='-' && i+1==p)
            {
                continue;
            }
//          if(!chkund(s[i],s.size(),i) && s[i]=='-')
//            {  word[j++]='-';
//            }
           /// else continue;

           if((  !  isalpha(s[i])  && s[i] !='-' ) ||( i+1==p && s[i]!='-'))
           {
               word[j]='\0';
               if(j!=0)
               {ses.insert(word); ///cout<<": : "<<word<<endl;;
             //vec.pb(word);
               }
               j=0;
               ///word.erase();
           }

//              if(isalpha(s[i])    ) {word[j++]=s[i];} ///cout<<s[i]<<":"<<endl;}
//              else word[j++]='\0';break;
//
//          }
//           ses.insert(word);j=0;
//          ///else continue;

      }
  }
   ///sort(ses.begin(),ses.end());
   for(it=ses.begin();it!=ses.end();it++)
     cout<<*it<<endl;
//      for(it=vec.begin();it!=vec.end();it++)
//     cout<<*it<<endl;
}

