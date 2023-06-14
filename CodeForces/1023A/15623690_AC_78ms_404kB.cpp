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
#define  preflag 	          long long flag=0,i=0,j=0,k=0,l=0,p,q
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb		                  push_back
#define  ppb                  	  pop_back()
#define  pii 		              pair<long long int , long long int >
#define  msi 	                  map< string,long long int>
#define  vi 		                  vector<long long int >
#define  iit                		  iterator it,it1,it2
#define  iip 	                  iterator ip,ip1,ip2

#define  sz 		                200010
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

char  s1[sz],s2[sz];

int main()
{
     preflag;
     cin>>p>>q;
     cin>>s1>>s2;
     //dcheck(s1,s2);
     
     flag=0;
     for(i=0;i<p;i++)
     {
         if (s1[i]=='*') flag++;
     }
     if(p-1>q)  cout<<"NO"<<endl;
    else  if (flag==0)
     {
         string k=s1;
         string l=s2;
         if(k.compare(l)==0)  cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
     }
      else if (p==1 && s1[0]=='*' )          cout<<"YES"<<endl;
   else   if (p==1 && q==1 && s1[0]!=s2[0]) cout<<"NO"<<endl;
     else
     {
         bool fak=true;
         for(i=0;i<p;i++)
         {
            // gaira;
             if(s1[i]=='*' )  {break;}
              if(s1[i]!=s2[i] ) {fak=false ;  break;}
         }
        for(i=0;i<min(p,q);i++)
             {
                 if (s1[p-i-1]=='*') {break;}
                if (s1[p-1-i]!=s2[q-i-1] ) {  fak=false; break;  }
             }
          if (fak==true ) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
     }

}