#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
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
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0,maxl

#define star  cout<<"*";

int main()
{
       vector <string > v;
       vector <ll > len;
       string s; preflag;
       k=-1;
       while(getline(cin , s))
       {
           len.pb(s.size());
           v.pb(s);
          /// cout<<s.size();eee;
       }
       maxl=*max_element(all(len));
       const ll stlen=maxl+2;
       LOOP(i,0,stlen){cout<<"*";}
       eee;
       flag=0;
       ll left , right ;
    LOOP( j,0,v.size())
    {
         string x=v[j];
        ll  land=x.size();
        if(land==0 ){     star;land=maxl; LOOP(p,0,land){     cout<<" ";     }  star;  eee;  }
        else
        {

         if( (land %2==0 && maxl%2==0 ) || (land%2==1 && maxl%2==1) ){
              left=right=(maxl-land)/2;
              star;
              LOOP(p,0,left){     cout<<" ";     }
               cout<<x;
              LOOP(p,0,right){     cout<<" ";     }
              star;
              eee;
         }
         else{
           /// if(land%2==0 && maxl%2==1 ) {land=land;}
         //   if(left<=maxl/2) {left=maxl/2;}
          //  if(right<=maxl/2){right=maxl/2;}
          if(flag==0)
            {left=(maxl-land)/2;
            right =left+1; flag=1;}
          else if(flag==1)
            {
            right=(maxl-land)/2;
            left=right+1; flag=0;
            }

//            if(flag==0) {        left=max(land,land2); right=min(land,land2); flag=1;    }
//            if(flag==1){         left=min(land,land2); right=max(land,land2); flag=0;    }

            star;
             LOOP(p,0,left){     cout<<" ";     }
             ///if(x.size()!=0)
             {cout<<x;}
            LOOP(p,0,right){     cout<<" ";     }
             star;
            eee;
           //
         }
        }

    }
 LOOP(i,0,stlen){cout<<"*";};eee;
}
/*
maxl=13
gadjhgd ajkfg
agf
jfshg

sfjs
fj

sfjh^Z

*/
