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

#define  sz                         9999997
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
#define ll                           int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

vector< ll > prime;
vector < ll > ::iterator IP;
set<ll >S ;
bool vis[sz+2] ;

void sev(void )
{
    /// S.insert(2);
     prime.pb(2);
     const ll  sqr=sqrt(sz)+1;
     for (ll i =3 ; i<=sqr; i++)
     {
         if (!vis[i])
         {
            for ( ll j=i*i ; j<=sz ; j=j+(2*i))
            {
                vis[j]=true;
            }
         }
     }
     for ( ll i=3 ; i<=sz ; i=i+2)
     {
         if(!vis[i]  ) {prime.pb(i);/// S.insert(i);}
      }
     /// reverse(all(prime));
      }
     ///cout<<vis[1000000]<<" ";
}

///void
///vector < ll >
void goldfuc ( ll X , ll k )
{
    bool flag=false;
    ///vector < ll >ans;
  ////  set< ll >::iterator IT;
    for (ll i=0 ; i<=prime.size() ; i++ )
    {
        if(flag) {break;}
        ll Fak=X-prime[i];
       //// check(Fak);
       IP= find (all(prime )  , Fak );
      if(Fak>0 && flag==false   && IP!=prime.end() )
      {
          ///IT=S.find(Fak);
     ///   if(vis[Fak]==0    )
        {

        printf("Case %d: %d %d\n",k,min( Fak , prime[i ]  )  , max(Fak, prime[i ]  )    );
        flag=true;
        break;
            ///ans.pb(prime[i] );
          ///  ans.pb(*IT );
            ///return ans;
            //cout<<prime[i]<<" "<<*IT;
           /// break;
        }
        if(flag) {break;}
      }
      if(flag) {break;}
    }
    ///if(flag) {break;}
}
int main()
{
        ll n,tcas;
        sev();
        scanf("%d",&tcas);
       for ( ll k=1 ; k<=tcas ; k++)
        {
          scanf("%d",&n);
       ///vector < ll >ans=
          goldfuc(  n  , k );
        ///cout<<ans.back()<<" " ; ans.pop_back();
      ///  srt(ans);
      //  printf("Case %d: %d %d\n",k,ans[0],ans[1]);
        ////cout<<ans.back() ; ans.pop_back();
        /// cout<<endl;
        }
}
