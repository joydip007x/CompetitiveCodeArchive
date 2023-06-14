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

vector<string>dic;
char s[12] ,a[12],b[12],c[12];
string aa;
map<string , ll>dis;
bool onshot( string x, string y )
{
   ll len1=x.size() , len2=y.size() , cnt=0;
   if(len1!=len2) ret false;
    for ( ll i=0; i<len1 ; i++)
    {if (x[i]!=y[i]) cnt++;}
    if (cnt==1) ret true;
    ret false;
}
ll bfs( char s[ ] )
{
    if (s==b) ret 0;
     queue<string>q; q.push(s);
     while(!q.empty())
     {
         aa=q.front() ; q.pop();
          for (ll k=0 ; k<dic.size() ; k++)
          {
             if( onshot( aa, dic[k]  )  && dis[ dic[k] ]==0 )
             {
                 q.push(dic[k]);
                 dis [ dic[ k] ]= dis[aa]+1;
                 if (dic[k]==b) ret dis[b];
             }
          }
         if(dis[b]) {ret dis[b];}
     }
     ret 33;
}
void clearall()
{
    dis.clear();
}
int main()
{
   ll tc; cin>>tc;
   while(tc--)
   {
       while( gets(s) && s[0]!='*' ) {   dis[s]=0;  dic.pb(s);}
       while( gets(s) && s[0]!='\0')
       {
           clearall();
           sscanf(s,"%s %s",&a,&b);
           dis[a]=dis[b]=0;
          /// aa=a;
           cout<<a<<" "<<b<<" "<<bfs(a)<<endl;
          /// cout<<a<<" "<<b<<endl;
           ///cout<<" pp "<<s<<endl;
       }
       if(tc!=0)cout<<endl;
       dic.erase(all(dic));
   }

}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
