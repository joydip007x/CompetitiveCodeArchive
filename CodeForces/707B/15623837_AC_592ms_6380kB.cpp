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
#define  preflag 	          long long flag=0,i=0,j=0,k=0,l=0,n,m,p,q
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb		                  push_back
#define  ppb                  	  pop_back()
#define  pii 		              pair<long long , long long  >
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
#define ll                        long long int
#define spi pair<pair<long long ,long long >,long long>
bool cmp( spi a , spi b)
{
    return (a.second<b.second);
}

preflag;
vector<pair<pair<long long ,long long >,long long>>v;
vector<pair<pair<long long ,long long >,long long>>::iterator it ,itt,ip,ipp;
set <long long >K;
int main()
{
    cin>>n>>m>>k;
    p=m;
    till(p)
         {
             long long  xx,yy,zz;
             cin>>xx>>yy>>zz;
            /// pair<long long  , long long  >yyy(xx,yy);
            /// pair <pair<long long ,long long >,long long>zzz(yyy,zz);
            v.pb(  pair<pii  ,long long > (  pii(xx,yy) ,zz   ) );
         }

    if (k!=0)
    {LOOP(i,0,k)
     {
         ll pp;
         cin>>pp;
         K.insert(pp);
         ///cout<<"inserting "<<pp;
     }
    }
     sort(v.begin(),v.end(),cmp);
 for (auto ix :v)
   {
    ///cout <<" "<<ix.first.first <<"  "<<ix.first.second<<" _ "<<ix.second <<"   "<<endl;;
   }
   if (k==0) cout<<"-1"<<endl;
   else
    { flag=0;
        for (auto ix :v)
        {
                 if (  K.find(ix.first.first)!=K.end()  && K.find(ix.first.second)==K.end())
                           {
                               flag=1;cout<<ix.second; break;
                           }
                    if ( flag==0 &&  K.find(ix.first.first)==K.end()  && K.find(ix.first.second)!=K.end())
                    {
                            flag=1;cout<<ix.second; break;
                    }
                 if (flag==1) {break;}

        }
        if (flag==0) cout<<"-1"<<endl;
   }
}