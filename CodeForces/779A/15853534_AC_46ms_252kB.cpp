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
     ll a[1005] , b[1005],c[6] , cmpa[6] , cmpb[6];
     preflag;
     memset( c, 0 ,sizeof(c));
     map< ll , ll > ma , baba ,fuck;
     memset( cmpa, 0 ,sizeof(c));
     memset( cmpb, 0 ,sizeof(c));
    ll m ;
    cin>>m;
        LOOP(i,0,m)
        {
            cin>>a[i];
            ma[a[i]] ++;
            cmpa[a[i]-1]=ma[a[i]];
        }
        LOOP(i,0,m)
        {
            cin>>b[i];
            ma[b[i]] ++;
            baba[b[i]]++;
            cmpb[ b[i] -1 ]=baba[b[i]];
        }
        for(auto ixx : ma )
        {
            if( !ma.count(1) )   ma[1]=0;
            if( !ma.count(2) )   ma[2]=0;
            if( !ma.count(3) )   ma[3]=0;
            if( !ma.count(4 ))   ma[4]=0;
            if( !ma.count(5) )   ma[5]=0;
        }
    // sort(cmpa, cmpa+5 ); sort(cmpb,cmpb+5);//sort will destry fixed indexeding in cmpa&b.
        for(auto it : ma)
        {
            if(it.second%2==1) {cout<<"-1"; return 0;}
            c[flag ++]=it.second/2;
        }

        flag=0;
        LOOP(i,0,6)
        {
            if(cmpa[i]<c[i]) {   flag=flag+(c[i ] -cmpa[i]  ); }
        }
        LOOP(i,0,6)
        {
            if(cmpb[i]<c[i]) {  flag=flag+(c[i]-cmpb[i]) ; }
        }

        cout<<flag/2;
}

