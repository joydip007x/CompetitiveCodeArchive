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
map<string,bool>vis;
map<string , ll >step;
vector<string>dic;
vector<string>::iterator it,it2;
string st,en;
ll t;
bool  posi(string s,string p)
{

ll cnt=0;
          if(p.size()!=s.size()  || p==s ) ret false;
          for(ll i=0 ; i<s.size() ; i++)
          {
              if(s[i]!=p[i]) cnt++;
              if(cnt>1) ret false;
          }
          if(cnt==1) ret true;
          ret false;
}
ll bfs(string s)
{
     queue<string >q;
     vis[s]=1;
     step[s]=0;
      q.push(s);
      while(!q.empty())
      {
          string g=q.front();
          q.pop();
     for(it=dic.begin() ; it!=dic.end() ; it++)
     {
            if(posi(*it,g) and !vis[*it])
            {
                vis[*it]=1;
                step[*it]=step[g]+1;
                q.push(*it);
                if(*it==en) ret step[*it];
            }
     }
 if (vis[en] ) ret step[en];
    }
    ret -1;

}
int main()
{
    char a[500],b[500],c[500],d[500]; string e;
     scanf("%lld\n",&t);
     loop(z,0,t)
     {
        dic.clear();
        while(1)
        {
            scanf("%s\n",a);
            if(a[0]=='*') break;
            string s=a;
            dic.pb(s);
        }
       //// if(z) scanf("\n");
        while(1)
        {

            getline(cin,e);
            if(e[0]=='\0') break;
            bool cccc=0;
            st.clear();en.clear();
            loop(i,0,e.size())
            {
                if( e[i]==' ') cccc=1;
                if(!cccc and isalpha(e[i])) st.pb(e[i]);
                if(cccc and isalpha(e[i])) en.pb(e[i]);
            }
            cout<<st<<" "<<en<<" "<<bfs(st)<<'\n';
            vis.clear(); step.clear();

        }
        if(z+1!=t)eee;
     }

}

/*
2

dip
lip
mad
map
maple
may
pad
pip
pod
pop
sap
sip
slice
slick
spice
stick
stock
*/
