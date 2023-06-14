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

#define l1 '('
#define l2 '{'
#define l3 '['
#define l4 '<'
#define r1 ')'
#define r2 '}'
#define r3 ']'
#define r4 '>'
ll scor=0 ,fff=0 ;
char c; string s;
bool match(char a,char b)
{
    if(a==l1 && b==r1) ret 1;
    if(a==l2 && b==r2) ret 1;
    if(a==l3 && b==r3) ret 1;
    if(a==l4 && b==r4) ret 1;
    ret 0;
}
void process()
{
   ll lmt=s.size();
   stack<char>st;
   for(ll i=0 ; i<lmt ; i++)
   {
       c=s[i];
       if(c==l1 || c==l2 || c==l3 || c==l4) st.push(c);
       else
       {
           if(st.empty() ) {   fff=1; }
         else {if( !match(st.top(),c)) scor++;
            st.pop();
         }
       }
   }
   if(st.size()) fff=1;
   ret;
}
int main()
{
 getline(cin,s);
 if( !s.size() || s[0]==r1 || s[0]==r2 || s[0]==r3 || s[0]==r4 ) { printf("Impossible\n"); ret 0;}
 process();
 if(fff){ printf("Impossible\n"); ret 0;}
 printf("%lld\n",scor);



}
