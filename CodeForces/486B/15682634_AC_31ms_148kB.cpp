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
#define  preflag 	          long long flag=0,i=0,j=0,k=0,l=0,m,n
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

#define  gaira                 printf("::: pias necroxoda:::::::::::::  \n")
#define notrue 		        false
#define ifnot 		            else
#define eee 		            cout<<'\n'
#define ll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define itfor(i, c)     for (typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

int main()
{
   preflag;
   cin>>m>>n;
   ll a[m][n],b[m][n];
   LOOP(i,0,m)
    {LOOP(j,0,n)
            {
                cin>>a[i][j];
                b[i][j]=1;
            }
    } LOOP(i,0,m)
    {LOOP(j,0,n)
            {
            if(a[i][j]==0)
                {
                    LOOP(k,0,m) {    b[ k ][j]=0; }
                    LOOP(k,0,n) {    b[ i ][k]=0; }
                }
            }
    }
     LOOP(i,0,m)
    {LOOP(j,0,n)
            {
                    bool OR=0;
               LOOP(k,0,n) { OR=OR | b[i][k]; }
                LOOP(k,0,m) { OR=OR | b[k][j]; }
               if (OR!=a[i][j]){cout<<"NO"; return 0;}
            }
    }
    cout<<"YES"<<endl;
  LOOP(i,0,m)
    {LOOP(j,0,n)
            {
             cout<<b[i][j]<<" ";
            }eee;
    }


}
