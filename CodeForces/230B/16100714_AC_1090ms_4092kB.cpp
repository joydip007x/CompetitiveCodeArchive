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

#define  sz                         1000001
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
#define  ret                     return

vector < ll > prime,tprime ;
bool vis[sz+2];
void seive( )
{
    prime.pb(2);
    mem(vis, false );
    const  ll SX=sqrt(sz)+1;
    for ( ll i=4 ; i<=sz; i=i+2){vis[i]=true;}
    for( ll i=3 ; i<=SX ; i++ )
    {   if (!vis[i])
            {   for ( ll j=(i*i)  ; j<=sz  ; j=j+(2*i) ){vis[ j ]=true;} }
    }
    vis[0]=vis[1]=true;
    vis[2]=false;
    tprime.push_back(4);
    for(ll i=3 ; i<=sz ; i=i+2)
            if(!vis[i])  {prime.pb(i); tprime.pb(i*i); }
}

bool trisha ( ll X)
{
    return binary_search(all(tprime) , X);
}
int main()
{
  seive();
  ll n,xx; cin>>xx;
  LOOP(i,0,xx)
  {
      cin>>n;
      if(trisha(n) ) cout<<"YES";
      else cout<<"NO";
      eee;
  }
}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
