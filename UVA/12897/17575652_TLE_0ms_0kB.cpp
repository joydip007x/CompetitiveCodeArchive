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

#define  sz                         1000008
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

map<char , vector<ll> >m;
map<char , vector<ll> >::iterator it1,it2;
vector<ll>::iterator it3;
void change(char *s, ll siz , char tbr , char rw)
{
   //it1=m.find(tbr);
   //it2=m.find(rw);
   vector<ll>vv=m[tbr];
   m[rw].insert(m[rw].begin() , all(vv) );
   m.erase(tbr);

}
void judge(char *s , ll siz)
{
    loop(i,0,siz)
       m[ s[i] ].pb(i);
}
string out;
void proces()
{
    for( it2=m.begin(); it2!=m.end();it2++  )
    {
        for(it3=(it2->second).begin() ; it3!=(it2->second).end() ; it3++)
        {
           if(*it3>=0) out[*it3]=it2->first;
           ///cout<<"setting index = "<<*it3<<" wpth "<<it2->first<<endl;
        }
    }
}
int main()
{

    ll q,p;
    scanf("%lld",&q);
    while(q--)
    {
        loopeq(i,int('A'),int('Z')+1) {m[i].clear();m[i].pb(-1);        }
        m[95].clear(); m[95].pb(-1);
        char s[sz],a,b;
        scanf("%s",&s);
        o(p);
        judge(s,strlen(s));
        loop(j,0,p)
        {
            getchar();
            scanf("%c %c",&a,&b);
            change(s,strlen(s),b,a );
        }
        out.resize(strlen(s));
        out=s;
        proces();
        cout<<out<<'\n';
        out.clear();
        ///printf("%s\n",s);
    }


}
