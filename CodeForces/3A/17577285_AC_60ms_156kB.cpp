///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  loop(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  loopeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
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

#define  sz                         9
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
#define  inf                     0x7fffffff

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define    lfl                        long double
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

#define   valid(x,y)    x<=8 and x>=1 and y>=1 and y<=8
ll x[]={1,-1,0,-1,0,1,1,-1};
ll y[]={1,-1,1,0,-1,0,-1,1};

ll a,b,s1,s2,d1,d2;
char c,d;

bool vis[sz][sz];
map<pii,pii>p;
void bfs(ll x1,ll x2)
{
    queue<ll>q;
    q.push(x1);q.push(x2);
    vis[x1][x2]=true;
    bool xxx=false;
    while(!q.empty() and !xxx)
    {
      ll tx=q.front(); q.pop();
      ll ty=q.front(); q.pop();
      for(ll i=0 ; i<8 ; i++)
      {
          ll dx=tx+x[i] ;
          ll dy=ty+y[i] ;
          if ( !vis[dx][dy] and valid(dx,dy) )
          {
              q.push(dx);q.push(dy);
              p[ {dx,dy} ]={tx,ty};
              vis[dx][dy]=true;
              if(dx==d1 and dy==d2) {xxx=1;break;}
          }
      }

    }
}
string tellus(ll des1,ll des2, ll px,ll py)
{

   ll cox=des1-px, coy=des2-py;
   if(cox==0 and coy==1) ret "U";
   if(cox==0 and coy==-1) ret "D";
   if(cox==1 and coy==0) ret "R";
   if(cox==-1 and coy==0) ret "L";
   if(cox==-1 and coy==1) ret "LU";
   if(cox==1 and coy==-1) ret "RD";
   if(cox==-1 and coy==-1) ret "LD";
   if(cox==1 and coy==1) ret "RU";

}
int main()
{
   cin>>c>>s2;
   cin>>d>>d2;
   s1=c-96;
   d1=d-96;
   if(s1==d1 and s2==d2) {cout<<"0"; ret 0;}
   bfs(s1,s2);
   vector<string>v;
    ll curx, cury,px=d1,py=d2;
    ll desx,desy;
    pair<ll,ll>xc;
    for(  ;  ;)
    {
        xc=p[ {d1,d2}];
        curx=xc.fs , cury=xc.sc;
        v.pb(tellus(d1,d2,curx,cury));
        d1=curx; d2=cury;
        if(d1==s1 and d2==s2) break;

    }
    reverse(all(v));
    cout<<v.size()<<endl;
    for(auto it:v) cout<<it<<endl;

}