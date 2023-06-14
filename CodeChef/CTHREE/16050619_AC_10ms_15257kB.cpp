///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
/*
     If opportunity doesn't knock, build a door.
    Success is how high you bounce when you hit bottom.
*/
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

#define  sz                         1000000
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)
#define TEST_CASE(t)      for(ll int z=1;z<=t;z++)

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
    ll n,x,y,z,tc,cnt=0;
    cin>>tc;
    LOOP(t,0,tc)
    {
         vector < ll > v;
         cin>>n>>x>>y>>z;
         for( ll i=1; i*i<=n; i++)
         {
             if((n%i)==0)
             {
                 if (  i<=x || i<=y || i<=z  ) v.pb(i);
                 if ((n/i)!=i && ( (n/i)<=x || (n/i)<=y || (n/i)<=z)) v.pb(n/i);
             }
         }
         srt(v);
       ///  for(auto it: v) cout<<it<<" ";
         ///eee;
         for( ll i=0 ; i<v.size() ; i++)
         {
             if(v[i]>x) {break;}
             ll p=n/v[i]; /// (a,b,c) er (a) UNIQ always proved . one vag for one lement;
             ll beginx=0,endx=v.size() -1 ;
             for (   ; beginx<=endx ;     )//////read question , we are already taking DISINCT first element cz in 74 line
                ////// the loop runs once for only one v[i] or first elemnt..so begin<endx looks like
                /// taking uniq elemnt9a,b,c) but a is always uniq by our logic
        ////  while(beginx<=endx)
             {
             ///   if( beginx>endx) {break;}
              //// cout<<"  "<<beginx<<" {}{} "<<endx;eee;
               ////cout<<cnt<<"   ";
                ll prod=v[beginx]*v[endx];
                if(prod==p )
                {
                    if( v[beginx] ==v[endx] ) cnt++;///////match it with prev submission
                    ///if vbegix ==vendx ten it will make your count 2++ with normal , and y1==y2 z1=z2 hobe
                    //so handle that  if vbeigx==vendx increase 1 ;
                   else
                    {
                    if( v[beginx]<=y && v[endx]<=z ) cnt++;
                     if( v[beginx]<=z && v[endx]<=y ) cnt++;

                   }
                }
                //if(prod<p)  ++beginx;///--endx;
               // else  --endx////\\\\ekhane if(prod>p) --endx dile kaj korbena.
                ////.ulta infinite loop hobe
              ///LOOK next line e NOT ELSE IF ...its diffr from loop avobe
                 if(prod>p)  --endx;////upore and nice same ..logic exception
                else  ++beginx;

                ;///++beginx;
             }
         }
         cout<<cnt<<endl;
         cnt=0;
    }
}
////optimal ideas //
/*https://www.codechef.com/viewsolution/17480609#*/



