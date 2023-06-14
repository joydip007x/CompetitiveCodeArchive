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
vector<string >v={"pushLeft","pushRight","popLeft","popRight"};
int main()
{
    ll x,q,lastans,a,b,c,y; string s;
    ll t;
    o(t);
    ll zzz=0;
    while(t--){
      deque<ll>qq;
     o(x);o(q);
     cout<<"Case "<<++zzz<<":\n";
     while(q--)
     {
        cin>>s;
        if(s==v[0] || s==v[1] )cin>>y;
        if( (s==v[1] or s==v[0] ) and qq.size()==x ) {cout<<"The queue is full"<<endl; continue;}
        if( (s==v[2] or s==v[3] ) and qq.size()==0 ) {cout<<"The queue is empty"<<endl; continue;}
        if(s==v[0]) qq.push_front(y),cout<<"Pushed in left: "<<y<<'\n';
        if(s==v[1]) qq.push_back(y) ,cout<<"Pushed in right: "<<y<<'\n';
        if(s==v[2]) cout<<"Popped from left: "<<qq.front()<<'\n',qq.pop_front()  ;
        if(s==v[3])  cout<<"Popped from right: "<<qq.back()<<'\n',qq.pop_back() ;
     }


    }
ret 0;
}