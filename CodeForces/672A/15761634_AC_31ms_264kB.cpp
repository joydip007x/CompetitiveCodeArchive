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
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
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

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
int main()
{
        vector < ll >v(1000);
        ///v.resize(1010);
        long long c[1010];
        preflag;
          k=1;
         flag=1;
         ll x,y,z;
          cin>>j;
         for(   k=1   ;  flag<1010   ;   k++    )
         {
           ///  check(flag);
          //  /// cout<<(log10(k)+1)<<endl;
        if(flag>1000) break;
            ///{cout<<c[j] ; return 0;}
             if(int(log10(k)+1)==1) {     c[flag++]=k;            }
                   ///cout<<":push: "<<k;eee;  }
             if(int(log10(k)+1)==2){     x=int(k/10) ; y=k-(10*x); v.pb(x); v.pb(y);      c[flag++]=x; c[flag++]=y;                                                   /// cout<<":push: "<<x<<" : " <<y<<" ::: "<<flag;eee; ///dcheck(x,y);
                 }
              if(int(log10(k)+1)==3){    x=int(k/100); y=int(k/10)-(x*10); z=k-(int(k/10)*10);  c[flag++]=x; c[flag++]=y; c[flag++]=z;    ///cout<<":push: "<<x<<" : " <<y<<":"<<z<<" ::: "<<flag; eee;
                   }
         }
         ///cout<<v[z];
         cout<<c[j];
}