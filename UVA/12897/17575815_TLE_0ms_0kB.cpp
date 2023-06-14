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
string out;
void proces()
{
    for( it2=m.begin(); it2!=m.end();it2++  )
    {
        for(it3=(it2->second).begin() ; it3!=(it2->second).end() ; it3++)
        {
           if(*it3>=0) out[*it3]=it2->first;
        }
    }
}
int main()
{
    ll q,p;
    scanf("%lld",&q);
    while(q--)
    {
        getchar();
        loopeq(i,int('A'),int('Z')+1) {m[i].clear();m[i].pb(-1);        }
        m[95].clear(); m[95].pb(-1);
        string s;
        char a,b;
        char cx='`';
        for( ll i=0 ;cx!='\n'; i++ )
        {
            cx=getchar();
            if(cx=='\n' || cx=='\0') break;
            s.pb(cx);
            m[ cx ].pb(i);
        }
        o(p);
        loop(j,0,p)
        {
            getchar();
            scanf("%c %c",&a,&b);
            char rw=a,tbr=b;
            vector<ll>vv=m[tbr];
            m[rw].insert(m[rw].begin() , all(vv) );
            m.erase(tbr);
        }
        out.resize(s.size());
        out=s;
        proces();
         printf("%s\n",out.c_str());
        ///cout<<out<<'\n';
        out.clear();
    }


}
