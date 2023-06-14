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
#define  BEAR             cout<<"Bear"; return 0;
#define ELE                cout<<"Elephant"; return 0;
int main()
{
        preflag;
        vector < ll >v;
        LOOP(i,0,6){cin>>j;v.pb(j);}
        srt(v);

        for(auto it :v)
           /// cout<<it<<" ";

        flag=0;
        ll flag1=0,flag2=0,flag3=0;
        LOOP(i,0,3)
        {
            if ( v[i]!=v[i+1] )    {break;}
            else {    flag1++;}
        }
        if(flag1==3)
        {
             ll x=v.back(); v.pop_back();
             ll y=v.back(); v.pop_back();
             if(x==y)  {cout<<"Elephant"; return 0;}
             else if(x!=y) {cout<<"Bear"; return 0;}
        }

        if(flag1!=3)
        {
            LOOP(i,1,4)
        {
            if ( v[i]!=v[i+1] )    {break;}
            else {    flag2++;}
        }
        }
        if(flag2==3)
        {
            ll x=v[0];
            ll y=v.back();
             if(x==y)  {cout<<"Elephant"; return 0;}
             else if(x!=y) {cout<<"Bear"; return 0;}
        }
        if(flag2!=3)
        {
            LOOP(i,2,5)
        {
            if ( v[i]!=v[i+1] )    {break;}
            else {    flag3++;}
        }
        }
        if(flag3==3)
        {
            ll x=v[0]; ll y=v[1];
             if(x==y)  {cout<<"Elephant"; return 0;}
             else if(x!=y) {cout<<"Bear"; return 0;}
        }
      /// cout<<flag1<<":"<<flag2<<":"<<flag3<<endl;
        cout<<"Alien"<<endl;
}