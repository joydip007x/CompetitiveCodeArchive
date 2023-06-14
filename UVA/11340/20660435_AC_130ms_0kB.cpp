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
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define lll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
int main()
{
     lll tc;
     fast;
     cin>>tc;
     char cx[10009];
     while(tc--)
     {
         lll k;
        cin>>k;
         set<char  >S;
         map< char , lll > M;
        LOOP(i,0,k)
         {
             char F ;lll x;
             cin>>F>>x;
             S.insert(F);
             M[F]=x;
         }
         lll kk;
         cin>>kk;
         long double  cost=0, tri=0;
         LOOPeq(i,0,kk)
        {
            cin.getline(cx, 10009);
             lll len=strlen(cx);
            for(lll xxx=0 ; xxx<len ; xxx++)
            {
                char Y=cx[xxx];
                if(S.find(   Y  ) !=S.end()  )
                {
                    cost=cost+M[  Y ];

                }
            }
          }
          cout<<fixed<<setprecision(2)<<cost/100<<"$"<<endl;
     }
}

