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
#define  preflag 	            long long flag=0,i=0,j=0,k=0,l=0,xn=0,p=0,q=0,n=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)          memset((arr), (x), sizeof((arr)));

#define  pb		push_back
#define  ppb 	pop_back()
#define  pii 		pair<long long int , long long int >
#define  msi 	map< string, set<string  >  >
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
//#define  sc              second
//#define  pi 		       acos(-1.0)
#define  eps 		   1e-9

#define notrue 		false
#define ifnot 		    else
#define eee 		        cout<<endl

bool isSuffix(string phoneNumber, set<string> phoneNumbers) {

    for (auto c : phoneNumbers) {
        if (c != phoneNumber && c.length() > phoneNumber.length()) {
            bool is = 1;
            for (int i = phoneNumber.length() - 1, j = c.length() - 1; i >= 0; --i, --j) {
                if (phoneNumber[i] != c[j]) {
                    is = 0;
                    break;
                }

            }
            if (is) {
                return 1;

            }

        }

    }
    return 0;
}
int main( )
{
   ////preflag;
   long n;
   i(n);
   msi ma; string s,x;
   map <string ,vector <string > >det;
   LOOP(i,0,n)
   {
        long xn;
       cin>>s>>xn;
       LOOP(j,0,xn){cin>>x;ma[s].insert(x);}
   }
   for(auto it : ma)
        for(auto xy  :  it.second )
        {
            bool pp=isSuffix(xy, it.second);
            if (pp)  det[it.first].pb(xy);
        }
    for(auto xx:det)
         {
             for(auto xxx: xx.second ){ma[xx.first].erase(xxx);}
        }
      ///sort(ma.begin(), ma.end());
     cout<<  ma.size()<<endl;
     for(auto cx:ma)
        {cout<<cx.first<<" "<<cx.second.size();
          for(auto cxx: cx.second)
              {cout<<" "<<cxx;}
           cout<<endl;
        }

}

