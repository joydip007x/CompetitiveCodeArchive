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

int main()
{
        preflag;
        string s,s2,s3;
        cin>>s>>s2>>s3;
        for(i=0,j=0,k=0;i<s3.length();i++)
        {
           for(int xc=0;xc<s.length();xc++)
                {
                    if(s3[i]==s[xc] && s[xc]!=0 && s3[i]!='~' ) {s3[i]='~'; s[xc]=0;
                        break;}
                 }
        }
                        cout<<endl;
        for(i=0,j=0,k=0;i<s3.length();i++)
        {
           for(int cx=0;cx<s2.length();cx++){
                if(s3[i]==s2[cx] && s2[cx]!=0 && s3[i]!='~' ){s3[i]='~';  s2[cx]=0 ;
                  break;}
           }
        }
        flag=0;
         for(i=0;i<s.length();i++)
        {
            if(isalpha(s[i])) { flag--;break;}
        }
         for(i=0;i<s2.length();i++)
        {
            if(isalpha(s2[i])) { flag--;break;}
        }
        for(i=0;i<s3.length();i++)
        {
           if(isalpha(s3[i])) { flag--;break;}
        }
      if(flag<=-1) cout<<"NO";
        else cout<<"YES";
}