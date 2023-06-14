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

#define  sz                         1000
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
#define  ret                     return

vector<string>forb;
string b , g;
map<string,int> step;
char chkplus(char x)
{
    if (x==122) ret 97;
    else ret int(x)+1;
}
int chkminus(char x)
{
     if(x==97) ret 122;
     else ret int(x)-1;
}
vector<string > make6(string x)
{
    vector<string>res;
        for(int i=0 ; i<3 ; i++)
        {
           string p=x,q=x;
           p[i]=chkplus( x[i]);
           q[i]=chkminus( x[i]);
           //cout<<p<<" <> "<<q<<endl;
           res.pb(p); res.pb(q);
        }
    ret res;
}
int bfs(string bas)
{
    step[bas]=0;
     queue<string>q;   q.push(bas);
      while(!q.empty())
      {
           string  x=q.front();   q.pop();
          vector<string>six=make6(x);
          for(int j=0 ; j<six.size()  ;j++   )
        {
            string y=six[j];
            if( /*find ( all(forb) ,y )==forb.end() */  step[y]==0   )
            {
                //// cout<<" dusk till dawn - "<<y<<endl;
                step[y ]= step[x] +1;
                q.push(y);
                if(y==g) ret step[y];
            }
        }
      }
      ret -1;
}
void cle()
{
    forb.clear();
    step.clear();
}
int main()
{
    fast;
    ll tc; cin>>tc;
    LOOPeq(z,1,tc)
    {
        cle();
        cin>>b>>g;
        ll f;
        cin>>f;
        bool im=false;
        LOOP(i,0,f)
        {
            string bx,bb,bbb;
            cin>>bx>>bb>>bbb;
            LOOP(i,0,bx.size())
             {
                 LOOP(j,0,bb.size())
                    {
                        LOOP(k,0,bbb.size())
                        {
                            string cx;
                             cx.pb(bx[i]),cx.pb(bb[j]),cx.pb(bbb[k]);
                            forb.pb(cx);
                            step[cx]=-1;
                            if(cx==g || cx==b) im=true;
                        }
                    }
             }
           /// cout<<" forbidden "<<cx<<"   "<<endl;
        }
        cout<<"Case "<<z<<": ";
        if(im) cout<<"-1"<<endl;
       else  if(b==g) cout<<"0"<<endl;
       else cout<<bfs(b)<<endl;
    }
}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
