///*/////////////////// /// *
///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0,fuk=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         100000
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9

#define  gaira                 printf("::: pias abal :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<endl
#define ll                        long long

int main()
{
   preflag;
   cin>>l;
   set<ll>S;
   bool fla=false;
   while(fla==false)
   {
       l++;
       S.insert(l/1000);
       S.insert((l/100)-( l/1000 )*10 );S.insert((l/10) -(l/100)*10 );
       S.insert( ( l  )-(l/10)*10  );
//       for(auto it : S)
//       {
//           cout<<it<<"::";
//       }
       if(S.size()==4) {fla=true;}
       S.clear();
   }
  cout<<l;

}
