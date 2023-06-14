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

#define  sz                         900009
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
#define ll                        int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

vector < ll > prime ;
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
    for(ll i=3 ; i<=sz ; i=i+2)
            if(!vis[i])  {prime.pb(i);}
}

int main()
{
         ll n,cas;
         seive();
         cin>>cas;
   for ( ll k=0 ; k<cas ; k++)
         {
            ll  U , D;
            cin>>D>>U;
            vector < ll > ans;
            bool flag=false;
            for ( ll k=D ; k<=U   ;   k++)
            {
                    ll cur=k, limit=k/2;
                    set< ll > S;S.insert(1);S.insert(cur);
                    for(  ll pp=2 ;  pp<=limit ; pp++   )
                    {
                        if (cur%pp==0)
                        {
                            S.insert(pp); S.insert(cur/pp);
                        }
                    }
                    if ( vis [S.size() ]==false ) {ans.pb(k);}
            }
            for ( auto it : ans) cout<<it<<" ";
            if(ans.size()==0)
            {cout<<"-1";}
            eee;
            ans.erase(all(ans));

        }
    ////    cout<<endl;

}
