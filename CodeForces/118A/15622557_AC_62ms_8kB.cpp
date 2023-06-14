///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^> <^> <^> <^> <^> /// *
///*<^> Never tired :)<^>:V	*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018	*///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)     for(long long int i=(long long int)L;i<=U;i++)
#define  preflag 	            long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)          memset((arr), (x), sizeof((arr)));

#define  pb		push_back
#define  ppb 	pop_back()
#define  pii 		pair<long long int , long long int >
#define  msi 	map< string,long long int>
#define  vi 		vector<long long int >
#define  iit 		iterator it,it1,it2
#define  iip 		iterator ip,ip1,ip2

#define  sz 		                100000
#define  check(x) 	        cout<<":::"<<x<<":::"<<endl
#define  doublecheck(x,y) cout<<":::"<<x<<":::"<<y<<endl
#define  i(c) 		            cin>>c
#define  o(c) 		            scanf("%lld",&c);
#define  mz(c,r)   	            long long r=c;while(c--)

#define  fs              first
#define  sc              second
#define  pi 		       acos(-1.0)
#define  eps 		   1e-9

#define notrue 		false
#define ifnot 		    else
#define eee 		        cout<<endl

bool isvowel(char c)
{
    if(c=='A' || c=='E' || c=='I'||c=='O' || c=='U'|| c=='Y' )  return true;
    else if(c=='a' || c=='e' || c=='i'||c=='o' || c=='u'|| c=='y' )  return true;
    else return notrue;
}
int main()
{
    string s;
    char out[1000];
    preflag;
    i(s);
    LOOP(i,0,s.length())
    {
        if (isalpha(s[i]) && !isvowel(s[i]))
        {
              if(s[i]>=65 && s[i]<=90) {s[i]=s[i]+32;}
            out[j++]=s[i];   ///check(s[i]);
        }
//        if(out[j-1]>=65 && out[j-1<=90])
//           {
//                out[j-1]=out[j-1]+32;
//           }
    }
    /// j=0;
    LOOP(k,0,j)
    {
        if(isalpha(out[k]))
        {cout<<"."<<out[k];}
    }

}




















