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

string bar="/" ,root=".." , io; ll re=0;
char cx='/';
vector <string>ans;vector <string>::iterator it;
stack<string>res;


void creatans()
{
    ans.clear();
    stack<string>res2=res;
    while(!res2.empty()){
    ans.pb(res2.top() ); res2.pop();
    }
    reverse(all(ans));
}
int main()
{
/////////////////////////////////////////
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
////////////////////////////////////////
   ll cas; cin>>cas;
   loop(i,0,cas){
   cin>>io;
   if(io=="pwd")
    {
    if(!i){cout<<"/\n";}
    else {
    cout<<"/";
    for( it=ans.begin() ; it!=ans.end() ; it++ )
    {
        cout<<*it<<"/";
    }
    eee;
   }
   continue;
   }
   cin>>io;   ///cout<<io;
   if(io[0]=='/') {stack<string>().swap(res); }
   re=0; string tmp;io.pb(cx);
   for(ll i=0 ; i<io.size() ; i++)
   {
     if ( io[i]==cx )
     {
      if(tmp.size()){res.push(tmp);}
      tmp.clear();
     }
    else if(io[i]=='.' && res.size() )
     {
        res.pop();i++;
     }
     else  tmp.pb(io[i]);

   }
      creatans();
   }

}


















