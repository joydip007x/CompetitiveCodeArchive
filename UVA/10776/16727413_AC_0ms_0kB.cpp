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

string res ,s;
bool vis[sz];
ll n,on;
void backtrack(ll x)
{
    if(res.size()==on)
    {
         cout<<res<<endl;
         ret;
    }
    for(ll i=x ; i<n ; i++)
    {
        if(  !vis[i] )
        {
            vis[i]=true;
            res.pb(s[i]);
            backtrack(i+1);
            vis[i]=false;
            res.pop_back();
        }
        while(s[i]==s[i+1]) i++;////USEFULL if input is "aabba 3" . it will not output "aab""aab" (exchanging same a 2 times) 
    }
}
/// HELP FROM-https://iuconvergent.wordpress.com/2016/11/13/uva-10776-determine-the-combination-solution/
///FUkin  DFS>>>> https://github.com/morris821028/UVa/raw/master/volume107/10776%20-%20Determine%20The%20Combination.cpp
int main()
{
    while( cin>>s>>on  )
    {
        srt(s);
        mem(vis,false);
        n=s.size();
        backtrack(0);
    }
}
