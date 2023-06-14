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
//#define  sc                      second
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
#define sc                       cout<<"Ans : ";
int main()
{
        preflag;fast;
        ll m,n,t;
        cin>>m>>n>>t;
        ll xxx[m][n];
        LOOP(i,0,m)
        {
            LOOP(j,0,n)
            {
                cin>>xxx[i][j];
            }
        }
        priority_queue< ll >PQ;
       vector <ll >va(m,0);
      /// va.resize(m);
    LOOP(i,0,m)
        {
            LOOP(j,0,n)
            {
                if(xxx[i][j]==1){   flag++;PQ.push(flag);  if (flag>va[i]) {va[i]=flag; }       }
                if(xxx[i][j]==0) {flag=0;}
            }
               flag=0;
        }
        LOOP(k,0,t)
        {
            ll  v,b;
            cin>>v>>b;
            flag=0;
            va[v-1]=0;
            if(xxx[ v-1][b-1]==0) {  xxx[v-1][b-1]=1;         }
    else if(xxx[v-1][b-1]==1) {  xxx[v-1][b-1]=0;         }
             v=v-1;
             flag=0;
             LOOP(j,0,n)
             {
                if(xxx[v][j]==1){   flag++;PQ.push(flag);
                 if (flag>va[v]) {va[v]=flag; }

                  }
                if(xxx[v][j]==0) {flag=0;}
             }
             flag=0;
              ///  gaira;
              ///sc;
          ///  cout<<PQ.top()<<endl;
          cout<<*max_element(all(va));eee;
          ///  PQ.pop();
            ///gaira;

        }


}
