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

int main()
{
  preflag;
  ll t,n;
  cin>>t;
  while(t--)
  {   cin>>n;
      char c[105];
      for(i=0;i<n;i++) {   cin>>c[i]; }
      flag=0;
      if(n==2) {
            int q=int(abs(c[0]-c[1]));
         if (q==2 || q==0 ) { cout<<"YES"<<endl; }
      else {cout<<"NO"<<endl; }
      }
    else   if(n!=2) {
      for(i=0,j=n-1;       i<n/2    ;      i++,j--     )
      {
          int p= int(abs(c[i]-c[j]));
         // check(p);
          if(p!=0 && p!=2)  {flag=-1;break;}
      }
      if (flag==0  ) {cout<<"YES"<<endl; }
              else cout<<"NO"<<endl;
        } 
      
  }
}