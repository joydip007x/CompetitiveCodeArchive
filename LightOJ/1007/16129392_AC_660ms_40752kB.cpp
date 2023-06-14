///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for( unsigned long long int i=( unsigned long long int)L;i<U;i++)
#define  LOOPX(i,L,U,X)        for(unsigned long long int i=(unsigned  long long int)L;i<U;i=i+( unsigned long long )X)

#define  LOOPeq(i,L,U)    for(unsigned long long int i=(unsigned long long int)L;i<=U;i++)
#define  preflag              unsigned long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         5000005
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
#define ll                       unsigned long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
ll  fuc[sz +6];
void ph(  )
 {
     fuc[1]=1;
     LOOP(i,1,sz){fuc[i]=i;}
     LOOP(i,2,sz)
     {
         if(fuc[i]==i)
        {
         for(unsigned long long p=i ; p<sz ; p=p+i)
          {   fuc[p ]=(fuc[p ]/i) *(i-1);}
        }
     }
      LOOP(i,2,sz)
      {
          fuc[i]=fuc[i]*fuc[i];
          fuc[i]=fuc[i]+fuc[i-1];
      }
 }
int main()
{
        preflag;
        ph();
        ll ka=0;
        ll px;
        scanf("%lld",&px);
        till(px)
        {
            

ll x,y;
            scanf("%lld %lld",&x,&y);
            ll z=fuc[y]-fuc[x-1];
            printf("Case %lld: %llu\n",++ka , z);
        }
}
