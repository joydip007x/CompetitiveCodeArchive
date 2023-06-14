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
map<int,int> step;
int chkplus(char x)
{
    if (x==96) ret 122;
    else ret int(x)+1;
}
int chkminus(char x)
{
     if(x==123) ret 96;
     else ret int(x)-1;
}
int bfs(string bas)
{
    //cout<<" called "<<bas<<endl;
    step[bas[0]]=0;step[bas[1]]=0;step[bas[2]]=0;
        for(int j=0 ; j<=2 ;j++   )
        {
            queue<char>q;
            q.push(bas[j]);
            bool fn=false;
            while( !q.empty())
            {
                char x=q.front();
                q.pop();
                int ps1=chkplus(x),ps2=chkminus(x);
               // cout<<ps1<<" :  "<<ps2<<endl;
                if(  step[ps1]>step[x]+1  && !fn)
                {
                    step[ps1]=step[x]+1;
                    q.push(ps1);
                }
                if(  step[ps2]>step[x]+1  && !fn)
                {
                    step[ps2]=step[x]+1;
                    q.push(ps2);
                }
                //if(ps1==g[j] || ps2==g[j]) {fn=true;
                ///queue<char>().swap(q);     }
            }
        }
}
int main()
{
    ll tc; cin>>tc;

    LOOPeq(z,1,tc)
    {

       LOOP(i,65,127)
         {
        step[i]=99999;
          }
     cin>>b>>g;
        ll f; cin>>f;
        bool im=false;
        LOOP(i,0,f)
        {
            string cx;
            char bx,bb,bbb; cin>>bx>>bb>>bbb;
            cx.pb(bx),cx.pb(bb),cx.pb(bbb);
            forb.pb(cx);
            if(cx==g || cx==b) im=true;
        }
        if(!im)bfs(b);
        cout<<"Case "<<z<<": ";
        ll y=step[g[0]]+step[g[1] ]+ step[ g[2] ];
        if(im) cout<<"-1"<<endl;
        if(b==g) cout<<"0"<<endl;
        else cout<<y+1<<endl;
    }
}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/
