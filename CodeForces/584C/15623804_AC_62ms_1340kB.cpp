///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018	*///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag 	          long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb		                  push_back
#define  ppb                  	  pop_back()
#define  pii 		              pair<long long int , long long int >
#define  msi 	                  map< string,long long int>
#define  vi 		                  vector<long long int >
#define  iit                		  iterator it,it1,it2
#define  iip 	                  iterator ip,ip1,ip2

#define  sz 		                100000
#define  check(x) 	        cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c) 		            cin>>c
#define  o(c) 		            scanf("%lld",&c);
#define  mz(c,r)   	        long long r=c;while(c--)
#define  till(c)                 while(c--)

#define  fs                       first
#define  sc                      second
#define  pi 		                acos(-1.0)
#define  eps 		            1e-9

#define  gaira                 printf("::: pias abal :::::::::::::  \n")
#define notrue 		        false
#define ifnot 		            else
#define eee 		            cout<<endl
#define ll                        long long

char good (int  x, int y)
{
     for (int i=97 ; i<97+26;i++)
   {
       if (i!=x && i!=y )   return i;
   }

}
int main()
{
    preflag;
    ll n,t;
    cin>>n>>t;
    string s1,s2;
    cin>>s1>>s2;
    vector <int  > same , diff;
    s2.resize(n);
    for(i=0;i<s1.size();i++)
        {
             if (s1[i]==s2[i]) {same.pb(i);}
             else diff.pb((i));
        }
    string s3;
    s3.resize(n);
    for (i=0;i<s1.size();i++)
    {
        s3[i]=good(s1[i],s2[i]);
        ///cout<<s3[i];
    }
    ///cout<<s3;
///    cout<<"   \/fuk yeah/ "<<endl;
    while(t<n)
    {
        if (same.size()>=1)
        {
               int x=same.back();
               same.pop_back();
               s3[x]=s1[x]; ++t;
               ///check(x);

        }
        else if (diff.size()>=2)
        {  int x,y;
          x=diff.back();diff.pop_back();
          y=diff.back();diff.pop_back();
          s3[x]=s2[x];
          s3[y]=s1[y];
          ++t;
        }
        else {cout<<"-1"<<endl; return 0;}

    }
    cout<<s3<<endl;
}