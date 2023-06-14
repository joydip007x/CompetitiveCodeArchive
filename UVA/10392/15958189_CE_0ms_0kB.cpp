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

#define   sz          9999999

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
#define ll                        unsigned long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
bool  vis[ sz+10 ];
vector < ll >prime ;
vector < ll > ::iterator it;
void seive ()
{
    for(ll i=3 ; i*i<=sz ; i++)
    {
        if(!vis[i])
        {
            for(ll j=i*i ; j<=sz ; j=j+(2*i) )
            {
                vis[j]=1;
            }
        }
    }
    for(ll i=3 ; i<=sz ; i=i+2)
    {
        if(!vis[i]) {prime.pb(i); ///check(i);
        }
    }
}
int main()
{
    prime.pb(2);
    seive();
    ll bign;
   /// while(scanf("%llu",&bign) && bign>-1)
   while(cin>>bign && bign!=-1)
    {
        multiset < ll > S;
        multiset < ll > ::iterator III;
        for(it=prime.begin() ; it!=prime.end() ; it++)
        {

            while (bign%(*it)==0)
            {
                S.insert(*it);
               
                bign=bign/(*it);
            }
                if(bign==1) {break;}

        }
        if(bign>1) S.insert(bign);
        //////if(S.size()==0) {cout<<"    "<<bign<<endl<<endl;continue ;}
        for(III=S.begin() ; III!=S.end() ; III++)
        {
            cout<<"    "<<*III<<endl;
        }
        cout<<endl;
    }
}